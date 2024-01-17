import {
  Html,
  Body,
  Container,
  Text,
  Link,
  Preview,
} from "@react-email/components";

const Template = ({ name }: { name: string }) => {
  return (
    <Html>
      <Preview>Welcom aborad</Preview>
      <Body>
        <Container>
          <Text>hello {name}</Text>
          <Link href="aswins.dev">aswins.dev</Link>
        </Container>
      </Body>
    </Html>
  );
};

export default Template;
