# Has to be authorized using:
# Set-ExecutionPolicy -ExecutionPolicy Unrestricted -Scope CurrentUser
$REPO="fredblgr/"
$IMAGE="docker-3asem"
$TAG="2021"
$RESOL="1440x900"
docker run --rm -d -p 6080:80 -v "${PWD}:/workspace:rw" -e "RESOLUTION=${RESOL}" --name "${IMAGE}-run" "${REPO}${IMAGE}:${TAG}"
Start-Sleep -s 5
Start http://localhost:6080
