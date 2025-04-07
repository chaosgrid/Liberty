#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac369 _public_6fac369

PROC_DECLARE(0x6fac360, internal_6fac360, public_6fac360);
/* CHUNK of public_6f915a0 */
extern "C" NAKED register_t __cdecl internal_6fac360()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_6fb3034]
        public_6fac369 : nop
        mov eax, offset public_6fc0fd8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac360)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac369, public_6fac369)
    }
}

#undef public_6fac369

#pragma init_seg(compiler)
extern "C" void const* const public_6fac369 = __AsmFindLabelExport(&internal_6fac360, 0x6fac369);
