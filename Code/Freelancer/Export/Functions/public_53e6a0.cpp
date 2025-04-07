#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539c60);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_53e6c9 _public_53e6c9
#define public_53e6d0 _public_53e6d0
#define public_53e708 _public_53e708
#define public_53e71f _public_53e71f
#define public_53e755 _public_53e755
#define public_53e765 _public_53e765

PROC_DECLARE(0x53e6a0, internal_53e6a0, public_53e6a0);
extern "C" NAKED register_t __cdecl internal_53e6a0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call public_539c60
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_53e6c9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_53e6c9
        mov edi, dword ptr ds : [eax+0xB4]
        jmp public_53e6d0
        public_53e6c9 : nop
        call public_54bb00
        mov edi, eax
        public_53e6d0 : nop
        call public_54bb00
        cmp edi, eax
        jne public_53e71f
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        je public_53e708
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0x803
        cmp edx, 0x803
        jne public_53e708
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
        public_53e708 : nop
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
        public_53e71f : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_53e765
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        je public_53e755
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x803
        cmp eax, 0x803
        jne public_53e755
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
        public_53e755 : nop
        mov eax, dword ptr ds : [public_5c6914]
        mov eax, dword ptr ds : [eax]
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebx
        call dword ptr ds : [edx+0x50]
        public_53e765 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x53e6a0)
    }
}

#undef public_53e6c9
#undef public_53e6d0
#undef public_53e708
#undef public_53e71f
#undef public_53e755
#undef public_53e765
