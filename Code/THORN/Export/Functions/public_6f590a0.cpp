#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a890);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f590a8 _public_6f590a8
#define public_6f590b6 _public_6f590b6

PROC_DECLARE(0x6f590a0, internal_6f590a0, public_6f590a0);
/* CHUNK of public_6f41a20 */
extern "C" NAKED register_t __cdecl internal_6f590a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f405e0
        public_6f590a8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x158
        jmp public_6f4a890
        public_6f590b6 : nop
        mov eax, offset public_6f5c258
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f590a0)
        ASM_EXPORT_ENTRY_FIRST(0x6f590a8, public_6f590a8)
        ASM_EXPORT_ENTRY_LAST(0x6f590b6, public_6f590b6)
    }
}

#undef public_6f590a8
#undef public_6f590b6

#pragma init_seg(compiler)
extern "C" void const* const public_6f590a8 = __AsmFindLabelExport(&internal_6f590a0, 0x6f590a8);
extern "C" void const* const public_6f590b6 = __AsmFindLabelExport(&internal_6f590a0, 0x6f590b6);
