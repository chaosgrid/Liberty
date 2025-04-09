#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be118 _public_5be118

PROC_DECLARE(0x5be110, internal_5be110, public_5be110);
/* CHUNK of public_4d5d40 */
extern "C" NAKED register_t __cdecl internal_5be110()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4c8630
        public_5be118 : nop
        mov eax, offset public_5f84a0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be110)
        ASM_EXPORT_ENTRY_SINGLE(0x5be118, public_5be118)
    }
}

#undef public_5be118

#pragma init_seg(compiler)
extern "C" void const* const public_5be118 = __AsmFindLabelExport(&internal_5be110, 0x5be118);
