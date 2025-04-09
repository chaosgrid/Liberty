#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_503e20);

#define public_503e3c _public_503e3c
#define public_503e5b _public_503e5b
#define public_503e80 _public_503e80
#define public_503e87 _public_503e87
#define public_503e8f _public_503e8f

PROC_DECLARE(0x503e20, internal_503e20, public_503e20);
extern "C" NAKED register_t __cdecl internal_503e20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+0x68]
        fld dword ptr ds : [public_5c7474]
        mov eax, dword ptr ds : [eax+0x158]
        dec eax
        cmp eax, 3
        ja public_503e8f
/*FIXUP jmp dword ptr ds : [eax*4+public_503e90] @0x503e35*/
  JMPTB cmp eax, 0
  JMPTB je public_503e3c
  JMPTB cmp eax, 1
  JMPTB je public_503e87
  JMPTB cmp eax, 2
  JMPTB je public_503e87
  JMPTB cmp eax, 3
  JMPTB je public_503e5b
  JMPTB int 3
        public_503e3c : nop
        fstp st(0)
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [public_5c7474]
        fld dword ptr ds : [public_5d1f04]
        fnstsw ax
        test ah, 0x41
        jne public_503e8f
        fdiv dword ptr ds : [ecx+4]
        fmul dword ptr ds : [ecx+0x70]
        ret 
        public_503e5b : nop
        fstp st(0)
        fld dword ptr ds : [ecx+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_503e80
        fld dword ptr ds : [ecx+0x70]
        fdiv dword ptr ds : [ecx+0x10]
        fsubr dword ptr ds : [public_5c75dc]
        fmul dword ptr ds : [public_5d1f04]
        ret 
        public_503e80 : nop
        fld dword ptr ds : [public_5c7474]
        ret 
        public_503e87 : nop
        fstp st(0)
        fld dword ptr ds : [public_5d1f04]
        public_503e8f : nop
        ret 
        UNREACHABLE_TRAP(0x503e20)
        ASM_EXPORT_ENTRY_SINGLE(0x503e5b, public_503e5b)
    }
}

#undef public_503e3c
#undef public_503e5b
#undef public_503e80
#undef public_503e87
#undef public_503e8f

#pragma init_seg(compiler)
extern "C" void const* const public_503e5b = __AsmFindLabelExport(&internal_503e20, 0x503e5b);
