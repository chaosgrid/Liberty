#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b6600);

PROC_DECLARE(0x5b6600, internal_5b6600, public_5b6600);
extern "C" NAKED register_t __cdecl internal_5b6600()
{
    __asm
    {
        push ecx
        mov dl, byte ptr ss : [esp+3]
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov byte ptr ds : [eax+0x10], dl
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5b6600)
    }
}
