"use client";
import { useState } from "react";
const Page = () => {
  const [Position, setPosition] = useState({ top: 100, left: 10 });
  const [Score, setScore] = useState(0);
  const changePosition = () => {
    const pos = {
      top: Math.floor(Math.random() * window.innerHeight),
      left: Math.floor(Math.random() * window.innerHeight),
    };
    setScore((prevState) => prevState + 1);
    // console.log(Position);
    setPosition(pos);
  };
  return (
    <div className="h-screen w-max">
      <h1 className="">Score :{Score}</h1>
      <div
        className="w-20 h-20 bg-red-700 absolute"
        id="block"
        onClick={changePosition}
        style={{
          top: `${Position.top}px`,
          left: `${Position.left}px`,
        }}
      ></div>
    </div>
  );
};

export default Page;
