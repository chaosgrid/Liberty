#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48e5f0);
CLANG_FORWARD_PROC_SYMBOL(public_4ceb50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bff28 _public_5bff28
#define public_5bff30 _public_5bff30

PROC_DECLARE(0x5bff20, internal_5bff20, public_5bff20);
/* CHUNK of public_51dfc0 */
extern "C" NAKED register_t __cdecl internal_5bff20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4ceb50
        public_5bff28 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_48e5f0
        public_5bff30 : nop
        mov eax, offset public_5f9ef8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bff20)
        ASM_EXPORT_ENTRY_FIRST(0x5bff28, public_5bff28)
        ASM_EXPORT_ENTRY_LAST(0x5bff30, public_5bff30)
    }
}

#undef public_5bff28
#undef public_5bff30

#pragma init_seg(compiler)
extern "C" void const* const public_5bff28 = __AsmFindLabelExport(&internal_5bff20, 0x5bff28);
extern "C" void const* const public_5bff30 = __AsmFindLabelExport(&internal_5bff20, 0x5bff30);
