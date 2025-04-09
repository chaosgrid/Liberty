#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59b890);

PROC_DECLARE(0x59b890, internal_59b890, public_59b890);
extern "C" NAKED register_t __cdecl internal_59b890()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+4], 0
        ret 
        UNREACHABLE_TRAP(0x59b890)
    }
}
