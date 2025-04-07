#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e270);

PROC_DECLARE(0x631a9d0, internal_631a9d0, public_631a9d0);
extern "C" NAKED register_t __cdecl internal_631a9d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x14]
        mov ecx, edi
        call public_630e270
        lea ebx, ds:[esi+0x2C]
        mov ecx, ebx
        call public_630e270
        lea ebp, ds:[esi+0x44]
        mov ecx, ebp
        call public_630e270
        xor eax, eax
        mov ecx, edi
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        call public_630e270
        xor eax, eax
        mov ecx, 6
        rep stosd
        mov ecx, ebx
        call public_630e270
        xor eax, eax
        mov ecx, 6
        mov edi, ebx
        rep stosd
        mov ecx, ebp
        call public_630e270
        xor eax, eax
        mov edi, ebp
        mov ecx, 6
        rep stosd
        pop edi
        mov dword ptr ds : [esi+0x5C], eax
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x631a9d0)
    }
}
