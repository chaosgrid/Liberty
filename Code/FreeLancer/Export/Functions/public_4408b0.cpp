#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_43e570);
CLANG_FORWARD_PROC_SYMBOL(public_441a40);
CLANG_FORWARD_PROC_SYMBOL(public_441ea0);
CLANG_FORWARD_PROC_SYMBOL(public_55e360);
CLANG_FORWARD_PROC_SYMBOL(public_55e590);

#define public_4408d7 _public_4408d7
#define public_4408f1 _public_4408f1
#define public_440902 _public_440902
#define public_440914 _public_440914
#define public_440929 _public_440929
#define public_440936 _public_440936
#define public_440944 _public_440944
#define public_440952 _public_440952
#define public_44096b _public_44096b
#define public_440975 _public_440975
#define public_44097f _public_44097f
#define public_440987 _public_440987
#define public_4409a2 _public_4409a2
#define public_4409c6 _public_4409c6
#define public_4409ea _public_4409ea
#define public_440a09 _public_440a09
#define public_440a26 _public_440a26
#define public_440a2b _public_440a2b
#define public_440a37 _public_440a37
#define public_440a71 _public_440a71

PROC_DECLARE(0x4408b0, internal_4408b0, public_4408b0);
extern "C" NAKED register_t __cdecl internal_4408b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x34
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xC0]
        xor ebp, ebp
        cmp eax, ebp
        push esi
        push edi
        je public_4408f1
        cmp dword ptr ds : [eax+0x30], 7
        jne public_4408d7
        push ebp
        lea ecx, ds:[ebx-0x32C]
        call public_441a40
        public_4408d7 : nop
        push ebp
        lea ecx, ds:[ebx-0x32C]
        mov dword ptr ds : [ebx+0xC0], ebp
        call public_43e570
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        public_4408f1 : nop
        mov esi, dword ptr ds : [ebx+0xBC]
        cmp esi, ebp
        je public_440929
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebp
        je public_440914
        public_440902 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp edi, ebp
        mov eax, edi
        jne public_440902
        public_440914 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        mov dword ptr ds : [ebx+0xBC], ebp
        public_440929 : nop
        mov eax, dword ptr ds : [ebx+0x54]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_440a71
        public_440936 : nop
        mov cl, byte ptr ds : [esi+9]
        test cl, cl
        jne public_440944
        mov cl, byte ptr ds : [esi+0x28]
        test cl, cl
        jne public_440952
        public_440944 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_440936
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        public_440952 : nop
        mov eax, dword ptr ds : [esi+0x38]
        add eax, 0xFFFFFFFE
        cmp eax, 0xA
        ja public_44097f
