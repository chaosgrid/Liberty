#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6321f10);

#define public_6321f2e _public_6321f2e

PROC_DECLARE(0x6321f10, internal_6321f10, public_6321f10);
/* CHUNK of public_6320080 */
extern "C" NAKED register_t __cdecl internal_6321f10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        dec dword ptr ds : [public_640193c]
        jne public_6321f2e
        mov eax, dword ptr ds : [public_6401818]
        push eax
        call dword ptr ds : [public_63990e4]
        mov dword ptr ds : [public_6401818], 0
        public_6321f2e : nop
        ret 
        UNREACHABLE_TRAP(0x6321f10)
        ASM_EXPORT_ENTRY_SINGLE(0x6321f2e, public_6321f2e)
    }
}

#undef public_6321f2e

#pragma init_seg(compiler)
extern "C" void const* const public_6321f2e = __AsmFindLabelExport(&internal_6321f10, 0x6321f2e);
