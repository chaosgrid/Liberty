#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6243d30);

PROC_DECLARE(0x6243d30, internal_6243d30, public_6243d30);
extern "C" NAKED register_t __cdecl internal_6243d30()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0x3F800000
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_624fab0
        ret 
        UNREACHABLE_TRAP(0x6243d30)
    }
}
