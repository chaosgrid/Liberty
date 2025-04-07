#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f84e60);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f800);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0e48 _public_6fb0e48
#define public_6fb0e51 _public_6fb0e51
#define public_6fb0e5c _public_6fb0e5c

PROC_DECLARE(0x6fb0e40, internal_6fb0e40, public_6fb0e40);
/* CHUNK of public_6f88620 */
extern "C" NAKED register_t __cdecl internal_6fb0e40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f84e60
        public_6fb0e48 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp dword ptr ds : [public_6fb325c]
        public_6fb0e51 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x10
        jmp public_6f9f800
        public_6fb0e5c : nop
        mov eax, offset public_6fc63c8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0e40)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0e48, public_6fb0e48)
        ASM_EXPORT_ENTRY(0x6fb0e51, public_6fb0e51)
        ASM_EXPORT_ENTRY_LAST(0x6fb0e5c, public_6fb0e5c)
    }
}

#undef public_6fb0e48
#undef public_6fb0e51
#undef public_6fb0e5c

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0e48 = __AsmFindLabelExport(&internal_6fb0e40, 0x6fb0e48);
extern "C" void const* const public_6fb0e51 = __AsmFindLabelExport(&internal_6fb0e40, 0x6fb0e51);
extern "C" void const* const public_6fb0e5c = __AsmFindLabelExport(&internal_6fb0e40, 0x6fb0e5c);
