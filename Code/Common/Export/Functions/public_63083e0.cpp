#include "Common-PCH.h"

PROC_DECLARE(0x63083e0, internal_63083e0, public_63083e0);
extern "C" NAKED register_t __cdecl internal_63083e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fild qword ptr ds : [eax]
        fmul qword ptr ds : [public_63fcec8]
        ret 
        UNREACHABLE_TRAP(0x63083e0)
    }
}
