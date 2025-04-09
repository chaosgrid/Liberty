#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bccab _public_5bccab

PROC_DECLARE(0x5bcca0, internal_5bcca0, public_5bcca0);
/* CHUNK of public_4a69d0 */
extern "C" NAKED register_t __cdecl internal_5bcca0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bccab : nop
        mov eax, offset public_5f6f58
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcca0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bccab, public_5bccab)
    }
}

#undef public_5bccab

#pragma init_seg(compiler)
extern "C" void const* const public_5bccab = __AsmFindLabelExport(&internal_5bcca0, 0x5bccab);
