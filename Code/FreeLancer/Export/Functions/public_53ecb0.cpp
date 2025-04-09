#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_542790);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_53ecd9 _public_53ecd9
#define public_53ece0 _public_53ece0
#define public_53ed15 _public_53ed15
#define public_53ed2c _public_53ed2c
#define public_53ed5f _public_53ed5f
#define public_53ed6f _public_53ed6f

PROC_DECLARE(0x53ecb0, internal_53ecb0, public_53ecb0);
extern "C" NAKED register_t __cdecl internal_53ecb0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call public_542790
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_53ecd9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_53ecd9
        mov edi, dword ptr ds : [eax+0xB4]
        jmp public_53ece0
        public_53ecd9 : nop
        call public_54bb00
        mov edi, eax
        public_53ece0 : nop
        call public_54bb00
        cmp edi, eax
        jne public_53ed2c
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        je public_53ed15
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0xA7
        cmp dl, 0xA7
        jne public_53ed15
        mov edx, dword ptr ds : [public_5c6918]
        mov edx, dword ptr ds : [edx]
        mov ecx, esi
        mov eax, dword ptr ds : [ecx]
        push edx
        push ebx
        call dword ptr ds : [eax+0x50]
        pop edi
        pop esi
        pop ebx
        ret 4
        public_53ed15 : nop
        mov edx, dword ptr ds : [public_5c6918]
        mov edx, dword ptr ds : [edx]
        xor ecx, ecx
        mov eax, dword ptr ds : [ecx]
        push edx
        push ebx
        call dword ptr ds : [eax+0x50]
        pop edi
        pop esi
        pop ebx
        ret 4
        public_53ed2c : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_53ed6f
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        je public_53ed5f
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0xA7
        cmp al, 0xA7
        jne public_53ed5f
        mov eax, dword ptr ds : [public_5c6914]
        mov eax, dword ptr ds : [eax]
        mov ecx, esi
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebx
        call dword ptr ds : [edx+0x50]
        pop edi
        pop esi
        pop ebx
        ret 4
        public_53ed5f : nop
        mov eax, dword ptr ds : [public_5c6914]
        mov eax, dword ptr ds : [eax]
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebx
        call dword ptr ds : [edx+0x50]
        public_53ed6f : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x53ecb0)
    }
}

#undef public_53ecd9
#undef public_53ece0
#undef public_53ed15
#undef public_53ed2c
#undef public_53ed5f
#undef public_53ed6f
