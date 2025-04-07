#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393078 _public_6393078

PROC_DECLARE(0x6393070, internal_6393070, public_6393070);
/* CHUNK of public_6287870 */
extern "C" NAKED register_t __cdecl internal_6393070()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6285b90
        public_6393078 : nop
        mov eax, offset public_63ac0fc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393070)
        ASM_EXPORT_ENTRY_SINGLE(0x6393078, public_6393078)
    }
}

#undef public_6393078

#pragma init_seg(compiler)
extern "C" void const* const public_6393078 = __AsmFindLabelExport(&internal_6393070, 0x6393078);
