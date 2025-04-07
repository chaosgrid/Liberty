#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1b2c _public_6fb1b2c

PROC_DECLARE(0x6fb1b20, internal_6fb1b20, public_6fb1b20);
/* CHUNK of public_6f9e5f0 */
extern "C" NAKED register_t __cdecl internal_6fb1b20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_6fb3034]
        public_6fb1b2c : nop
        mov eax, offset public_6fc7198
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1b20)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb1b2c, public_6fb1b2c)
    }
}

#undef public_6fb1b2c

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1b2c = __AsmFindLabelExport(&internal_6fb1b20, 0x6fb1b2c);
