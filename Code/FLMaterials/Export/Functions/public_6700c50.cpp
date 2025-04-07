#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3080);
CLANG_FORWARD_PROC_SYMBOL(public_66f95c0);
CLANG_FORWARD_PROC_SYMBOL(public_670071b);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700c58 _public_6700c58
#define public_6700c60 _public_6700c60
#define public_6700c76 _public_6700c76
#define public_6700c7e _public_6700c7e
#define public_6700c86 _public_6700c86

PROC_DECLARE(0x6700c50, internal_6700c50, public_6700c50);
/* CHUNK of public_66f8c50 */
extern "C" NAKED register_t __cdecl internal_6700c50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x58]
        jmp public_66f95c0
        public_6700c58 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_66f95c0
/*FIXUP public_6700c60 : nop
        push offset _public_66f95c0 @0x6700c60*/
  FIXUP public_6700c60 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f95c0
        push 2
        push 8
        lea eax, ss:[ebp-0xAC]
        push eax
        call public_670071b
        ret 
        public_6700c76 : nop
        lea ecx, ss:[ebp-0x80]
        jmp public_66f3080
        public_6700c7e : nop
        lea ecx, ss:[ebp-0x74]
        jmp public_66f3080
        public_6700c86 : nop
        mov eax, offset public_67034f8
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700c50)
        ASM_EXPORT_ENTRY_FIRST(0x6700c58, public_6700c58)
        ASM_EXPORT_ENTRY(0x6700c60, public_6700c60)
        ASM_EXPORT_ENTRY(0x6700c76, public_6700c76)
        ASM_EXPORT_ENTRY(0x6700c7e, public_6700c7e)
        ASM_EXPORT_ENTRY_LAST(0x6700c86, public_6700c86)
    }
}

#undef public_6700c58
#undef public_6700c60
#undef public_6700c76
#undef public_6700c7e
#undef public_6700c86

#pragma init_seg(compiler)
extern "C" void const* const public_6700c58 = __AsmFindLabelExport(&internal_6700c50, 0x6700c58);
extern "C" void const* const public_6700c60 = __AsmFindLabelExport(&internal_6700c50, 0x6700c60);
extern "C" void const* const public_6700c76 = __AsmFindLabelExport(&internal_6700c50, 0x6700c76);
extern "C" void const* const public_6700c7e = __AsmFindLabelExport(&internal_6700c50, 0x6700c7e);
extern "C" void const* const public_6700c86 = __AsmFindLabelExport(&internal_6700c50, 0x6700c86);
