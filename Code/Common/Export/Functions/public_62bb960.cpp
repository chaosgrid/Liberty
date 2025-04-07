#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285d60);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);

#define public_62bb9ba _public_62bb9ba
#define public_62bb9e8 _public_62bb9e8
#define public_62bba01 _public_62bba01
#define public_62bba1a _public_62bba1a
#define public_62bba41 _public_62bba41
#define public_62bba45 _public_62bba45
#define public_62bbaa3 _public_62bbaa3
#define public_62bbacd _public_62bbacd
#define public_62bbad8 _public_62bbad8

PROC_DECLARE(0x62bb960, internal_62bb960, public_62bb960);
extern "C" NAKED register_t __cdecl internal_62bb960()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        push edi
        je public_62bbad8
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [eax+0x128]
        mov edi, dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [edi]
        fld dword ptr ds : [ecx+0x2A0]
        fld st(1)
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_62bbacd
        fsub st, st(1)
        fstp dword ptr ds : [ecx+0x2A0]
        mov eax, dword ptr ds : [esi+0x18]
        dec eax
        cmp eax, 3
        fstp st(0)
        ja public_62bbaa3
/*FIXUP jmp dword ptr ds : [eax*4+public_62bbae0] @0x62bb9b3*/
  JMPTB cmp eax, 0
  JMPTB je public_62bb9ba
  JMPTB cmp eax, 1
  JMPTB je public_62bb9e8
  JMPTB cmp eax, 2
  JMPTB je public_62bba01
  JMPTB cmp eax, 3
  JMPTB je public_62bba1a
  JMPTB int 3
        public_62bb9ba : nop
        mov eax, dword ptr ds : [esi+0x14]
        fld dword ptr ds : [eax+8]
        add eax, 8
        fld dword ptr ds : [eax+0xC]
        sub esp, 0xC
        fld dword ptr ds : [eax+0x18]
        lea ecx, ss:[esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        jmp public_62bba45
        public_62bb9e8 : nop
        mov eax, dword ptr ds : [esi+0x14]
        fld dword ptr ds : [eax+8]
        add eax, 8
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+0x18]
        jmp public_62bba41
        public_62bba01 : nop
        mov eax, dword ptr ds : [esi+0x14]
        fld dword ptr ds : [eax+0xC]
        add eax, 8
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+0x10]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+0x1C]
        jmp public_62bba41
        public_62bba1a : nop
        mov eax, dword ptr ds : [esi+0x14]
        fld dword ptr ds : [eax+0xC]
        add eax, 8
        fld dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax+0x1C]
        fstp dword ptr ss : [esp+0x28]
        fxch 
        fchs 
        fstp dword ptr ss : [esp+0x14]
        fchs 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
        fchs 
        public_62bba41 : nop
        fstp dword ptr ss : [esp+0x1C]
        public_62bba45 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [edx+0x124]
        push eax
        fld dword ptr ss : [esp+0xC]
        lea ecx, ss:[esp+0xC]
        fmul st, st(1)
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        call public_6285d60
        pop edi
        pop esi
        add esp, 0x24
        ret 8
        public_62bbaa3 : nop
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639ed04 @0x62bbaa9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ed04
        push 0x4D
/*FIXUP push offset public_639ecd4 @0x62bbab0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ecd4
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x62bbaba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        add esp, 0x24
        ret 8
        public_62bbacd : nop
        fstp st(0)
        mov dword ptr ds : [esi+0x18], 0
        fstp st(0)
        public_62bbad8 : nop
        pop edi
        pop esi
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x62bb960)
        ASM_EXPORT_ENTRY_FIRST(0x62bb9ba, public_62bb9ba)
        ASM_EXPORT_ENTRY(0x62bb9e8, public_62bb9e8)
        ASM_EXPORT_ENTRY(0x62bba01, public_62bba01)
        ASM_EXPORT_ENTRY_LAST(0x62bba1a, public_62bba1a)
    }
}

#undef public_62bb9ba
#undef public_62bb9e8
#undef public_62bba01
#undef public_62bba1a
#undef public_62bba41
#undef public_62bba45
#undef public_62bbaa3
#undef public_62bbacd
#undef public_62bbad8

#pragma init_seg(compiler)
extern "C" void const* const public_62bb9ba = __AsmFindLabelExport(&internal_62bb960, 0x62bb9ba);
extern "C" void const* const public_62bb9e8 = __AsmFindLabelExport(&internal_62bb960, 0x62bb9e8);
extern "C" void const* const public_62bba01 = __AsmFindLabelExport(&internal_62bb960, 0x62bba01);
extern "C" void const* const public_62bba1a = __AsmFindLabelExport(&internal_62bb960, 0x62bba1a);
