#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5397f0);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_543b40);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);
CLANG_FORWARD_PROC_SYMBOL(public_54bc60);

#define public_53d77a _public_53d77a
#define public_53d77c _public_53d77c
#define public_53d78c _public_53d78c
#define public_53d799 _public_53d799
#define public_53d7bc _public_53d7bc
#define public_53d7be _public_53d7be
#define public_53d7c8 _public_53d7c8
#define public_53d7d5 _public_53d7d5

PROC_DECLARE(0x53d720, internal_53d720, public_53d720);
extern "C" NAKED register_t __cdecl internal_53d720()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx]
        push esi
        push 0
        push eax
        call public_5416c0
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_53d7d5
        mov ecx, dword ptr ds : [ebx+4]
        push edi
        push 0
        push ecx
        call public_5416c0
        mov edi, eax
        add esp, 8
        test edi, edi
        je public_53d799
        call public_54baf0
        cmp esi, eax
        jne public_53d78c
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_53d77a
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_53d77a
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        je public_53d77c
        public_53d77a : nop
        xor eax, eax
        public_53d77c : nop
        add eax, 0x164
        push eax
        call public_54bc60
        add esp, 4
        jmp public_53d799
        public_53d78c : nop
        call public_54bb00
        push eax
        mov ecx, esi
        call public_5397f0
        public_53d799 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_53d7c8
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_53d7bc
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_53d7be
        public_53d7bc : nop
        xor eax, eax
        public_53d7be : nop
        push eax
        call dword ptr ds : [public_5c6a58]
        add esp, 4
        public_53d7c8 : nop
        add ebx, 8
        push ebx
        push edi
        mov ecx, esi
        call public_543b40
        pop edi
        public_53d7d5 : nop
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x53d720)
    }
}

#undef public_53d77a
#undef public_53d77c
#undef public_53d78c
#undef public_53d799
#undef public_53d7bc
#undef public_53d7be
#undef public_53d7c8
#undef public_53d7d5
