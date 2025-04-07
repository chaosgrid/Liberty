#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58aeb _public_6f58aeb

PROC_DECLARE(0x6f58ae0, internal_6f58ae0, public_6f58ae0);
/* CHUNK of public_6f37400 */
extern "C" NAKED register_t __cdecl internal_6f58ae0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f58aeb : nop
        mov eax, offset public_6f5bca4
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58ae0)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58aeb, public_6f58aeb)
    }
}

#undef public_6f58aeb

#pragma init_seg(compiler)
extern "C" void const* const public_6f58aeb = __AsmFindLabelExport(&internal_6f58ae0, 0x6f58aeb);
