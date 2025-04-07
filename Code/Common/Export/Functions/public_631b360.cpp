#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e270);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

PROC_DECLARE(0x631b360, internal_631b360, public_631b360);
extern "C" NAKED register_t __cdecl internal_631b360()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x10]
        mov ecx, edi
        call public_630e270
        lea ebp, ds:[esi+0x28]
        mov ecx, ebp
        call public_630e270
        lea ebx, ds:[esi+0x40]
        mov ecx, ebx
        call public_630e270
        lea eax, ds:[esi+0x58]
        push eax
        call public_6334430
        xor eax, eax
        add esp, 4
        mov ecx, edi
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        mov byte ptr ds : [esi+8], al
        mov byte ptr ds : [esi+9], al
        mov dword ptr ds : [esi+0xC], eax
        call public_630e270
        xor eax, eax
        mov ecx, 6
        rep stosd
        mov ecx, ebp
        call public_630e270
        xor eax, eax
        mov ecx, 6
        mov edi, ebp
        rep stosd
        mov ecx, ebx
        call public_630e270
        xor eax, eax
        mov edi, ebx
        mov ecx, 6
        rep stosd
        pop edi
        mov dword ptr ds : [esi+0x58], eax
        mov dword ptr ds : [esi+0x5C], eax
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x631b360)
    }
}
