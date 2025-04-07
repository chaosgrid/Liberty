#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639564b _public_639564b

PROC_DECLARE(0x6395640, internal_6395640, public_6395640);
/* CHUNK of public_62f1c70 */
extern "C" NAKED register_t __cdecl internal_6395640()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639564b : nop
        mov eax, offset public_63af118
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395640)
        ASM_EXPORT_ENTRY_SINGLE(0x639564b, public_639564b)
    }
}

#undef public_639564b

#pragma init_seg(compiler)
extern "C" void const* const public_639564b = __AsmFindLabelExport(&internal_6395640, 0x639564b);
