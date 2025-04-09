#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9dbe _public_5b9dbe

PROC_DECLARE(0x5b9db0, internal_5b9db0, public_5b9db0);
/* CHUNK of public_44eab0 */
extern "C" NAKED register_t __cdecl internal_5b9db0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA8
        jmp public_4a2d30
        public_5b9dbe : nop
        mov eax, offset public_5f4054
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9db0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9dbe, public_5b9dbe)
    }
}

#undef public_5b9dbe

#pragma init_seg(compiler)
extern "C" void const* const public_5b9dbe = __AsmFindLabelExport(&internal_5b9db0, 0x5b9dbe);
