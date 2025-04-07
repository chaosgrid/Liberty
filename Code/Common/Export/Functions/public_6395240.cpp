#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395248 _public_6395248
#define public_6395253 _public_6395253

PROC_DECLARE(0x6395240, internal_6395240, public_6395240);
/* CHUNK of public_62d77d0 */
extern "C" NAKED register_t __cdecl internal_6395240()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x24]
        jmp public_62881d0
        public_6395248 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x28
        jmp public_62881d0
        public_6395253 : nop
        mov eax, offset public_63aece0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395240)
        ASM_EXPORT_ENTRY_FIRST(0x6395248, public_6395248)
        ASM_EXPORT_ENTRY_LAST(0x6395253, public_6395253)
    }
}

#undef public_6395248
#undef public_6395253

#pragma init_seg(compiler)
extern "C" void const* const public_6395248 = __AsmFindLabelExport(&internal_6395240, 0x6395248);
extern "C" void const* const public_6395253 = __AsmFindLabelExport(&internal_6395240, 0x6395253);
