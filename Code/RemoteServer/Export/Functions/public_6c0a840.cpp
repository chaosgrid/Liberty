#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a848 _public_6c0a848

PROC_DECLARE(0x6c0a840, internal_6c0a840, public_6c0a840);
/* CHUNK of public_6beba40 */
extern "C" NAKED register_t __cdecl internal_6c0a840()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6bebe40
        public_6c0a848 : nop
        mov eax, offset public_6c0ef00
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a840)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a848, public_6c0a848)
    }
}

#undef public_6c0a848

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a848 = __AsmFindLabelExport(&internal_6c0a840, 0x6c0a848);
