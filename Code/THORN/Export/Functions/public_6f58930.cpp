#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f5893b _public_6f5893b

PROC_DECLARE(0x6f58930, internal_6f58930, public_6f58930);
/* CHUNK of public_6f32a70 */
extern "C" NAKED register_t __cdecl internal_6f58930()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f5893b : nop
        mov eax, offset public_6f5badc
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58930)
        ASM_EXPORT_ENTRY_SINGLE(0x6f5893b, public_6f5893b)
    }
}

#undef public_6f5893b

#pragma init_seg(compiler)
extern "C" void const* const public_6f5893b = __AsmFindLabelExport(&internal_6f58930, 0x6f5893b);
