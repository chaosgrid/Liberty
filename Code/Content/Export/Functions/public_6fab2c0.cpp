#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab2cb _public_6fab2cb

PROC_DECLARE(0x6fab2c0, internal_6fab2c0, public_6fab2c0);
/* CHUNK of public_6ed80d0 */
extern "C" NAKED register_t __cdecl internal_6fab2c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x230]
        jmp public_6ed61d0
        public_6fab2cb : nop
        mov eax, offset public_6fbf854
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab2c0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab2cb, public_6fab2cb)
    }
}

#undef public_6fab2cb

#pragma init_seg(compiler)
extern "C" void const* const public_6fab2cb = __AsmFindLabelExport(&internal_6fab2c0, 0x6fab2cb);
