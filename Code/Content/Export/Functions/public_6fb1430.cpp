#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb143c _public_6fb143c

PROC_DECLARE(0x6fb1430, internal_6fb1430, public_6fb1430);
/* CHUNK of public_6f90a50 */
extern "C" NAKED register_t __cdecl internal_6fb1430()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_6fb3034]
        public_6fb143c : nop
        mov eax, offset public_6fc6980
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1430)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb143c, public_6fb143c)
    }
}

#undef public_6fb143c

#pragma init_seg(compiler)
extern "C" void const* const public_6fb143c = __AsmFindLabelExport(&internal_6fb1430, 0x6fb143c);
