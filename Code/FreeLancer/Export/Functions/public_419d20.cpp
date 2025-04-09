#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419d20);

PROC_DECLARE(0x419d20, internal_419d20, public_419d20);
extern "C" NAKED register_t __cdecl internal_419d20()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax+4], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov byte ptr ds : [eax+0x20], cl
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax], offset public_5c8eb4
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x419d20)
    }
}
