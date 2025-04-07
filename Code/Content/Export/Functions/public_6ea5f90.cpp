#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea5f90);
CLANG_FORWARD_PROC_SYMBOL(public_6ea6ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48070);
CLANG_FORWARD_PROC_SYMBOL(public_6f487c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ea5fee _public_6ea5fee
#define public_6ea5fff _public_6ea5fff
#define public_6ea6010 _public_6ea6010
#define public_6ea6021 _public_6ea6021
#define public_6ea6032 _public_6ea6032
#define public_6ea6043 _public_6ea6043
#define public_6ea6054 _public_6ea6054
#define public_6ea6065 _public_6ea6065
#define public_6ea6076 _public_6ea6076
#define public_6ea6087 _public_6ea6087
#define public_6ea6098 _public_6ea6098
#define public_6ea60a9 _public_6ea60a9
#define public_6ea60b7 _public_6ea60b7

PROC_DECLARE(0x6ea5f90, internal_6ea5f90, public_6ea5f90);
extern "C" NAKED register_t __cdecl internal_6ea5f90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0xC]
        push edi
        push eax
        call public_6f49b00
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6ea60b7
        mov ecx, edi
        call public_6f48070
        fcomp dword ptr ds : [esi+0x14]
        fnstsw ax
        test ah, 1
        jne public_6ea60b7
        mov ecx, edi
        call public_6f487c0
        test eax, 0x3FFFFFFF
        jne public_6ea60b7
        mov eax, dword ptr ds : [esi+0x10]
        add eax, 0xFFFFFFFB
        cmp eax, 0x22
        ja public_6ea60b7
/*FIXUP movzx ecx, byte ptr ds : [eax+public_6ea60f0] @0x6ea5fe0*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6ea60bc] @0x6ea5fe7*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6ea5fee
  JMPTB cmp eax, 1
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 2
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 3
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 4
  JMPTB mov ecx, 1
  JMPTB je public_6ea5fff
  JMPTB cmp eax, 5
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 6
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 7
  JMPTB mov ecx, 2
  JMPTB je public_6ea6010
  JMPTB cmp eax, 8
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 9
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 3
  JMPTB je public_6ea6021
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 4
  JMPTB je public_6ea6032
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 5
  JMPTB je public_6ea6043
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 6
  JMPTB je public_6ea6054
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 7
  JMPTB je public_6ea6065
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 8
  JMPTB je public_6ea6076
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 9
  JMPTB je public_6ea6087
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 0xA
  JMPTB je public_6ea6098
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 0xC
  JMPTB je public_6ea60b7
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 0xB
  JMPTB je public_6ea60a9
  JMPTB int 3
/*FIXUP public_6ea5fee : nop
        push offset public_6fb4304 @0x6ea5fee*/
  FIXUP public_6ea5fee : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4304
        push 7
        mov ecx, esi
        call public_6ea6ba0
        pop edi
        pop esi
        ret 
/*FIXUP public_6ea5fff : nop
        push offset public_6fb42f8 @0x6ea5fff*/
  FIXUP public_6ea5fff : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb42f8
        push 0xA
        mov ecx, esi
        call public_6ea6ba0
        pop edi
        pop esi
        ret 
/*FIXUP public_6ea6010 : nop
        push offset public_6fb42ec @0x6ea6010*/
  FIXUP public_6ea6010 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb42ec
        push 0xD
        mov ecx, esi
        call public_6ea6ba0
        pop edi
        pop esi
        ret 
/*FIXUP public_6ea6021 : nop
        push offset public_6fb42e0 @0x6ea6021*/
  FIXUP public_6ea6021 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb42e0
        push 0x10
        mov ecx, esi
        call public_6ea6ba0
        pop edi
        pop esi
        ret 
/*FIXUP public_6ea6032 : nop
        push offset public_6fb42d4 @0x6ea6032*/
  FIXUP public_6ea6032 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb42d4
        push 0x13
        mov ecx, esi
        call public_6ea6ba0
        pop edi
        pop esi
        ret 
/*FIXUP public_6ea6043 : nop
        push offset public_6fb42c8 @0x6ea6043*/
  FIXUP public_6ea6043 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb42c8
        push 0x16
        mov ecx, esi
        call public_6ea6ba0
        pop edi
        pop esi
        ret 
/*FIXUP public_6ea6054 : nop
        push offset public_6fb42bc @0x6ea6054*/
  FIXUP public_6ea6054 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb42bc
        push 0x19
        mov ecx, esi
        call public_6ea6ba0
        pop edi
        pop esi
        ret 