/*FIXUP movzx ecx, byte ptr ds : [eax+public_440a88] @0x44095d*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_440a7c] @0x440964*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_44096b
  JMPTB cmp eax, 1
  JMPTB mov ecx, 0
  JMPTB je public_44096b
  JMPTB cmp eax, 2
  JMPTB mov ecx, 2
  JMPTB je public_44097f
  JMPTB cmp eax, 3
  JMPTB mov ecx, 2
  JMPTB je public_44097f
  JMPTB cmp eax, 4
  JMPTB mov ecx, 2
  JMPTB je public_44097f
  JMPTB cmp eax, 5
  JMPTB mov ecx, 1
  JMPTB je public_440975
  JMPTB cmp eax, 6
  JMPTB mov ecx, 2
  JMPTB je public_44097f
  JMPTB cmp eax, 7
  JMPTB mov ecx, 2
  JMPTB je public_44097f
  JMPTB cmp eax, 8
  JMPTB mov ecx, 2
  JMPTB je public_44097f
  JMPTB cmp eax, 9
  JMPTB mov ecx, 2
  JMPTB je public_44097f
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 0
  JMPTB je public_44096b
  JMPTB int 3
        public_44096b : nop
        mov dword ptr ss : [esp+0x10], 0x3DA3D70A
        jmp public_440987
        public_440975 : nop
        mov dword ptr ss : [esp+0x10], 0x3D4CCCCD
        jmp public_440987
        public_44097f : nop
        mov dword ptr ss : [esp+0x10], 0x3F800000
        public_440987 : nop
        cmp eax, 0xA
        mov ebp, dword ptr ss : [esp+0x10]
        ja public_440a37
/*FIXUP movzx edx, byte ptr ds : [eax+public_440aa8] @0x440994*/
/*FIXUP jmp dword ptr ds : [edx*4+public_440a94] @0x44099b*/
  JMPTB cmp eax, 0
  JMPTB mov edx, 0
  JMPTB je public_4409ea
  JMPTB cmp eax, 1
  JMPTB mov edx, 1
  JMPTB je public_440a09
  JMPTB cmp eax, 2
  JMPTB mov edx, 4
  JMPTB je public_440a37
  JMPTB cmp eax, 3
  JMPTB mov edx, 4
  JMPTB je public_440a37
  JMPTB cmp eax, 4
  JMPTB mov edx, 4
  JMPTB je public_440a37
  JMPTB cmp eax, 5
  JMPTB mov edx, 2
  JMPTB je public_4409c6
  JMPTB cmp eax, 6
  JMPTB mov edx, 4
  JMPTB je public_440a37
  JMPTB cmp eax, 7
  JMPTB mov edx, 4
  JMPTB je public_440a37
  JMPTB cmp eax, 8
  JMPTB mov edx, 4
  JMPTB je public_440a37
  JMPTB cmp eax, 9
  JMPTB mov edx, 4
  JMPTB je public_440a37
  JMPTB cmp eax, 0xA
  JMPTB mov edx, 3
  JMPTB je public_4409a2
  JMPTB int 3
        public_4409a2 : nop
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0xBF8CCCCD
/*FIXUP push offset public_5cb748 @0x4409bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb748
        jmp public_440a2b
        public_4409c6 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0xBDB020C5
        mov dword ptr ss : [esp+0x2C], 0xBFA4DD2F
/*FIXUP push offset public_5cb70c @0x4409e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb70c
        jmp public_440a2b
        public_4409ea : nop
        lea edx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0xBDCCCCCD
        mov dword ptr ss : [esp+0x34], 0xBFBFBE77
        push edx
        jmp public_440a26
        public_440a09 : nop
        lea eax, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0xBDCCCCCD
        mov dword ptr ss : [esp+0x40], 0xBFBFBE77
        push eax
/*FIXUP public_440a26 : nop
        push offset public_5cb6d8 @0x440a26*/
  FIXUP public_440a26 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6d8
        public_440a2b : nop
        lea ecx, ds:[ebx-0x32C]
        push ebp
        call public_441ea0
        public_440a37 : nop
        mov ecx, dword ptr ds : [public_5cb4d0]
        lea edi, ds:[ebx+0x20]
        push ecx
        mov ecx, edi
        call public_55e590
        mov edx, dword ptr ds : [ebx+0xBC]
        push 0x3F800000
        push ebp
        push edx
        mov ecx, edi
        call public_55e360
        mov ecx, dword ptr ds : [esi+0x20]
        push 0
        push 1
        mov byte ptr ds : [esi+8], 1
        mov eax, dword ptr ds : [ecx]
        push 2
        call dword ptr ds : [eax+0xA8]
        public_440a71 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x4408b0)
        ASM_EXPORT_ENTRY_FIRST(0x44097f, public_44097f)
        ASM_EXPORT_ENTRY_LAST(0x440a37, public_440a37)
    }
}

#undef public_4408d7
#undef public_4408f1
#undef public_440902
#undef public_440914
#undef public_440929
#undef public_440936
#undef public_440944
#undef public_440952
#undef public_44096b
#undef public_440975
#undef public_44097f
#undef public_440987
#undef public_4409a2
#undef public_4409c6
#undef public_4409ea
#undef public_440a09
#undef public_440a26
#undef public_440a2b
#undef public_440a37
#undef public_440a71

#pragma init_seg(compiler)
extern "C" void const* const public_44097f = __AsmFindLabelExport(&internal_4408b0, 0x44097f);
extern "C" void const* const public_440a37 = __AsmFindLabelExport(&internal_4408b0, 0x440a37);
