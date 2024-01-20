"use client";
import { useState } from "react";

import dynamic from "next/dynamic";
const HeavyComponent = dynamic(() => import("./heavyComponent"), {
  loading: () => <p>Loading...</p>,
});
const page = () => {
  const [visible, setVisible] = useState(false);
  return (
    <div>
      <button onClick={() => setVisible(true)}>show</button>
      {visible && <HeavyComponent />}
      <div>
        <button
          onClick={async () => {
            //import lodash dynamically
            const _ = (await import("lodash")).default;
            const users = [{ name: "c" }, { name: "b" }, { name: "a" }];
            const sorted = _.orderBy(users, ["name"]);
            console.log(sorted);
          }}
        >
          sort
        </button>
      </div>
    </div>
  );
};

export default page;
