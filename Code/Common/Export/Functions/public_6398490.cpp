#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6361e50);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6398498 _public_6398498

PROC_DECLARE(0x6398490, internal_6398490, public_6398490);
/* CHUNK of public_6361f80 */
extern "C" NAKED register_t __cdecl internal_6398490()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6361e50
        public_6398498 : nop
        mov eax, offset public_63b2a88
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398490)
        ASM_EXPORT_ENTRY_SINGLE(0x6398498, public_6398498)
    }
}

#undef public_6398498

#pragma init_seg(compiler)
extern "C" void const* const public_6398498 = __AsmFindLabelExport(&internal_6398490, 0x6398498);
