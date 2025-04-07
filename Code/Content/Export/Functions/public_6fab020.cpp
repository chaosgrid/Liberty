#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab029 _public_6fab029
#define public_6fab032 _public_6fab032

PROC_DECLARE(0x6fab020, internal_6fab020, public_6fab020);
/* CHUNK of public_6eba1f0 */
extern "C" NAKED register_t __cdecl internal_6fab020()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6fb3034]
        public_6fab029 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp dword ptr ds : [public_6fb3034]
        public_6fab032 : nop
        mov eax, offset public_6fbf4f4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab020)
        ASM_EXPORT_ENTRY_FIRST(0x6fab029, public_6fab029)
        ASM_EXPORT_ENTRY_LAST(0x6fab032, public_6fab032)
    }
}

#undef public_6fab029
#undef public_6fab032

#pragma init_seg(compiler)
extern "C" void const* const public_6fab029 = __AsmFindLabelExport(&internal_6fab020, 0x6fab029);
extern "C" void const* const public_6fab032 = __AsmFindLabelExport(&internal_6fab020, 0x6fab032);
