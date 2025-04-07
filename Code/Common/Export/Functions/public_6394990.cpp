#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_629ff20);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394998 _public_6394998
#define public_63949a3 _public_63949a3
#define public_63949ab _public_63949ab
#define public_63949b6 _public_63949b6

PROC_DECLARE(0x6394990, internal_6394990, public_6394990);
/* CHUNK of public_62c1220 */
extern "C" NAKED register_t __cdecl internal_6394990()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6285b90
        public_6394998 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_629ff20
        public_63949a3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62881d0
        public_63949ab : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp public_62881d0
        public_63949b6 : nop
        mov eax, offset public_63adfe8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394990)
        ASM_EXPORT_ENTRY_FIRST(0x6394998, public_6394998)
        ASM_EXPORT_ENTRY(0x63949a3, public_63949a3)
        ASM_EXPORT_ENTRY(0x63949ab, public_63949ab)
        ASM_EXPORT_ENTRY_LAST(0x63949b6, public_63949b6)
    }
}

#undef public_6394998
#undef public_63949a3
#undef public_63949ab
#undef public_63949b6

#pragma init_seg(compiler)
extern "C" void const* const public_6394998 = __AsmFindLabelExport(&internal_6394990, 0x6394998);
extern "C" void const* const public_63949a3 = __AsmFindLabelExport(&internal_6394990, 0x63949a3);
extern "C" void const* const public_63949ab = __AsmFindLabelExport(&internal_6394990, 0x63949ab);
extern "C" void const* const public_63949b6 = __AsmFindLabelExport(&internal_6394990, 0x63949b6);
