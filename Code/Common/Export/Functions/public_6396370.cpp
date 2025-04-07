#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627be50);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396378 _public_6396378

PROC_DECLARE(0x6396370, internal_6396370, public_6396370);
/* CHUNK of public_630e350 */
extern "C" NAKED register_t __cdecl internal_6396370()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_627be50
        public_6396378 : nop
        mov eax, offset public_63b0250
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396370)
        ASM_EXPORT_ENTRY_SINGLE(0x6396378, public_6396378)
    }
}

#undef public_6396378

#pragma init_seg(compiler)
extern "C" void const* const public_6396378 = __AsmFindLabelExport(&internal_6396370, 0x6396378);
