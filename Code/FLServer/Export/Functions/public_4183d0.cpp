#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4192b4);

PROC_DECLARE(0x4183d0, internal_4183d0, public_4183d0);
extern "C" NAKED register_t __cdecl internal_4183d0()
{
    __asm
    {
        call public_4192b4
        mov eax, dword ptr ds : [public_41bb98]
        mov dword ptr ds : [eax], 0
        ret 
        UNREACHABLE_TRAP(0x4183d0)
    }
}
