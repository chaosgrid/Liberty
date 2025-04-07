#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394d08 _public_6394d08
#define public_6394d13 _public_6394d13
#define public_6394d21 _public_6394d21

PROC_DECLARE(0x6394d00, internal_6394d00, public_6394d00);
/* CHUNK of public_62c9540 */
extern "C" NAKED register_t __cdecl internal_6394d00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394d08 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp public_62c3040
        public_6394d13 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE8
        jmp public_62c3040
        public_6394d21 : nop
        mov eax, offset public_63ae35c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394d00)
        ASM_EXPORT_ENTRY_FIRST(0x6394d08, public_6394d08)
        ASM_EXPORT_ENTRY(0x6394d13, public_6394d13)
        ASM_EXPORT_ENTRY_LAST(0x6394d21, public_6394d21)
    }
}

#undef public_6394d08
#undef public_6394d13
#undef public_6394d21

#pragma init_seg(compiler)
extern "C" void const* const public_6394d08 = __AsmFindLabelExport(&internal_6394d00, 0x6394d08);
extern "C" void const* const public_6394d13 = __AsmFindLabelExport(&internal_6394d00, 0x6394d13);
extern "C" void const* const public_6394d21 = __AsmFindLabelExport(&internal_6394d00, 0x6394d21);
