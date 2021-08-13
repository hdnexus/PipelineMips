using namespace std;

class ControlSignals
{
private:
public:
  bool RegDst;
  bool ALUSrc;
  bool MemtoReg;
  bool RegWrite;
  bool MemRead;
  bool MemWrite;
  bool Branch;
  bool ALUOp1;
  bool ALUOp0;
  bool Jump;

  ControlSignals();
  ~ControlSignals();

  void setControlSignals(unsigned int opcode);
};