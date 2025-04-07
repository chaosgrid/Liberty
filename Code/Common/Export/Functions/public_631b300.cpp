#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e270);

PROC_DECLARE(0x631b300, internal_631b300, public_631b300);
extern "C" NAKED register_t __cdecl internal_631b300()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        lea edi, ds:[esi+0x10]
        mov ecx, edi
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi+8], bl
        mov byte ptr ds : [esi+9], bl
        mov dword ptr ds : [esi+0xC], ebx
        call public_630e270
        xor eax, eax
        mov ecx, 6
        rep stosd
        lea edi, ds:[esi+0x28]
        mov ecx, edi
        call public_630e270
        xor eax, eax
        mov ecx, 6
        rep stosd
        lea edi, ds:[esi+0x40]
        mov ecx, edi
        call public_630e270
        mov ecx, 6
        xor eax, eax
        rep stosd
        pop edi
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x631b300)
    }
}
