#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf73d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0cc00);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);

#define public_6d0cc1e _public_6d0cc1e
#define public_6d0cc34 _public_6d0cc34
#define public_6d0cc36 _public_6d0cc36
#define public_6d0cc77 _public_6d0cc77
#define public_6d0cc79 _public_6d0cc79
#define public_6d0cc85 _public_6d0cc85
#define public_6d0cca2 _public_6d0cca2
#define public_6d0cca4 _public_6d0cca4
#define public_6d0ccb2 _public_6d0ccb2
#define public_6d0cce8 _public_6d0cce8
#define public_6d0cd22 _public_6d0cd22
#define public_6d0cd46 _public_6d0cd46
#define public_6d0cd4d _public_6d0cd4d

PROC_DECLARE(0x6d0cc00, internal_6d0cc00, public_6d0cc00);
extern "C" NAKED register_t __cdecl internal_6d0cc00()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ss : [esp+0x44]
        push esi
        xor ebx, ebx
        test ecx, ecx
        push edi
        je public_6d0cc1e
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x154]
        mov ebx, eax
        public_6d0cc1e : nop
        mov edi, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6d0cc34
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d0cc36
        public_6d0cc34 : nop
        xor eax, eax
        public_6d0cc36 : nop
        mov ecx, dword ptr ds : [eax+0xB4]
        test ecx, ecx
        mov esi, dword ptr ss : [esp+0x50]
        push ebp
        mov ebp, dword ptr ss : [esp+0x58]
        jne public_6d0ccb2
        test bl, 0x40
        jne public_6d0cc85
        test bh, 8
        jne public_6d0cc85
        test bh, 4
        je public_6d0ccb2
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_6d0cc77
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6d0cc77
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_6d0cc79
        public_6d0cc77 : nop
        xor eax, eax
        public_6d0cc79 : nop
        push ebp
        push esi
        mov ecx, eax
        call dword ptr ds : [public_6d646e0]
        jmp public_6d0ccb2
        public_6d0cc85 : nop
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_6d0cca2
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6d0cca2
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_6d0cca4
        public_6d0cca2 : nop
        xor ecx, ecx
        public_6d0cca4 : nop
        push 0x3F000000
        push ebp
        push esi
        push edi
        call dword ptr ds : [public_6d646dc]
        public_6d0ccb2 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [public_6d8da08]
        test eax, eax
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], edx
        jne public_6d0cce8
        call public_6d5ff70
        mov dword ptr ds : [public_6d8da08], eax
        public_6d0cce8 : nop
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], edx
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        pop ebp
        je public_6d0cd4d
        public_6d0cd22 : nop
        push edi
        lea ecx, ds:[esi+8]
        call public_6cf73d0
        test al, al
        je public_6d0cd46
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x20]
        push eax
        mov eax, dword ptr ds : [esi+0x40]
        push eax
        call dword ptr ds : [edx+0xE8]
        public_6d0cd46 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0xC]
        jne public_6d0cd22
        public_6d0cd4d : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x38
        ret 0x10
        UNREACHABLE_TRAP(0x6d0cc00)
    }
}

#undef public_6d0cc1e
#undef public_6d0cc34
#undef public_6d0cc36
#undef public_6d0cc77
#undef public_6d0cc79
#undef public_6d0cc85
#undef public_6d0cca2
#undef public_6d0cca4
#undef public_6d0ccb2
#undef public_6d0cce8
#undef public_6d0cd22
#undef public_6d0cd46
#undef public_6d0cd4d
