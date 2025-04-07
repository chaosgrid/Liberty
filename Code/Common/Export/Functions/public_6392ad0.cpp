#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392adb _public_6392adb
#define public_6392ae6 _public_6392ae6
#define public_6392af2 _public_6392af2
#define public_6392afe _public_6392afe

PROC_DECLARE(0x6392ad0, internal_6392ad0, public_6392ad0);
/* CHUNK of public_62770a0 */
extern "C" NAKED register_t __cdecl internal_6392ad0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263860
        public_6392adb : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263310
        public_6392ae6 : nop
        mov ecx, dword ptr ss : [ebp-0x167C]
        jmp dword ptr ds : [public_63991ac]
        public_6392af2 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_63991ac]
        public_6392afe : nop
        mov eax, offset public_63ab8f0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392ad0)
        ASM_EXPORT_ENTRY_FIRST(0x6392adb, public_6392adb)
        ASM_EXPORT_ENTRY(0x6392ae6, public_6392ae6)
        ASM_EXPORT_ENTRY(0x6392af2, public_6392af2)
        ASM_EXPORT_ENTRY_LAST(0x6392afe, public_6392afe)
    }
}

#undef public_6392adb
#undef public_6392ae6
#undef public_6392af2
#undef public_6392afe

#pragma init_seg(compiler)
extern "C" void const* const public_6392adb = __AsmFindLabelExport(&internal_6392ad0, 0x6392adb);
extern "C" void const* const public_6392ae6 = __AsmFindLabelExport(&internal_6392ad0, 0x6392ae6);
extern "C" void const* const public_6392af2 = __AsmFindLabelExport(&internal_6392ad0, 0x6392af2);
extern "C" void const* const public_6392afe = __AsmFindLabelExport(&internal_6392ad0, 0x6392afe);
