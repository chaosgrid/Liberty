#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6321f10);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396d38 _public_6396d38

PROC_DECLARE(0x6396d30, internal_6396d30, public_6396d30);
/* CHUNK of public_6320110 */
extern "C" NAKED register_t __cdecl internal_6396d30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6321f10
        public_6396d38 : nop
        mov eax, offset public_63b0ccc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396d30)
        ASM_EXPORT_ENTRY_SINGLE(0x6396d38, public_6396d38)
    }
}

#undef public_6396d38

#pragma init_seg(compiler)
extern "C" void const* const public_6396d38 = __AsmFindLabelExport(&internal_6396d30, 0x6396d38);
