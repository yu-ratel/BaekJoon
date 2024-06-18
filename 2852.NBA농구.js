const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");
input.shift();

function soution() {
  let totalTime = setTime("48:00");
  const table = input.map((time) => time.split(" "));
  let [one, two, oneTime, twoTime, pervTime] = [0, 0, 0, 0, 0];
  // team 스코어, 이기고 있는 시간, 기준이되는 이전 시간
  for (let i = 0; i < table.length; i += 1) {
    let [curTeam, time] = table[i];
    time = setTime(time);
    // 이기고 있을 때 현재시간 - 이전시간
    if (one > two) oneTime += time - pervTime;
    if (two > one) twoTime += time - pervTime;

    curTeam === "1" ? (one += 1) : (two += 1);
    // 처음은 카운팅하면 안되니 if문 보다 밑에
    pervTime = time;
    // 처음부터 이전시간 초기화
  }
  // 맨 마지막 남은 경기 시간 할당 ( 같은경우 === 제외하기 위해 if)
  if (one > two) oneTime += totalTime - pervTime;
  if (two > one) twoTime += totalTime - pervTime;

  console.log(formatTime(oneTime));
  console.log(formatTime(twoTime));
}

const setTime = (timeStr) => {
  const [hour, min] = timeStr.split(":");
  return Number(hour) * 60 + Number(min);
};

const formatTime = (time) => {
  const hour = Math.floor(time / 60)
    .toString()
    .padStart(2, 0);
  const min = (time % 60).toString().padStart(2, 0);

  return `${hour}:${min}`;
};

soution();
