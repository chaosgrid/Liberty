#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_573840);

PROC_DECLARE(0x573840, internal_573840, public_573840);
extern "C" NAKED register_t __cdecl internal_573840()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov byte ptr ds : [eax+0xC], cl
        mov dword ptr ds : [eax+0x224], ecx
        mov dword ptr ds : [eax+0x210], offset public_5e2718
        mov dword ptr ds : [eax], offset public_5e3034
        ret 
        UNREACHABLE_TRAP(0x573840)
    }
}
