#include "EngBase-PCH.h"


#define public_66225bd _public_66225bd
#define public_66225c2 _public_66225c2
#define public_66225ce _public_66225ce
#define public_66225ee _public_66225ee
#define public_6622602 _public_6622602
#define public_662261f _public_662261f
#define public_662264e _public_662264e
#define public_6622674 _public_6622674
#define public_66226b6 _public_66226b6

PROC_DECLARE(0x66225b0, internal_66225b0, public_66225b0);
extern "C" NAKED register_t __cdecl internal_66225b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        je public_66225bd
        test eax, eax
        jne public_66225c2
        public_66225bd : nop
        xor eax, eax
        ret 0x10
        public_66225c2 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        jne public_66225ce
        xor eax, eax
        ret 0x10
        public_66225ce : nop
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        jne public_66226b6
        mov ecx, dword ptr ds : [eax+0x5C]
        dec ecx
        cmp ecx, 5
        ja public_66226b6
/*FIXUP jmp dword ptr ds : [ecx*4+public_66226c0] @0x66225e7*/
  JMPTB cmp ecx, 0
  JMPTB je public_66225ee
  JMPTB cmp ecx, 1
  JMPTB je public_66225ee
  JMPTB cmp ecx, 2
  JMPTB je public_6622602
  JMPTB cmp ecx, 3
  JMPTB je public_662261f
  JMPTB cmp ecx, 4
  JMPTB je public_662264e
  JMPTB cmp ecx, 5
  JMPTB je public_6622674
  JMPTB int 3
        public_66225ee : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0xB8]
        mov dword ptr ds : [ecx], eax
        mov eax, 1
        ret 0x10
        public_6622602 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+0xB8]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [eax+0xBC]
        mov dword ptr ds : [ecx+4], eax
        mov eax, 1
        ret 0x10
        public_662261f : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+0xC4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+0xC8]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+0xCC]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xD0]
        mov dword ptr ds : [ecx+0xC], eax
        mov eax, 1
        ret 0x10
        public_662264e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+0xB8]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+0xBC]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+0xC0]
        mov dword ptr ds : [ecx+8], eax
        mov eax, 1
        ret 0x10
        public_6622674 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+0xB8]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+0xBC]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+0xC0]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [eax+0xC4]
        mov dword ptr ds : [ecx+0xC], edx
        mov edx, dword ptr ds : [eax+0xC8]
        mov dword ptr ds : [ecx+0x10], edx
        mov edx, dword ptr ds : [eax+0xCC]
        mov dword ptr ds : [ecx+0x14], edx
        mov eax, dword ptr ds : [eax+0xD0]
        mov dword ptr ds : [ecx+0x18], eax
        public_66226b6 : nop
        mov eax, 1
        ret 0x10
        UNREACHABLE_TRAP(0x66225b0)
        ASM_EXPORT_ENTRY_FIRST(0x66225ee, public_66225ee)
        ASM_EXPORT_ENTRY(0x6622602, public_6622602)
        ASM_EXPORT_ENTRY(0x662261f, public_662261f)
        ASM_EXPORT_ENTRY(0x662264e, public_662264e)
        ASM_EXPORT_ENTRY_LAST(0x6622674, public_6622674)
    }
}

#undef public_66225bd
#undef public_66225c2
#undef public_66225ce
#undef public_66225ee
#undef public_6622602
#undef public_662261f
#undef public_662264e
#undef public_6622674
#undef public_66226b6

#pragma init_seg(compiler)
extern "C" void const* const public_66225ee = __AsmFindLabelExport(&internal_66225b0, 0x66225ee);
extern "C" void const* const public_6622602 = __AsmFindLabelExport(&internal_66225b0, 0x6622602);
extern "C" void const* const public_662261f = __AsmFindLabelExport(&internal_66225b0, 0x662261f);
extern "C" void const* const public_662264e = __AsmFindLabelExport(&internal_66225b0, 0x662264e);
extern "C" void const* const public_6622674 = __AsmFindLabelExport(&internal_66225b0, 0x6622674);
