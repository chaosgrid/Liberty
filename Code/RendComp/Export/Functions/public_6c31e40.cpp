#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31e40);

PROC_DECLARE(0x6c31e40, internal_6c31e40, public_6c31e40);
extern "C" NAKED register_t __cdecl internal_6c31e40()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x6c31e40)
    }
}
