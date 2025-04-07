#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb4720);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb4750 _public_6eb4750
#define public_6eb4788 _public_6eb4788
#define public_6eb4790 _public_6eb4790
#define public_6eb47a0 _public_6eb47a0
#define public_6eb47c4 _public_6eb47c4
#define public_6eb47e8 _public_6eb47e8
#define public_6eb480b _public_6eb480b
#define public_6eb4854 _public_6eb4854
#define public_6eb4859 _public_6eb4859
#define public_6eb4861 _public_6eb4861
#define public_6eb4866 _public_6eb4866
#define public_6eb4872 _public_6eb4872
#define public_6eb4890 _public_6eb4890
#define public_6eb48a4 _public_6eb48a4
#define public_6eb4904 _public_6eb4904
#define public_6eb491b _public_6eb491b
#define public_6eb4960 _public_6eb4960
#define public_6eb496e _public_6eb496e
#define public_6eb4983 _public_6eb4983
#define public_6eb498f _public_6eb498f
#define public_6eb4996 _public_6eb4996
#define public_6eb49a2 _public_6eb49a2
#define public_6eb49a5 _public_6eb49a5
#define public_6eb49c5 _public_6eb49c5
#define public_6eb49e3 _public_6eb49e3

PROC_DECLARE(0x6eb4720, internal_6eb4720, public_6eb4720);
extern "C" NAKED register_t __cdecl internal_6eb4720()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x18]
        push ebp
        push eax
        call dword ptr ds : [public_6fb3678]
        mov ebp, eax
        xor eax, eax
        add esp, 4
        test ebp, ebp
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+4], eax
        jle public_6eb49e3
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        push edi
        lea ecx, ds:[ecx]
        public_6eb4750 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push eax
        xor ebx, ebx
        push ecx
        mov dword ptr ss : [esp+0x34], ebx
        call dword ptr ds : [public_6fb35fc]
        push eax
        call dword ptr ds : [public_6fb3318]
        mov edi, eax
/*FIXUP push offset public_6fb4614 @0x6eb476b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4614
        push edi
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_6fb3368]
        add esp, 0x14
        test eax, eax
        je public_6eb49c5
        jmp public_6eb4790
        public_6eb4788 : nop
        mov ebx, dword ptr ss : [esp+0x2C]
        lea esp, ss:[esp]
        public_6eb4790 : nop
        cmp ebx, 3
        ja public_6eb49a5
/*FIXUP jmp dword ptr ds : [ebx*4+public_6eb49e8] @0x6eb4799*/
  JMPTB cmp ebx, 0
  JMPTB je public_6eb47a0
  JMPTB cmp ebx, 1
  JMPTB je public_6eb47c4
  JMPTB cmp ebx, 2
  JMPTB je public_6eb47e8
  JMPTB cmp ebx, 3
  JMPTB je public_6eb480b
  JMPTB int 3
/*FIXUP public_6eb47a0 : nop
        push offset public_6fb4610 @0x6eb47a0*/
  FIXUP public_6eb47a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4610
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6eb49a5
        mov dword ptr ss : [esp+0x2C], 1
        jmp public_6eb49a5
/*FIXUP public_6eb47c4 : nop
        push offset public_6fb44d0 @0x6eb47c4*/
  FIXUP public_6eb47c4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44d0
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6eb49a5
        mov dword ptr ss : [esp+0x2C], 2
        jmp public_6eb49a5
        public_6eb47e8 : nop
        movsx edx, byte ptr ds : [eax]
        push edx
        call dword ptr ds : [public_6fb336c]
        add esp, 4
        cmp eax, 0x6D
        jne public_6eb49a5
        mov dword ptr ss : [esp+0x2C], 3
        jmp public_6eb49a5
