#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661eb70);
CLANG_FORWARD_PROC_SYMBOL(public_661ec30);
CLANG_FORWARD_PROC_SYMBOL(public_661f300);
CLANG_FORWARD_PROC_SYMBOL(public_661f330);
CLANG_FORWARD_PROC_SYMBOL(public_6621710);
CLANG_FORWARD_PROC_SYMBOL(public_6623200);
CLANG_FORWARD_PROC_SYMBOL(public_6624ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6625220);
CLANG_FORWARD_PROC_SYMBOL(public_6625500);

#define public_662171b _public_662171b
#define public_662172c _public_662172c
#define public_6621743 _public_6621743
#define public_662174e _public_662174e
#define public_662175e _public_662175e
#define public_6621778 _public_6621778
#define public_6621796 _public_6621796
#define public_6621815 _public_6621815

PROC_DECLARE(0x6621710, internal_6621710, public_6621710);
extern "C" NAKED register_t __cdecl internal_6621710()
{
    __asm
    {
        sub esp, 0x14
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov ebp, ecx
        public_662171b : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_662172c
        push eax
        mov ecx, ebp
        call public_6621710
        jmp public_662171b
        public_662172c : nop
        mov eax, dword ptr ds : [esi+4]
        push esi
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_6621743
        push esi
        call public_661ec30
        public_6621743 : nop
        push ebx
        mov ebx, dword ptr ss : [ebp+0x58]
        push edi
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_662175e
        public_662174e : nop
        mov eax, dword ptr ds : [edi+0x38]
        push esi
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x24]
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_662174e
        public_662175e : nop
        test byte ptr ds : [esi], 2
        je public_6621778
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6621778
        call public_661f330
        push ecx
        call public_661f300
        add esp, 4
        public_6621778 : nop
        mov dword ptr ds : [esi+4], 0
        mov al, byte ptr ss : [ebp+0x2C]
        test al, al
        mov dword ptr ss : [esp+0x28], esi
        je public_6621796
        mov eax, dword ptr ss : [ebp+0x28]
        cmp dword ptr ds : [eax+0xC], esi
        jne public_6621796
        mov byte ptr ss : [ebp+0x2C], 0
        public_6621796 : nop
        lea ecx, ss:[esp+0x28]
        lea edi, ss:[ebp+0x10]
        lea edx, ss:[esp+0x1C]
        push ecx
        push edx
        mov ecx, edi
        call public_6625220
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x28]
        lea ecx, ss:[esp+0x20]
        push eax
        push ecx
        mov ecx, edi
        call public_6624ca0
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edx]
        lea edx, ss:[esp+0x18]
        push ecx
        push edx
        push eax
        push ebx
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], 0
        call public_6625500
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0x10
        lea ecx, ss:[esp+0x10]
        push eax
        push ebx
        push ecx
        mov ecx, edi
        call public_6623200
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [ebp]
        push eax
        push ebp
        call dword ptr ds : [edx+0x3C]
        mov eax, dword ptr ds : [esi+0xC]
        pop edi
        test eax, eax
        pop ebx
        je public_6621815
        mov ecx, dword ptr ss : [ebp]
        push eax
        push ebp
        call dword ptr ds : [ecx+0x3C]
        public_6621815 : nop
        push esi
        call public_661eb70
        add esp, 4
        xor eax, eax
        pop esi
        pop ebp
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6621710)
    }
}

#undef public_662171b
#undef public_662172c
#undef public_6621743
#undef public_662174e
#undef public_662175e
#undef public_6621778
#undef public_6621796
#undef public_6621815
