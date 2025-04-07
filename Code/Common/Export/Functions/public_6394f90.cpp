#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394f98 _public_6394f98
#define public_6394fa3 _public_6394fa3

PROC_DECLARE(0x6394f90, internal_6394f90, public_6394f90);
/* CHUNK of public_62cf360 */
extern "C" NAKED register_t __cdecl internal_6394f90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394f98 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_62881d0
        public_6394fa3 : nop
        mov eax, offset public_63ae6ac
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394f90)
        ASM_EXPORT_ENTRY_FIRST(0x6394f98, public_6394f98)
        ASM_EXPORT_ENTRY_LAST(0x6394fa3, public_6394fa3)
    }
}

#undef public_6394f98
#undef public_6394fa3

#pragma init_seg(compiler)
extern "C" void const* const public_6394f98 = __AsmFindLabelExport(&internal_6394f90, 0x6394f98);
extern "C" void const* const public_6394fa3 = __AsmFindLabelExport(&internal_6394f90, 0x6394fa3);
