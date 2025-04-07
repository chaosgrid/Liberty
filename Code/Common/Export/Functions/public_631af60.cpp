#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e270);

PROC_DECLARE(0x631af60, internal_631af60, public_631af60);
extern "C" NAKED register_t __cdecl internal_631af60()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0xC]
        mov ecx, edi
        call public_630e270
        xor eax, eax
        mov ecx, edi
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        mov byte ptr ds : [esi+8], al
        call public_630e270
        mov ecx, 6
        xor eax, eax
        rep stosd
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x631af60)
    }
}
