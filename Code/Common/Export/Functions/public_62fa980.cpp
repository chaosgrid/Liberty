#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a1c30);
CLANG_FORWARD_PROC_SYMBOL(public_62b7750);
CLANG_FORWARD_PROC_SYMBOL(public_62f0d50);
CLANG_FORWARD_PROC_SYMBOL(public_62fa980);
CLANG_FORWARD_PROC_SYMBOL(public_62fabb0);
CLANG_FORWARD_PROC_SYMBOL(public_62facf0);
CLANG_FORWARD_PROC_SYMBOL(public_62fae00);
CLANG_FORWARD_PROC_SYMBOL(public_62fbcd0);
CLANG_FORWARD_PROC_SYMBOL(public_62fbd70);
CLANG_FORWARD_PROC_SYMBOL(public_62fbe10);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);

#define public_62fa9b0 _public_62fa9b0
#define public_62fa9c0 _public_62fa9c0
#define public_62fa9cc _public_62fa9cc
#define public_62faa01 _public_62faa01
#define public_62faa09 _public_62faa09
#define public_62faa1e _public_62faa1e
#define public_62faa47 _public_62faa47
#define public_62faa55 _public_62faa55
#define public_62faa61 _public_62faa61
#define public_62faaa6 _public_62faaa6
#define public_62faaae _public_62faaae
#define public_62faac3 _public_62faac3
#define public_62faaf0 _public_62faaf0
#define public_62fab00 _public_62fab00
#define public_62fab4c _public_62fab4c
#define public_62fab54 _public_62fab54
#define public_62fab70 _public_62fab70
#define public_62fab9e _public_62fab9e

PROC_DECLARE(0x62fa980, internal_62fa980, public_62fa980);
extern "C" NAKED register_t __cdecl internal_62fa980()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_63fcaac
        call public_632c410
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [public_63fcab0]
        or ebp, 0xFFFFFFFF
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_62faa1e
        nop 
        lea esp, ss:[esp]
        public_62fa9b0 : nop
        mov esi, dword ptr ds : [eax+0x10]
        xor edi, edi
        test esi, esi
        je public_62faa09
        cmp dword ptr ds : [esi+0x40], ebp
        je public_62faa01
        mov edi, edi
        public_62fa9c0 : nop
        dec dword ptr ds : [esi+0x3C]
        jne public_62fa9cc
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        public_62fa9cc : nop
        mov eax, dword ptr ds : [esi+0x40]
        inc edi
        cmp eax, ebp
        jne public_62fa9c0
        test edi, edi
        je public_62faa01
        push edi
        lea ecx, ds:[esi+8]
        mov ebx, 0x100002
        call public_6333e60
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x7CE
/*FIXUP push offset public_63a123c @0x62fa9f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a2130 @0x62fa9f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2130
        push ebx
        call dword ptr ds : [eax]
        add esp, 0x18
        public_62faa01 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        public_62faa09 : nop
        lea ecx, ss:[esp+0x10]
        call public_63429f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_63fcab0]
        jne public_62fa9b0
        public_62faa1e : nop
        mov ecx, offset public_63fcaac
        call public_62fbe10
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_63fcac0
        call public_632c410
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [public_63fcac4]
        mov dword ptr ss : [esp+0x10], eax
        je public_62faac3
        public_62faa47 : nop
        mov esi, dword ptr ds : [eax+0x10]
        xor edi, edi
        test esi, esi
        je public_62faaae
        cmp dword ptr ds : [esi+0x40], ebp
        je public_62faaa6
        public_62faa55 : nop
        dec dword ptr ds : [esi+0x3C]
        jne public_62faa61
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        public_62faa61 : nop
        mov eax, dword ptr ds : [esi+0x40]
        inc edi
        cmp eax, ebp
        jne public_62faa55
        test edi, edi
        je public_62faaa6
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x1C]
        call public_62b7750
        push edi
        lea ecx, ds:[esi+8]
        mov ebx, eax
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        mov eax, dword ptr ds : [ebx]
        push 0x6D8
/*FIXUP push offset public_63a123c @0x62faa96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a20e8 @0x62faa9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a20e8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x18
        public_62faaa6 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        public_62faaae : nop
        lea ecx, ss:[esp+0x10]
        call public_63429f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_63fcac4]
        jne public_62faa47
        public_62faac3 : nop
        mov ecx, offset public_63fcac0
        call public_62fbd70
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_63fcad4
        call public_632c410
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [public_63fcad8]
        mov dword ptr ss : [esp+0x10], eax
        je public_62fab70
        public_62faaf0 : nop
        mov esi, dword ptr ds : [eax+0x10]
        xor edi, edi
        test esi, esi
        je public_62fab54
        cmp dword ptr ds : [esi+0x40], ebp
        je public_62fab4c
        mov edi, edi
        public_62fab00 : nop
        mov ecx, esi
        call public_62f0d50
        mov eax, dword ptr ds : [esi+0x40]
        inc edi
        cmp eax, ebp
        jne public_62fab00
        test edi, edi
        je public_62fab4c
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x1C]
        call public_62b7750
        push edi
        lea ecx, ds:[esi+8]
        mov ebx, eax
        call public_6333e60
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x112A
/*FIXUP push offset public_63a123c @0x62fab3c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a2098 @0x62fab41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2098
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x18
        public_62fab4c : nop
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        public_62fab54 : nop
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_62a1c30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_63fcad8]
        jne public_62faaf0
        public_62fab70 : nop
        mov ecx, offset public_63fcad4
        call public_62fbcd0
        call public_62facf0
        mov ecx, dword ptr ds : [public_63ecd20]
        cmp ecx, ebp
        je public_62fab9e
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        mov dword ptr ds : [public_63ecd20], ebp
        public_62fab9e : nop
        call public_62fabb0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        jmp public_62fae00
        UNREACHABLE_TRAP(0x62fa980)
    }
}

#undef public_62fa9b0
#undef public_62fa9c0
#undef public_62fa9cc
#undef public_62faa01
#undef public_62faa09
#undef public_62faa1e
#undef public_62faa47
#undef public_62faa55
#undef public_62faa61
#undef public_62faaa6
#undef public_62faaae
#undef public_62faac3
#undef public_62faaf0
#undef public_62fab00
#undef public_62fab4c
#undef public_62fab54
#undef public_62fab70
#undef public_62fab9e
