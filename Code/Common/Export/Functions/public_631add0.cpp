#include "Common-PCH.h"


#define public_631ade2 _public_631ade2
#define public_631ade8 _public_631ade8
#define public_631adee _public_631adee
#define public_631adf4 _public_631adf4
#define public_631adfa _public_631adfa
#define public_631ae00 _public_631ae00
#define public_631ae05 _public_631ae05

PROC_DECLARE(0x631add0, internal_631add0, public_631add0);
extern "C" NAKED register_t __cdecl internal_631add0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ds : [ecx+0x10]
        xor eax, eax
        dec ecx
        cmp ecx, 5
        ja public_631ae05
/*FIXUP jmp dword ptr ds : [ecx*4+public_631ae08] @0x631addb*/
  JMPTB cmp ecx, 0
  JMPTB je public_631ade2
  JMPTB cmp ecx, 1
  JMPTB je public_631ade8
  JMPTB cmp ecx, 2
  JMPTB je public_631adee
  JMPTB cmp ecx, 3
  JMPTB je public_631adf4
  JMPTB cmp ecx, 4
  JMPTB je public_631adfa
  JMPTB cmp ecx, 5
  JMPTB je public_631ae00
  JMPTB int 3
        public_631ade2 : nop
        mov eax, offset public_63a39a0
        ret 
        public_631ade8 : nop
        mov eax, offset public_63a3988
        ret 
        public_631adee : nop
        mov eax, offset public_63a3978
        ret 
        public_631adf4 : nop
        mov eax, offset public_63a3960
        ret 
        public_631adfa : nop
        mov eax, offset public_63a3950
        ret 
        public_631ae00 : nop
        mov eax, offset public_63a3938
        public_631ae05 : nop
        ret 
        UNREACHABLE_TRAP(0x631add0)
        ASM_EXPORT_ENTRY_FIRST(0x631ade2, public_631ade2)
        ASM_EXPORT_ENTRY(0x631ade8, public_631ade8)
        ASM_EXPORT_ENTRY(0x631adee, public_631adee)
        ASM_EXPORT_ENTRY(0x631adf4, public_631adf4)
        ASM_EXPORT_ENTRY(0x631adfa, public_631adfa)
        ASM_EXPORT_ENTRY_LAST(0x631ae00, public_631ae00)
    }
}

#undef public_631ade2
#undef public_631ade8
#undef public_631adee
#undef public_631adf4
#undef public_631adfa
#undef public_631ae00
#undef public_631ae05

#pragma init_seg(compiler)
extern "C" void const* const public_631ade2 = __AsmFindLabelExport(&internal_631add0, 0x631ade2);
extern "C" void const* const public_631ade8 = __AsmFindLabelExport(&internal_631add0, 0x631ade8);
extern "C" void const* const public_631adee = __AsmFindLabelExport(&internal_631add0, 0x631adee);
extern "C" void const* const public_631adf4 = __AsmFindLabelExport(&internal_631add0, 0x631adf4);
extern "C" void const* const public_631adfa = __AsmFindLabelExport(&internal_631add0, 0x631adfa);
extern "C" void const* const public_631ae00 = __AsmFindLabelExport(&internal_631add0, 0x631ae00);
