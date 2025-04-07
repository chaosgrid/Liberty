#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24a10);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58451 _public_6f58451

PROC_DECLARE(0x6f58440, internal_6f58440, public_6f58440);
/* CHUNK of public_6f24820 */
extern "C" NAKED register_t __cdecl internal_6f58440()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6f24a10
        add esp, 8
        ret 
        public_6f58451 : nop
        mov eax, offset public_6f5b5e0
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58440)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58451, public_6f58451)
    }
}

#undef public_6f58451

#pragma init_seg(compiler)
extern "C" void const* const public_6f58451 = __AsmFindLabelExport(&internal_6f58440, 0x6f58451);
