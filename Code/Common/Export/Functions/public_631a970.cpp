#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e270);

PROC_DECLARE(0x631a970, internal_631a970, public_631a970);
extern "C" NAKED register_t __cdecl internal_631a970()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        lea edi, ds:[esi+0x14]
        mov ecx, edi
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_630e270
        xor eax, eax
        mov ecx, 6
        rep stosd
        lea edi, ds:[esi+0x2C]
        mov ecx, edi
        call public_630e270
        xor eax, eax
        mov ecx, 6
        rep stosd
        lea edi, ds:[esi+0x44]
        mov ecx, edi
        call public_630e270
        mov ecx, 6
        xor eax, eax
        rep stosd
        pop edi
        mov dword ptr ds : [esi+0x5C], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x631a970)
    }
}
