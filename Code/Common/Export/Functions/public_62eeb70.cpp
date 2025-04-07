#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e77e0);
CLANG_FORWARD_PROC_SYMBOL(public_62ee390);
CLANG_FORWARD_PROC_SYMBOL(public_62eeb70);

#define public_62eebab _public_62eebab
#define public_62eebb3 _public_62eebb3
#define public_62eebbb _public_62eebbb
#define public_62eebc3 _public_62eebc3
#define public_62eebcb _public_62eebcb
#define public_62eebd3 _public_62eebd3
#define public_62eebd9 _public_62eebd9
#define public_62eebeb _public_62eebeb

PROC_DECLARE(0x62eeb70, internal_62eeb70, public_62eeb70);
extern "C" NAKED register_t __cdecl internal_62eeb70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 0x34
        call public_62e77e0
        mov ecx, esi
        call public_62ee390
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+0x1900]
        cmp eax, 4
        pop esi
        ja public_62eebd3
/*FIXUP jmp dword ptr ds : [eax*4+public_62eebf4] @0x62eeba4*/
  JMPTB cmp eax, 0
  JMPTB je public_62eebab
  JMPTB cmp eax, 1
  JMPTB je public_62eebb3
  JMPTB cmp eax, 2
  JMPTB je public_62eebbb
  JMPTB cmp eax, 3
  JMPTB je public_62eebc3
  JMPTB cmp eax, 4
  JMPTB je public_62eebcb
  JMPTB int 3
        public_62eebab : nop
        fld dword ptr ds : [public_639e0e0]
        jmp public_62eebd9
        public_62eebb3 : nop
        fld dword ptr ds : [public_639e0dc]
        jmp public_62eebd9
        public_62eebbb : nop
        fld dword ptr ds : [public_639e0d8]
        jmp public_62eebd9
        public_62eebc3 : nop
        fld dword ptr ds : [public_639e0d4]
        jmp public_62eebd9
        public_62eebcb : nop
        fld dword ptr ds : [public_639a1d0]
        jmp public_62eebd9
        public_62eebd3 : nop
        fld dword ptr ds : [public_639c13c]
        public_62eebd9 : nop
        fxch 
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 1
        jne public_62eebeb
        xor eax, eax
        ret 4
        public_62eebeb : nop
        mov eax, 1
        ret 4
        UNREACHABLE_TRAP(0x62eeb70)
        ASM_EXPORT_ENTRY_FIRST(0x62eebab, public_62eebab)
        ASM_EXPORT_ENTRY(0x62eebb3, public_62eebb3)
        ASM_EXPORT_ENTRY(0x62eebbb, public_62eebbb)
        ASM_EXPORT_ENTRY(0x62eebc3, public_62eebc3)
        ASM_EXPORT_ENTRY_LAST(0x62eebcb, public_62eebcb)
    }
}

#undef public_62eebab
#undef public_62eebb3
#undef public_62eebbb
#undef public_62eebc3
#undef public_62eebcb
#undef public_62eebd3
#undef public_62eebd9
#undef public_62eebeb

#pragma init_seg(compiler)
extern "C" void const* const public_62eebab = __AsmFindLabelExport(&internal_62eeb70, 0x62eebab);
extern "C" void const* const public_62eebb3 = __AsmFindLabelExport(&internal_62eeb70, 0x62eebb3);
extern "C" void const* const public_62eebbb = __AsmFindLabelExport(&internal_62eeb70, 0x62eebbb);
extern "C" void const* const public_62eebc3 = __AsmFindLabelExport(&internal_62eeb70, 0x62eebc3);
extern "C" void const* const public_62eebcb = __AsmFindLabelExport(&internal_62eeb70, 0x62eebcb);
