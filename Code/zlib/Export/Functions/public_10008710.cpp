#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10008710);

PROC_DECLARE(0x10008710, internal_10008710, public_10008710);
extern "C" NAKED register_t __cdecl internal_10008710()
{
    __asm
    {
        push esi
        mov eax, ecx
        shr eax, 0x10
        mov esi, eax
        and esi, 0x1F
        mov dword ptr ds : [edx+0xC], esi
        mov esi, eax
        shr eax, 9
        and eax, 0x7F
        add eax, 0x7BC
        mov dword ptr ds : [edx+0x14], eax
        mov eax, ecx
        shr eax, 0xB
        and eax, 0x1F
        shr esi, 5
        mov dword ptr ds : [edx+8], eax
        mov eax, ecx
        and esi, 0xF
        dec esi
        shr eax, 5
        and ecx, 0x1F
        and eax, 0x3F
        shl ecx, 1
        mov dword ptr ds : [edx+0x10], esi
        mov dword ptr ds : [edx+4], eax
        mov dword ptr ds : [edx], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x10008710)
    }
}
