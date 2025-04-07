#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6388370);
CLANG_FORWARD_PROC_SYMBOL(public_63884f0);

#define public_6388393 _public_6388393
#define public_63883b2 _public_63883b2
#define public_63883fc _public_63883fc
#define public_638841a _public_638841a
#define public_638842e _public_638842e
#define public_6388447 _public_6388447
#define public_6388460 _public_6388460
#define public_638847d _public_638847d
#define public_6388497 _public_6388497
#define public_63884a8 _public_63884a8
#define public_63884c0 _public_63884c0

PROC_DECLARE(0x6388370, internal_6388370, public_6388370);
extern "C" NAKED register_t __cdecl internal_6388370()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        je public_63884c0
        mov eax, dword ptr ds : [public_658b8c8]
        test eax, eax
        jne public_6388393
/*FIXUP push offset public_63f8190 @0x6388386*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8190
        call public_6356960
        add esp, 4
        public_6388393 : nop
        mov eax, dword ptr ss : [esp+0xC]
        add eax, 0xFFFFFFF9
        cmp eax, 0xD
        ja public_63884c0
/*FIXUP xor ecx, ecx @0x63883a3*/
/*FIXUP mov cl, byte ptr ds : [eax+public_63884d8] @0x63883a5*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_63884c4] @0x63883ab*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_63883b2
  JMPTB cmp eax, 1
  JMPTB mov ecx, 4
  JMPTB je public_63884c0
  JMPTB cmp eax, 2
  JMPTB mov ecx, 1
  JMPTB je public_638847d
  JMPTB cmp eax, 3
  JMPTB mov ecx, 4
  JMPTB je public_63884c0
  JMPTB cmp eax, 4
  JMPTB mov ecx, 1
  JMPTB je public_638847d
  JMPTB cmp eax, 5
  JMPTB mov ecx, 1
  JMPTB je public_638847d
  JMPTB cmp eax, 6
  JMPTB mov ecx, 4
  JMPTB je public_63884c0
  JMPTB cmp eax, 7
  JMPTB mov ecx, 2
  JMPTB je public_6388497
  JMPTB cmp eax, 8
  JMPTB mov ecx, 4
  JMPTB je public_63884c0
  JMPTB cmp eax, 9
  JMPTB mov ecx, 4
  JMPTB je public_63884c0
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 4
  JMPTB je public_63884c0
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 4
  JMPTB je public_63884c0
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 4
  JMPTB je public_63884c0
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 3
  JMPTB je public_63884a8
  JMPTB int 3
        public_63883b2 : nop
        cmp dword ptr ds : [public_658b24c], 4
        jne public_6388497
        mov eax, dword ptr ds : [public_658b058]
        test eax, eax
        jge public_6388497
        mov eax, dword ptr ds : [public_658b108]
        test eax, eax
        jne public_6388497
        mov ecx, dword ptr ds : [public_658b8e0]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        inc ecx
        test esi, esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [public_658b8e0], ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_638841a
        public_63883fc : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_638841a
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        push ebx
        call public_63884f0
        mov esi, dword ptr ds : [esi+0x30]
        add esp, 0x10
        test esi, esi
        jne public_63883fc
        public_638841a : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_6388447
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_6388447
        public_638842e : nop
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        push ebx
        call public_63884f0
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
        add esi, 4
        test eax, eax
        jne public_638842e
        public_6388447 : nop
        mov eax, dword ptr ds : [public_658b94c]
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, eax
        mov ecx, dword ptr ds : [public_658b8c4]
        pop edi
        pop esi
        jne public_6388460
        cmp ecx, eax
        je public_63884c0
        public_6388460 : nop
        push edx
        push ecx
        push eax
/*FIXUP push offset public_63f8134 @0x6388463*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8134
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x1C
        pop ebx
        ret 
        public_638847d : nop
        mov eax, dword ptr ds : [public_658b038]
        test eax, eax
        je public_63884c0
/*FIXUP push offset public_63f812c @0x6388486*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f812c
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        pop ebx
        ret 
/*FIXUP public_6388497 : nop
        push offset public_63f8128 @0x6388497*/
  FIXUP public_6388497 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8128
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        pop ebx
        ret 
        public_63884a8 : nop
        mov eax, dword ptr ds : [public_658b038]
        test eax, eax
        je public_63884c0
/*FIXUP push offset public_63f812c @0x63884b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f812c
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_63884c0 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6388370)
        ASM_EXPORT_ENTRY_FIRST(0x63883b2, public_63883b2)
        ASM_EXPORT_ENTRY(0x638847d, public_638847d)
        ASM_EXPORT_ENTRY(0x6388497, public_6388497)
        ASM_EXPORT_ENTRY(0x63884a8, public_63884a8)
        ASM_EXPORT_ENTRY_LAST(0x63884c0, public_63884c0)
    }
}

#undef public_6388393
#undef public_63883b2
#undef public_63883fc
#undef public_638841a
#undef public_638842e
#undef public_6388447
#undef public_6388460
#undef public_638847d
#undef public_6388497
#undef public_63884a8
#undef public_63884c0

#pragma init_seg(compiler)
extern "C" void const* const public_63883b2 = __AsmFindLabelExport(&internal_6388370, 0x63883b2);
extern "C" void const* const public_638847d = __AsmFindLabelExport(&internal_6388370, 0x638847d);
extern "C" void const* const public_6388497 = __AsmFindLabelExport(&internal_6388370, 0x6388497);
extern "C" void const* const public_63884a8 = __AsmFindLabelExport(&internal_6388370, 0x63884a8);
extern "C" void const* const public_63884c0 = __AsmFindLabelExport(&internal_6388370, 0x63884c0);