/*FIXUP public_6eb480b : nop
        push offset public_6fb460c @0x6eb480b*/
  FIXUP public_6eb480b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb460c
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6eb49a5
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov ebx, 4
        mov dword ptr ss : [esp+0x2C], ebx
        mov edi, eax
        jae public_6eb491b
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6eb4854
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6eb4859
        public_6eb4854 : nop
        mov ecx, 1
        public_6eb4859 : nop
        test edx, edx
        jne public_6eb4861
        xor eax, eax
        jmp public_6eb4866
        public_6eb4861 : nop
        sub eax, edx
        sar eax, 2
        public_6eb4866 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_6eb4872
        xor eax, eax
        public_6eb4872 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_6eb48a4
        nop 
        public_6eb4890 : nop
        push ebp
        push ebx
        call public_6eb6740
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_6eb4890
        public_6eb48a4 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_6f38a50
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 4
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[eax+edx*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6eb4904
        xor edx, edx
        lea edx, ds:[eax+edx*4+4]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], eax
        jmp public_6eb49a5
        public_6eb4904 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        lea edx, ds:[eax+edx*4+4]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], eax
        jmp public_6eb49a5
        public_6eb491b : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6eb496e
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x10]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6f38a50
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6eb49a2
        lea ebx, ds:[ebx]
        public_6eb4960 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], edx
        add edi, ebx
        cmp edi, eax
        jne public_6eb4960
        jmp public_6eb49a2
        public_6eb496e : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6eb498f
        public_6eb4983 : nop
        sub eax, ebx
        mov edx, dword ptr ds : [eax]
        sub ecx, ebx
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6eb4983
        public_6eb498f : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6eb49a2
        public_6eb4996 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ecx
        add edi, ebx
        cmp edi, eax
        jne public_6eb4996
        public_6eb49a2 : nop
        add dword ptr ds : [esi+8], ebx
/*FIXUP public_6eb49a5 : nop
        push offset public_6fb4614 @0x6eb49a5*/
  FIXUP public_6eb49a5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4614
        push 0
        call dword ptr ds : [public_6fb3368]
        add esp, 8
        test eax, eax
        jne public_6eb4788
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x20]
        public_6eb49c5 : nop
        push edi
        call dword ptr ds : [public_6fb3390]
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        inc eax
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        jl public_6eb4750
        pop edi
        pop esi
        pop ebx
        public_6eb49e3 : nop
        pop ebp
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6eb4720)
        ASM_EXPORT_ENTRY_FIRST(0x6eb47a0, public_6eb47a0)
        ASM_EXPORT_ENTRY(0x6eb47c4, public_6eb47c4)
        ASM_EXPORT_ENTRY(0x6eb47e8, public_6eb47e8)
        ASM_EXPORT_ENTRY_LAST(0x6eb480b, public_6eb480b)
    }
}

#undef public_6eb4750
#undef public_6eb4788
#undef public_6eb4790
#undef public_6eb47a0
#undef public_6eb47c4
#undef public_6eb47e8
#undef public_6eb480b
#undef public_6eb4854
#undef public_6eb4859
#undef public_6eb4861
#undef public_6eb4866
#undef public_6eb4872
#undef public_6eb4890
#undef public_6eb48a4
#undef public_6eb4904
#undef public_6eb491b
#undef public_6eb4960
#undef public_6eb496e
#undef public_6eb4983
#undef public_6eb498f
#undef public_6eb4996
#undef public_6eb49a2
#undef public_6eb49a5
#undef public_6eb49c5
#undef public_6eb49e3

#pragma init_seg(compiler)
extern "C" void const* const public_6eb47a0 = __AsmFindLabelExport(&internal_6eb4720, 0x6eb47a0);
extern "C" void const* const public_6eb47c4 = __AsmFindLabelExport(&internal_6eb4720, 0x6eb47c4);
extern "C" void const* const public_6eb47e8 = __AsmFindLabelExport(&internal_6eb4720, 0x6eb47e8);
extern "C" void const* const public_6eb480b = __AsmFindLabelExport(&internal_6eb4720, 0x6eb480b);
