#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac9250);
CLANG_FORWARD_PROC_SYMBOL(public_6ac9290);
CLANG_FORWARD_PROC_SYMBOL(public_6ac9430);

#define public_6ac9452 _public_6ac9452

PROC_DECLARE(0x6ac9430, internal_6ac9430, public_6ac9430);
extern "C" NAKED register_t __cdecl internal_6ac9430()
{
    __asm
    {
        sub esp, 0x48
        mov edx, 0x40
        push ebx
        mov ebx, dword ptr ss : [esp+0x50]
        push ebp
        push esi
        mov esi, dword ptr ds : [ebx+0x30]
        push edi
        mov eax, esi
        and eax, 0x3F
        sub edx, eax
        cmp edx, 8
        ja public_6ac9452
        add edx, 0x40
        public_6ac9452 : nop
        lea ecx, ds:[edx-6]
        xor eax, eax
        mov ebp, ecx
        lea edi, ss:[esp+0x10]
        shr ecx, 2
        rep stosd
        mov ecx, ebp
        push edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr ds : [ebx+0x2C]
        mov ecx, esi
        shl eax, 3
        shr ecx, 0x1D
        or eax, ecx
        mov byte ptr ss : [esp+0x14], 0x80
        lea ecx, ds:[esi*8]
        mov dword ptr ss : [esp+edx+0xC], eax
        mov dword ptr ss : [esp+edx+0x10], ecx
        lea edx, ss:[esp+0x14]
        push edx
        push ebx
        call public_6ac9290
        lea esi, ds:[ebx+0x18]
        mov ecx, 5
        mov edi, dword ptr ss : [esp+0x60]
        push ebx
        rep movsd
        call public_6ac9250
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x6ac9430)
    }
}

#undef public_6ac9452
