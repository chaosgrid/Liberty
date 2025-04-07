#include "Common-PCH.h"


#define public_62a8790 _public_62a8790
#define public_62a8799 _public_62a8799
#define public_62a87a2 _public_62a87a2
#define public_62a87ab _public_62a87ab
#define public_62a87b4 _public_62a87b4
#define public_62a87bd _public_62a87bd

PROC_DECLARE(0x62a8780, internal_62a8780, public_62a8780);
extern "C" NAKED register_t __cdecl internal_62a8780()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 4
        ja public_62a87bd
/*FIXUP jmp dword ptr ds : [eax*4+public_62a87c8] @0x62a8789*/
  JMPTB cmp eax, 0
  JMPTB je public_62a8790
  JMPTB cmp eax, 1
  JMPTB je public_62a8799
  JMPTB cmp eax, 2
  JMPTB je public_62a87a2
  JMPTB cmp eax, 3
  JMPTB je public_62a87ab
  JMPTB cmp eax, 4
  JMPTB je public_62a87b4
  JMPTB int 3
        public_62a8790 : nop
        fld dword ptr ds : [public_639e0e0]
        ret 4
        public_62a8799 : nop
        fld dword ptr ds : [public_639e0dc]
        ret 4
        public_62a87a2 : nop
        fld dword ptr ds : [public_639e0d8]
        ret 4
        public_62a87ab : nop
        fld dword ptr ds : [public_639e0d4]
        ret 4
        public_62a87b4 : nop
        fld dword ptr ds : [public_639a1d0]
        ret 4
        public_62a87bd : nop
        fld dword ptr ds : [public_639c13c]
        ret 4
        UNREACHABLE_TRAP(0x62a8780)
        ASM_EXPORT_ENTRY_FIRST(0x62a8790, public_62a8790)
        ASM_EXPORT_ENTRY(0x62a8799, public_62a8799)
        ASM_EXPORT_ENTRY(0x62a87a2, public_62a87a2)
        ASM_EXPORT_ENTRY(0x62a87ab, public_62a87ab)
        ASM_EXPORT_ENTRY_LAST(0x62a87b4, public_62a87b4)
    }
}

#undef public_62a8790
#undef public_62a8799
#undef public_62a87a2
#undef public_62a87ab
#undef public_62a87b4
#undef public_62a87bd

#pragma init_seg(compiler)
extern "C" void const* const public_62a8790 = __AsmFindLabelExport(&internal_62a8780, 0x62a8790);
extern "C" void const* const public_62a8799 = __AsmFindLabelExport(&internal_62a8780, 0x62a8799);
extern "C" void const* const public_62a87a2 = __AsmFindLabelExport(&internal_62a8780, 0x62a87a2);
extern "C" void const* const public_62a87ab = __AsmFindLabelExport(&internal_62a8780, 0x62a87ab);
extern "C" void const* const public_62a87b4 = __AsmFindLabelExport(&internal_62a8780, 0x62a87b4);
