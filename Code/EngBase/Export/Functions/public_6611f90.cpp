#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611f90);
CLANG_FORWARD_PROC_SYMBOL(public_6613650);
CLANG_FORWARD_PROC_SYMBOL(public_6613670);
CLANG_FORWARD_PROC_SYMBOL(public_6613880);
CLANG_FORWARD_PROC_SYMBOL(public_661acf0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6611fb5 _public_6611fb5
#define public_6611fcd _public_6611fcd
#define public_6611fdb _public_6611fdb
#define public_6611fe3 _public_6611fe3
#define public_6611fef _public_6611fef
#define public_6611ff7 _public_6611ff7
#define public_661200c _public_661200c
#define public_6612029 _public_6612029
#define public_661203d _public_661203d
#define public_6612064 _public_6612064
#define public_661208f _public_661208f
#define public_66120af _public_66120af
#define public_66120cf _public_66120cf
#define public_66120f2 _public_66120f2
#define public_661210c _public_661210c
#define public_661210e _public_661210e
#define public_661212e _public_661212e

PROC_DECLARE(0x6611f90, internal_6611f90, public_6611f90);
extern "C" NAKED register_t __cdecl internal_6611f90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [esp+0x10], 0
        push esi
        mov dword ptr ss : [ebp], eax
        mov edx, dword ptr ds : [eax+0x14]
        test edx, edx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        jne public_6611fb5
        xor edi, edi
        jmp public_6611fcd
        public_6611fb5 : nop
        mov ecx, dword ptr ds : [eax+0x18]
        mov eax, 0x66666667
        sub ecx, edx
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6611fcd : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        lea esi, ss:[ebp+8]
        test ecx, ecx
        jne public_6611fdb
        xor eax, eax
        jmp public_6611fe3
        public_6611fdb : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6611fe3 : nop
        cmp eax, edi
        jae public_661200c
        test ecx, ecx
        jne public_6611fef
        xor eax, eax
        jmp public_6611ff7
        public_6611fef : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6611ff7 : nop
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x18]
        sub edi, eax
        push ecx
        push edi
        push edx
        mov ecx, esi
        call public_6613670
        jmp public_6612029
        public_661200c : nop
        mov ecx, esi
        call public_6613650
        cmp edi, eax
        jae public_6612029
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        push eax
        lea edx, ds:[ecx+edi*4]
        mov ecx, esi
        push edx
        call public_6613880
        public_6612029 : nop
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ss : [ebp+0xC]
        mov ebp, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        cmp ebp, ecx
        jae public_661212e
        public_661203d : nop
        mov edi, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        mov eax, dword ptr ds : [edi]
        xor esi, esi
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[edx-1]
        cmp eax, 7
        ja public_661210e
/*FIXUP jmp dword ptr ds : [eax*4+public_6612138] @0x661205d*/
  JMPTB cmp eax, 0
  JMPTB je public_6612064
  JMPTB cmp eax, 1
  JMPTB je public_661208f
  JMPTB cmp eax, 2
  JMPTB je public_661210e
  JMPTB cmp eax, 3
  JMPTB je public_66120af
  JMPTB cmp eax, 4
  JMPTB je public_661210e
  JMPTB cmp eax, 5
  JMPTB je public_66120cf
  JMPTB cmp eax, 6
  JMPTB je public_661210e
  JMPTB cmp eax, 7
  JMPTB je public_66120f2
  JMPTB int 3
        public_6612064 : nop
        push 0x44
        call public_66281dc
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_661210c
        push edi
        mov ecx, esi
        call public_661acf0
        mov dword ptr ds : [esi+0x40], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_66291a4
        jmp public_661210e
        public_661208f : nop
        push 0x48
        call public_66281dc
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_661210c
        push edi
        mov ecx, esi
        call public_661acf0
        mov dword ptr ds : [esi], offset public_6629168
        jmp public_661210e
        public_66120af : nop
        push 0x4C
        call public_66281dc
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_661210c
        push edi
        mov ecx, esi
        call public_661acf0
        mov dword ptr ds : [esi], offset public_662912c
        jmp public_661210e
        public_66120cf : nop
        push 0x94
        call public_66281dc
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_661210c
        push edi
        mov ecx, esi
        call public_661acf0
        mov dword ptr ds : [esi], offset public_66290f0
        jmp public_661210e
        public_66120f2 : nop
        push 0x3C
        call public_66281dc
        add esp, 4
        test eax, eax
        je public_661210c
        push edi
        mov ecx, eax
        call public_661acf0
        mov esi, eax
        jmp public_661210e
        public_661210c : nop
        xor esi, esi
        public_661210e : nop
        mov al, byte ptr ds : [esi+0x38]
        add ebp, 0x14
        and al, 0xFE
        add ebx, 4
        mov byte ptr ds : [esi+0x38], al
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx-4], esi
        mov ecx, dword ptr ds : [eax]
        cmp ebp, dword ptr ds : [ecx+0x18]
        jb public_661203d
        public_661212e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6611f90)
        ASM_EXPORT_ENTRY_FIRST(0x6612064, public_6612064)
        ASM_EXPORT_ENTRY(0x661208f, public_661208f)
        ASM_EXPORT_ENTRY(0x66120af, public_66120af)
        ASM_EXPORT_ENTRY(0x66120cf, public_66120cf)
        ASM_EXPORT_ENTRY(0x66120f2, public_66120f2)
        ASM_EXPORT_ENTRY_LAST(0x661210e, public_661210e)
    }
}

#undef public_6611fb5
#undef public_6611fcd
#undef public_6611fdb
#undef public_6611fe3
#undef public_6611fef
#undef public_6611ff7
#undef public_661200c
#undef public_6612029
#undef public_661203d
#undef public_6612064
#undef public_661208f
#undef public_66120af
#undef public_66120cf
#undef public_66120f2
#undef public_661210c
#undef public_661210e
#undef public_661212e

#pragma init_seg(compiler)
extern "C" void const* const public_6612064 = __AsmFindLabelExport(&internal_6611f90, 0x6612064);
extern "C" void const* const public_661208f = __AsmFindLabelExport(&internal_6611f90, 0x661208f);
extern "C" void const* const public_66120af = __AsmFindLabelExport(&internal_6611f90, 0x66120af);
extern "C" void const* const public_66120cf = __AsmFindLabelExport(&internal_6611f90, 0x66120cf);
extern "C" void const* const public_66120f2 = __AsmFindLabelExport(&internal_6611f90, 0x66120f2);
extern "C" void const* const public_661210e = __AsmFindLabelExport(&internal_6611f90, 0x661210e);
