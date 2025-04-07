#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637d4e0);

PROC_DECLARE(0x637d4e0, internal_637d4e0, public_637d4e0);
extern "C" NAKED register_t __cdecl internal_637d4e0()
{
    __asm
    {
        fild dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x18]
        fld qword ptr ss : [esp+8]
        fdiv st, st(1)
        fld st(0)
        fstp qword ptr ds : [eax]
        fld qword ptr ss : [esp+0x10]
        fdivrp st(2), st
        fld st(0)
        fmul st, st(1)
        fsubp st(2), st
        fxch 
        fsqrt 
        fxch 
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x637d4e0)
    }
}
