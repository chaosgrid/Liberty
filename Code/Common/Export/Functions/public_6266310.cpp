#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6266310);

PROC_DECLARE(0x6266310, internal_6266310, public_6266310);
extern "C" NAKED register_t __cdecl internal_6266310()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6266310)
    }
}
