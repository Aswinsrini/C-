"use client";

const Page = () => {
  return (
    <div>
      Number Guessing Game
      <br />
      <input
        type="number"
        max={2}
        className="w-10 h-5 border border-solid border-black mx-2 "
      />
      <input
        type="number"
        minLength={1}
        maxLength={1}
        className="w-10 h-5 border border-solid border-black mx-2"
      />
      <input
        type="number"
        minLength={1}
        maxLength={1}
        className="w-10 h-5 border border-solid border-black mx-2"
      />
      <input
        type="number"
        minLength={1}
        maxLength={1}
        className="w-10 h-5 border border-solid border-black mx-2"
      />
    </div>
  );
};

export default Page;
