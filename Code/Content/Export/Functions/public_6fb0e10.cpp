#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f84e60);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f800);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0e18 _public_6fb0e18
#define public_6fb0e21 _public_6fb0e21
#define public_6fb0e2c _public_6fb0e2c

PROC_DECLARE(0x6fb0e10, internal_6fb0e10, public_6fb0e10);
/* CHUNK of public_6f88500 */
extern "C" NAKED register_t __cdecl internal_6fb0e10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f84e60
        public_6fb0e18 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_6fb325c]
        public_6fb0e21 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_6f9f800
        public_6fb0e2c : nop
        mov eax, offset public_6fc6394
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0e10)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0e18, public_6fb0e18)
        ASM_EXPORT_ENTRY(0x6fb0e21, public_6fb0e21)
        ASM_EXPORT_ENTRY_LAST(0x6fb0e2c, public_6fb0e2c)
    }
}

#undef public_6fb0e18
#undef public_6fb0e21
#undef public_6fb0e2c

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0e18 = __AsmFindLabelExport(&internal_6fb0e10, 0x6fb0e18);
extern "C" void const* const public_6fb0e21 = __AsmFindLabelExport(&internal_6fb0e10, 0x6fb0e21);
extern "C" void const* const public_6fb0e2c = __AsmFindLabelExport(&internal_6fb0e10, 0x6fb0e2c);
