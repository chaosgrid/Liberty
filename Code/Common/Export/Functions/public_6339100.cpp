#include "Common-PCH.h"


#define public_6339134 _public_6339134
#define public_6339140 _public_6339140
#define public_6339154 _public_6339154
#define public_6339157 _public_6339157
#define public_6339173 _public_6339173
#define public_63391a3 _public_63391a3
#define public_63391a8 _public_63391a8
#define public_63391ab _public_63391ab
#define public_63391d0 _public_63391d0
#define public_63391f8 _public_63391f8
#define public_63391fb _public_63391fb

PROC_DECLARE(0x6339100, internal_6339100, public_6339100);
extern "C" NAKED register_t __cdecl internal_6339100()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0x68]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_63391fb
        mov eax, dword ptr ds : [esi+0x3C]
        dec eax
        cmp eax, 4
        mov dword ptr ss : [esp+4], 0
        ja public_63391d0
/*FIXUP jmp dword ptr ds : [eax*4+public_6339204] @0x633912d*/
  JMPTB cmp eax, 0
  JMPTB je public_6339134
  JMPTB cmp eax, 1
  JMPTB je public_6339140
  JMPTB cmp eax, 2
  JMPTB je public_6339173
  JMPTB cmp eax, 3
  JMPTB je public_63391a3
  JMPTB cmp eax, 4
  JMPTB je public_63391a8
  JMPTB int 3
        public_6339134 : nop
        fld dword ptr ds : [esi+0x44]
        fstp dword ptr ds : [esi+0x68]
        fld dword ptr ds : [esi+0x68]
        pop esi
        pop ecx
        ret 
        public_6339140 : nop
        fld dword ptr ds : [esi+0x44]
        fld dword ptr ds : [esi+0x48]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_6339154
        fld dword ptr ds : [esi+0x44]
        jmp public_6339157
        public_6339154 : nop
        fld dword ptr ds : [esi+0x48]
        public_6339157 : nop
        fcom dword ptr ds : [esi+0x4C]
        fnstsw ax
        test ah, 5
        jp public_63391f8
        fstp st(0)
        fld dword ptr ds : [esi+0x4C]
        fstp dword ptr ds : [esi+0x68]
        fld dword ptr ds : [esi+0x68]
        pop esi
        pop ecx
        ret 
        public_6339173 : nop
        fld dword ptr ds : [esi+0x4C]
        fld dword ptr ds : [esi+0x48]
        fld dword ptr ds : [esi+0x44]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fmul qword ptr ds : [public_639df88]
        fstp dword ptr ds : [esi+0x68]
        fld dword ptr ds : [esi+0x68]
        pop esi
        pop ecx
        ret 
        public_63391a3 : nop
        fld dword ptr ds : [esi+0x48]
        jmp public_63391ab
        public_63391a8 : nop
        fld dword ptr ds : [esi+0x4C]
        public_63391ab : nop
        fld dword ptr ds : [esi+0x44]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        fmul qword ptr ds : [public_63a0618]
        faddp 
        fsqrt 
        fstp st(2)
        fstp st(0)
        fstp dword ptr ds : [esi+0x68]
        fld dword ptr ds : [esi+0x68]
        pop esi
        pop ecx
        ret 
        lea ecx, ds:[ecx]
/*FIXUP public_63391d0 : nop
        push offset public_63a51bc @0x63391d0*/
  FIXUP public_63391d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a51bc
        push 0x35C
/*FIXUP push offset public_63a4b20 @0x63391da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x63391e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x18]
        add esp, 0x14
        public_63391f8 : nop
        fstp dword ptr ds : [esi+0x68]
        public_63391fb : nop
        fld dword ptr ds : [esi+0x68]
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6339100)
        ASM_EXPORT_ENTRY_FIRST(0x6339134, public_6339134)
        ASM_EXPORT_ENTRY(0x6339140, public_6339140)
        ASM_EXPORT_ENTRY(0x6339173, public_6339173)
        ASM_EXPORT_ENTRY(0x63391a3, public_63391a3)
        ASM_EXPORT_ENTRY_LAST(0x63391a8, public_63391a8)
    }
}

#undef public_6339134
#undef public_6339140
#undef public_6339154
#undef public_6339157
#undef public_6339173
#undef public_63391a3
#undef public_63391a8
#undef public_63391ab
#undef public_63391d0
#undef public_63391f8
#undef public_63391fb

#pragma init_seg(compiler)
extern "C" void const* const public_6339134 = __AsmFindLabelExport(&internal_6339100, 0x6339134);
extern "C" void const* const public_6339140 = __AsmFindLabelExport(&internal_6339100, 0x6339140);
extern "C" void const* const public_6339173 = __AsmFindLabelExport(&internal_6339100, 0x6339173);
extern "C" void const* const public_63391a3 = __AsmFindLabelExport(&internal_6339100, 0x63391a3);
extern "C" void const* const public_63391a8 = __AsmFindLabelExport(&internal_6339100, 0x63391a8);
