#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f594c8 _public_6f594c8
#define public_6f594d4 _public_6f594d4

PROC_DECLARE(0x6f594c0, internal_6f594c0, public_6f594c0);
/* CHUNK of public_6f47750 */
extern "C" NAKED register_t __cdecl internal_6f594c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f594c8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp dword ptr ds : [public_6f5a014]
        public_6f594d4 : nop
        mov eax, offset public_6f5c6c8
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f594c0)
        ASM_EXPORT_ENTRY_FIRST(0x6f594c8, public_6f594c8)
        ASM_EXPORT_ENTRY_LAST(0x6f594d4, public_6f594d4)
    }
}

#undef public_6f594c8
#undef public_6f594d4

#pragma init_seg(compiler)
extern "C" void const* const public_6f594c8 = __AsmFindLabelExport(&internal_6f594c0, 0x6f594c8);
extern "C" void const* const public_6f594d4 = __AsmFindLabelExport(&internal_6f594c0, 0x6f594d4);
