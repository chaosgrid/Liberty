#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403af0);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a5fa _public_41a5fa

PROC_DECLARE(0x41a5f0, internal_41a5f0, public_41a5f0);
/* CHUNK of public_411cd0 */
extern "C" NAKED register_t __cdecl internal_41a5f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_403af0
        ret 
        public_41a5fa : nop
        mov eax, offset public_41f708
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a5f0)
        ASM_EXPORT_ENTRY_SINGLE(0x41a5fa, public_41a5fa)
    }
}

#undef public_41a5fa

#pragma init_seg(compiler)
extern "C" void const* const public_41a5fa = __AsmFindLabelExport(&internal_41a5f0, 0x41a5fa);
