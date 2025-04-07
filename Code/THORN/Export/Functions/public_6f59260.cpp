#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59268 _public_6f59268

PROC_DECLARE(0x6f59260, internal_6f59260, public_6f59260);
/* CHUNK of public_6f434f0 */
extern "C" NAKED register_t __cdecl internal_6f59260()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f405e0
        public_6f59268 : nop
        mov eax, offset public_6f5c424
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59260)
        ASM_EXPORT_ENTRY_SINGLE(0x6f59268, public_6f59268)
    }
}

#undef public_6f59268

#pragma init_seg(compiler)
extern "C" void const* const public_6f59268 = __AsmFindLabelExport(&internal_6f59260, 0x6f59268);