/*FIXUP public_6ea6065 : nop
        push offset public_6fb42b0 @0x6ea6065*/
  FIXUP public_6ea6065 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb42b0
        push 0x1C
        mov ecx, esi
        call public_6ea6ba0
        pop edi
        pop esi
        ret 
/*FIXUP public_6ea6076 : nop
        push offset public_6fb42a4 @0x6ea6076*/
  FIXUP public_6ea6076 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb42a4
        push 0x1F
        mov ecx, esi
        call public_6ea6ba0
        pop edi
        pop esi
        ret 
/*FIXUP public_6ea6087 : nop
        push offset public_6fb4298 @0x6ea6087*/
  FIXUP public_6ea6087 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4298
        push 0x22
        mov ecx, esi
        call public_6ea6ba0
        pop edi
        pop esi
        ret 
/*FIXUP public_6ea6098 : nop
        push offset public_6fb428c @0x6ea6098*/
  FIXUP public_6ea6098 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb428c
        push 0x25
        mov ecx, esi
        call public_6ea6ba0
        pop edi
        pop esi
        ret 
/*FIXUP public_6ea60a9 : nop
        push offset public_6fb4280 @0x6ea60a9*/
  FIXUP public_6ea60a9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4280
        push 0x28
        mov ecx, esi
        call public_6ea6ba0
        public_6ea60b7 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ea5f90)
        ASM_EXPORT_ENTRY_FIRST(0x6ea5fee, public_6ea5fee)
        ASM_EXPORT_ENTRY(0x6ea5fff, public_6ea5fff)
        ASM_EXPORT_ENTRY(0x6ea6010, public_6ea6010)
        ASM_EXPORT_ENTRY(0x6ea6021, public_6ea6021)
        ASM_EXPORT_ENTRY(0x6ea6032, public_6ea6032)
        ASM_EXPORT_ENTRY(0x6ea6043, public_6ea6043)
        ASM_EXPORT_ENTRY(0x6ea6054, public_6ea6054)
        ASM_EXPORT_ENTRY(0x6ea6065, public_6ea6065)
        ASM_EXPORT_ENTRY(0x6ea6076, public_6ea6076)
        ASM_EXPORT_ENTRY(0x6ea6087, public_6ea6087)
        ASM_EXPORT_ENTRY(0x6ea6098, public_6ea6098)
        ASM_EXPORT_ENTRY(0x6ea60a9, public_6ea60a9)
        ASM_EXPORT_ENTRY_LAST(0x6ea60b7, public_6ea60b7)
    }
}

#undef public_6ea5fee
#undef public_6ea5fff
#undef public_6ea6010
#undef public_6ea6021
#undef public_6ea6032
#undef public_6ea6043
#undef public_6ea6054
#undef public_6ea6065
#undef public_6ea6076
#undef public_6ea6087
#undef public_6ea6098
#undef public_6ea60a9
#undef public_6ea60b7

#pragma init_seg(compiler)
extern "C" void const* const public_6ea5fee = __AsmFindLabelExport(&internal_6ea5f90, 0x6ea5fee);
extern "C" void const* const public_6ea5fff = __AsmFindLabelExport(&internal_6ea5f90, 0x6ea5fff);
extern "C" void const* const public_6ea6010 = __AsmFindLabelExport(&internal_6ea5f90, 0x6ea6010);
extern "C" void const* const public_6ea6021 = __AsmFindLabelExport(&internal_6ea5f90, 0x6ea6021);
extern "C" void const* const public_6ea6032 = __AsmFindLabelExport(&internal_6ea5f90, 0x6ea6032);
extern "C" void const* const public_6ea6043 = __AsmFindLabelExport(&internal_6ea5f90, 0x6ea6043);
extern "C" void const* const public_6ea6054 = __AsmFindLabelExport(&internal_6ea5f90, 0x6ea6054);
extern "C" void const* const public_6ea6065 = __AsmFindLabelExport(&internal_6ea5f90, 0x6ea6065);
extern "C" void const* const public_6ea6076 = __AsmFindLabelExport(&internal_6ea5f90, 0x6ea6076);
extern "C" void const* const public_6ea6087 = __AsmFindLabelExport(&internal_6ea5f90, 0x6ea6087);
extern "C" void const* const public_6ea6098 = __AsmFindLabelExport(&internal_6ea5f90, 0x6ea6098);
extern "C" void const* const public_6ea60a9 = __AsmFindLabelExport(&internal_6ea5f90, 0x6ea60a9);
extern "C" void const* const public_6ea60b7 = __AsmFindLabelExport(&internal_6ea5f90, 0x6ea60b7);
