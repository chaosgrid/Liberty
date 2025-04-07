#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a8a8 _public_6c0a8a8

PROC_DECLARE(0x6c0a8a0, internal_6c0a8a0, public_6c0a8a0);
/* CHUNK of public_6becf40 */
extern "C" NAKED register_t __cdecl internal_6c0a8a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6bebe40
        public_6c0a8a8 : nop
        mov eax, offset public_6c0ef74
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a8a0)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a8a8, public_6c0a8a8)
    }
}

#undef public_6c0a8a8

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a8a8 = __AsmFindLabelExport(&internal_6c0a8a0, 0x6c0a8a8);
