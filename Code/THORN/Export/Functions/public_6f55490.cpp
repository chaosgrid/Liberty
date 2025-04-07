#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55490);

PROC_DECLARE(0x6f55490, internal_6f55490, public_6f55490);
extern "C" NAKED register_t __cdecl internal_6f55490()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ds : [eax+0x28], ecx
        ret 
        UNREACHABLE_TRAP(0x6f55490)
    }
}
