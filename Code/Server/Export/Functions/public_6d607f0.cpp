#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d607fc _public_6d607fc
#define public_6d6080b _public_6d6080b

PROC_DECLARE(0x6d607f0, internal_6d607f0, public_6d607f0);
/* CHUNK of public_6cf0330 */
extern "C" NAKED register_t __cdecl internal_6d607f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp dword ptr ds : [public_6d64390]
        public_6d607fc : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x80
        jmp dword ptr ds : [public_6d6438c]
        public_6d6080b : nop
        mov eax, offset public_6d71110
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d607f0)
        ASM_EXPORT_ENTRY_FIRST(0x6d607fc, public_6d607fc)
        ASM_EXPORT_ENTRY_LAST(0x6d6080b, public_6d6080b)
    }
}

#undef public_6d607fc
#undef public_6d6080b

#pragma init_seg(compiler)
extern "C" void const* const public_6d607fc = __AsmFindLabelExport(&internal_6d607f0, 0x6d607fc);
extern "C" void const* const public_6d6080b = __AsmFindLabelExport(&internal_6d607f0, 0x6d6080b);
