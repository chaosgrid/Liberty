#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5914c0);
CLANG_FORWARD_PROC_SYMBOL(public_5915e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4938 _public_5c4938
#define public_5c4943 _public_5c4943

PROC_DECLARE(0x5c4930, internal_5c4930, public_5c4930);
/* CHUNK of public_591510 */
extern "C" NAKED register_t __cdecl internal_5c4930()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_5914c0
        public_5c4938 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_5915e0
        public_5c4943 : nop
        mov eax, offset public_5fe620
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4930)
        ASM_EXPORT_ENTRY_FIRST(0x5c4938, public_5c4938)
        ASM_EXPORT_ENTRY_LAST(0x5c4943, public_5c4943)
    }
}

#undef public_5c4938
#undef public_5c4943

#pragma init_seg(compiler)
extern "C" void const* const public_5c4938 = __AsmFindLabelExport(&internal_5c4930, 0x5c4938);
extern "C" void const* const public_5c4943 = __AsmFindLabelExport(&internal_5c4930, 0x5c4943);
