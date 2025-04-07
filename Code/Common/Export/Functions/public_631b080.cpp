#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_630e270);

PROC_DECLARE(0x631b080, internal_631b080, public_631b080);
extern "C" NAKED register_t __cdecl internal_631b080()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        lea ebx, ds:[esi+0xC]
        push edi
        mov ecx, ebx
        call public_630e270
        xor eax, eax
        mov ecx, ebx
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        mov byte ptr ds : [esi+8], al
        call public_630e270
        xor eax, eax
        mov ecx, 6
        mov edi, ebx
        rep stosd
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov cl, byte ptr ds : [eax+8]
        add eax, 0xC
        mov byte ptr ds : [esi+8], cl
        push eax
        mov ecx, ebx
        call public_630dda0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x631b080)
    }
}
