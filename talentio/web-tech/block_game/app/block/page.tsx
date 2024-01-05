"use client";
import { useState } from "react";
const Page = () => {
  const [Position, setPosition] = useState({ top: 10, left: 10 });
  const [Score, setScore] = useState(0);
  const changePosition = () => {
    const pos = {
      top: Math.floor(Math.random() * 90),
      left: Math.floor(Math.random() * 90),
    };
    setScore((prevState) => prevState + 1);
    setPosition(pos);
  };

  const reStartGame = () => {
    setScore(0);
  };
  return (
    <div className="min-h-screen bg-slate-600">
      <center>
        <h1 className="font-bold text-green-400 text-3xl">Score : {Score}</h1>
        <button
          className="text-white bg-gradient-to-br from-purple-600 to-blue-500 hover:bg-gradient-to-bl focus:outline-none focus:ring-blue-300 dark:focus:ring-blue-800 font-medium rounded-lg text-sm px-5 py-2.5 text-center me-2 mb-2"
          onClick={reStartGame}
        >
          Restart the Game!
        </button>
      </center>

      <div
        className="w-20 h-20 bg-red-700 absolute"
        id="block"
        onClick={changePosition}
        style={{
          top: `${Position.top}%`,
          left: `${Position.left}%`,
        }}
      ></div>
    </div>
  );
};

export default Page;
