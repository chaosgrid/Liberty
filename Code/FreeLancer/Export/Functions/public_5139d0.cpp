#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_5139d0);
CLANG_FORWARD_PROC_SYMBOL(public_5379b0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_5139f8 _public_5139f8
#define public_513a7c _public_513a7c
#define public_513a96 _public_513a96
#define public_513aab _public_513aab
#define public_513ac1 _public_513ac1
#define public_513ad6 _public_513ad6
#define public_513ae3 _public_513ae3
#define public_513af9 _public_513af9
#define public_513b0a _public_513b0a
#define public_513b19 _public_513b19
#define public_513b22 _public_513b22

PROC_DECLARE(0x5139d0, internal_5139d0, public_5139d0);
extern "C" NAKED register_t __cdecl internal_5139d0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push esi
        push edi
        call public_54baf0
        mov esi, dword ptr ss : [esp+0x40]
        xor ebx, ebx
        cmp esi, eax
        jne public_513ae3
        mov ecx, dword ptr ds : [esi+0x17C]
        cmp ecx, ebx
        je public_5139f8
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_5139f8 : nop
        mov ecx, dword ptr ds : [esi+0x178]
        cmp ecx, ebx
        je public_513a7c
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov edx, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        call dword ptr ds : [edx+0x94]
        mov ecx, dword ptr ds : [esi+0x178]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_513a7c : nop
        mov ecx, dword ptr ds : [esi+0x180]
        cmp ecx, ebx
        je public_513a96
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0x180]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_513a96 : nop
        mov ecx, dword ptr ds : [esi+0x17C]
        cmp ecx, ebx
        je public_513aab
        call public_4f7a90
        mov dword ptr ds : [esi+0x17C], ebx
        public_513aab : nop
        mov eax, dword ptr ds : [esi+0x178]
        cmp eax, ebx
        je public_513ac1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x178], ebx
        public_513ac1 : nop
        mov ecx, dword ptr ds : [esi+0x180]
        cmp ecx, ebx
        je public_513ad6
        call public_537ad0
        mov dword ptr ds : [esi+0x180], ebx
        public_513ad6 : nop
        mov dword ptr ds : [esi+0x174], ebx
        and byte ptr ds : [esi+0x184], 0xBF
        public_513ae3 : nop
        mov eax, dword ptr ds : [esi+0x16C]
        cmp eax, ebx
        lea edi, ds:[esi+0x164]
        je public_513af9
        test byte ptr ds : [eax+8], 2
        je public_513b19
        public_513af9 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        je public_513b0a
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x14]
        test al, al
        jne public_513b19
        public_513b0a : nop
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ebx
        je public_513b22
        cmp dword ptr ds : [eax+0xD4], ebx
        jne public_513b22
        public_513b19 : nop
        push edi
        lea ecx, ds:[esi+0x28]
        call public_4fcef0
        public_513b22 : nop
        pop edi
        mov dword ptr ds : [esi+0x184], ebx
        mov dword ptr ds : [esi+0x160], ebx
        pop esi
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x5139d0)
    }
}

#undef public_5139f8
#undef public_513a7c
#undef public_513a96
#undef public_513aab
#undef public_513ac1
#undef public_513ad6
#undef public_513ae3
#undef public_513af9
#undef public_513b0a
#undef public_513b19
#undef public_513b22
