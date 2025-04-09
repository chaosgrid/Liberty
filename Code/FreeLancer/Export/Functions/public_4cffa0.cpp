#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4690);
CLANG_FORWARD_PROC_SYMBOL(public_4c46a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);
CLANG_FORWARD_PROC_SYMBOL(public_4c5110);
CLANG_FORWARD_PROC_SYMBOL(public_4c52d0);
CLANG_FORWARD_PROC_SYMBOL(public_4cffa0);
CLANG_FORWARD_PROC_SYMBOL(public_4f42e0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bcb0);

#define public_4cffd0 _public_4cffd0
#define public_4cffe3 _public_4cffe3
#define public_4d0054 _public_4d0054
#define public_4d006f _public_4d006f
#define public_4d00e6 _public_4d00e6
#define public_4d0117 _public_4d0117
#define public_4d012c _public_4d012c
#define public_4d0166 _public_4d0166

PROC_DECLARE(0x4cffa0, internal_4cffa0, public_4cffa0);
extern "C" NAKED register_t __cdecl internal_4cffa0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x418]
        sub esp, 0x34
        test eax, eax
        push esi
        push edi
        jle public_4d0166
        mov edx, dword ptr ss : [esp+0x40]
        cmp edx, eax
        jge public_4d0166
        mov ecx, dword ptr ds : [ecx+0x414]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_4d0166
        nop 
        public_4cffd0 : nop
        test edx, edx
        je public_4cffe3
        mov eax, dword ptr ds : [eax]
        dec edx
        cmp eax, ecx
        jne public_4cffd0
        pop edi
        pop esi
        add esp, 0x34
        ret 4
        public_4cffe3 : nop
        lea esi, ds:[eax+8]
        test esi, esi
        je public_4d0166
        mov eax, dword ptr ds : [esi]
        cmp eax, 4
        jne public_4d006f
        mov esi, dword ptr ds : [esi+0x14]
        call public_4c4690
        cmp esi, eax
        jge public_4d0166
        push esi
        call public_4c46a0
        mov edx, dword ptr ds : [eax+0x10]
        add esp, 4
        test edx, edx
        je public_4d0054
        xor eax, eax
        mov ecx, 0xA
        lea edi, ss:[esp+0x14]
        rep stosd
        mov eax, dword ptr ds : [public_5c6368]
        mov byte ptr ss : [esp+0x3A], 1
        mov dword ptr ss : [esp+0x14], 0x1C
        movzx ecx, word ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], edx
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x2C], ecx
        call public_54bcb0
        add esp, 4
        pop edi
        pop esi
        add esp, 0x34
        ret 4
        public_4d0054 : nop
        mov ecx, dword ptr ds : [eax+0x14]
        push ecx
        mov ecx, dword ptr ds : [public_674bc8]
        push esi
        push 1
        push eax
        call public_4f42e0
        pop edi
        pop esi
        add esp, 0x34
        ret 4
        public_4d006f : nop
        cmp eax, 3
        jne public_4d0117
        mov esi, dword ptr ds : [esi+0x14]
        call public_4c4fb0
        cmp esi, eax
        jge public_4d0166
        push esi
        call public_4c4ff0
        mov edi, eax
        add esp, 4
        mov ecx, edi
        call public_4c5110
        mov edx, eax
        test edx, edx
        je public_4d00e6
        xor eax, eax
        mov ecx, 0xA
        lea edi, ss:[esp+0x14]
        rep stosd
        mov eax, dword ptr ds : [public_5c6368]
        mov byte ptr ss : [esp+0x3A], 1
        mov dword ptr ss : [esp+0x14], 0x1C
        movzx ecx, word ptr ds : [eax]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, edx
        call dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x28], eax
        call public_54bcb0
        add esp, 4
        pop edi
        pop esi
        add esp, 0x34
        ret 4
        public_4d00e6 : nop
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, edi
        call public_4c52d0
        test al, al
        je public_4d0166
        push esi
        push esi
        push 0
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [public_674bc8]
        call public_4f42e0
        pop edi
        pop esi
        add esp, 0x34
        ret 4
        public_4d0117 : nop
        call public_54baf0
        test eax, eax
        je public_4d012c
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        cmp dword ptr ds : [esi+0x10], eax
        je public_4d0166
        public_4d012c : nop
        mov edx, dword ptr ds : [esi+0x10]
        xor eax, eax
        mov ecx, 0xA
        lea edi, ss:[esp+0x14]
        rep stosd
        mov eax, dword ptr ds : [public_5c6368]
        mov byte ptr ss : [esp+0x3A], 1
        mov dword ptr ss : [esp+0x14], 0x1C
        movzx ecx, word ptr ds : [eax]
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], ecx
        call public_54bcb0
        add esp, 4
        public_4d0166 : nop
        pop edi
        pop esi
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x4cffa0)
    }
}

#undef public_4cffd0
#undef public_4cffe3
#undef public_4d0054
#undef public_4d006f
#undef public_4d00e6
#undef public_4d0117
#undef public_4d012c
#undef public_4d0166
