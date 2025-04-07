#include "Shading-PCH.h"


#define public_6eb2aa0 _public_6eb2aa0
#define public_6eb2aa6 _public_6eb2aa6
#define public_6eb2aac _public_6eb2aac
#define public_6eb2ab2 _public_6eb2ab2
#define public_6eb2abb _public_6eb2abb
#define public_6eb2ac4 _public_6eb2ac4
#define public_6eb2acd _public_6eb2acd
#define public_6eb2ad3 _public_6eb2ad3
#define public_6eb2ad9 _public_6eb2ad9
#define public_6eb2adf _public_6eb2adf

PROC_DECLARE(0x6eb2a90, internal_6eb2a90, public_6eb2a90);
extern "C" NAKED register_t __cdecl internal_6eb2a90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 8
        ja public_6eb2adf
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb2ae4] @0x6eb2a99*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb2aa0
  JMPTB cmp eax, 1
  JMPTB je public_6eb2aa6
  JMPTB cmp eax, 2
  JMPTB je public_6eb2aac
  JMPTB cmp eax, 3
  JMPTB je public_6eb2ab2
  JMPTB cmp eax, 4
  JMPTB je public_6eb2abb
  JMPTB cmp eax, 5
  JMPTB je public_6eb2ac4
  JMPTB cmp eax, 6
  JMPTB je public_6eb2acd
  JMPTB cmp eax, 7
  JMPTB je public_6eb2ad3
  JMPTB cmp eax, 8
  JMPTB je public_6eb2ad9
  JMPTB int 3
        public_6eb2aa0 : nop
        lea eax, ds:[ecx+0x30]
        ret 4
        public_6eb2aa6 : nop
        lea eax, ds:[ecx+0x20]
        ret 4
        public_6eb2aac : nop
        mov eax, dword ptr ds : [ecx+0x18]
        ret 4
        public_6eb2ab2 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x1C
        ret 4
        public_6eb2abb : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x20
        ret 4
        public_6eb2ac4 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x24
        ret 4
        public_6eb2acd : nop
        lea eax, ds:[ecx+0x68]
        ret 4
        public_6eb2ad3 : nop
        lea eax, ds:[ecx+0x6C]
        ret 4
        public_6eb2ad9 : nop
        lea eax, ds:[ecx+0x70]
        ret 4
        public_6eb2adf : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6eb2a90)
        ASM_EXPORT_ENTRY_FIRST(0x6eb2aa0, public_6eb2aa0)
        ASM_EXPORT_ENTRY(0x6eb2aa6, public_6eb2aa6)
        ASM_EXPORT_ENTRY(0x6eb2aac, public_6eb2aac)
        ASM_EXPORT_ENTRY(0x6eb2ab2, public_6eb2ab2)
        ASM_EXPORT_ENTRY(0x6eb2abb, public_6eb2abb)
        ASM_EXPORT_ENTRY(0x6eb2ac4, public_6eb2ac4)
        ASM_EXPORT_ENTRY(0x6eb2acd, public_6eb2acd)
        ASM_EXPORT_ENTRY(0x6eb2ad3, public_6eb2ad3)
        ASM_EXPORT_ENTRY_LAST(0x6eb2ad9, public_6eb2ad9)
    }
}

#undef public_6eb2aa0
#undef public_6eb2aa6
#undef public_6eb2aac
#undef public_6eb2ab2
#undef public_6eb2abb
#undef public_6eb2ac4
#undef public_6eb2acd
#undef public_6eb2ad3
#undef public_6eb2ad9
#undef public_6eb2adf

#pragma init_seg(compiler)
extern "C" void const* const public_6eb2aa0 = __AsmFindLabelExport(&internal_6eb2a90, 0x6eb2aa0);
extern "C" void const* const public_6eb2aa6 = __AsmFindLabelExport(&internal_6eb2a90, 0x6eb2aa6);
extern "C" void const* const public_6eb2aac = __AsmFindLabelExport(&internal_6eb2a90, 0x6eb2aac);
extern "C" void const* const public_6eb2ab2 = __AsmFindLabelExport(&internal_6eb2a90, 0x6eb2ab2);
extern "C" void const* const public_6eb2abb = __AsmFindLabelExport(&internal_6eb2a90, 0x6eb2abb);
extern "C" void const* const public_6eb2ac4 = __AsmFindLabelExport(&internal_6eb2a90, 0x6eb2ac4);
extern "C" void const* const public_6eb2acd = __AsmFindLabelExport(&internal_6eb2a90, 0x6eb2acd);
extern "C" void const* const public_6eb2ad3 = __AsmFindLabelExport(&internal_6eb2a90, 0x6eb2ad3);
extern "C" void const* const public_6eb2ad9 = __AsmFindLabelExport(&internal_6eb2a90, 0x6eb2ad9);
