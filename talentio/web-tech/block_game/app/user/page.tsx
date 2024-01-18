import Image from "next/image";
import leetcode from "@/public/images/leetcode.png";

const User = () => {
  return (
    <div className="relative h-screen">
      <Image
        src={leetcode}
        alt="LeetCode"
        className="object-cover"
        fill
        // quality={100}
        sizes="(max-width: 768px) 100vw, 33vw"
        unoptimized={true}
      />
    </div>
  );
};

export default User;
