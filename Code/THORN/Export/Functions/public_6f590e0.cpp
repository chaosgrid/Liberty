#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a800);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f590e8 _public_6f590e8
#define public_6f590f6 _public_6f590f6
#define public_6f59104 _public_6f59104

PROC_DECLARE(0x6f590e0, internal_6f590e0, public_6f590e0);
/* CHUNK of public_6f42210 */
extern "C" NAKED register_t __cdecl internal_6f590e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f405e0
        public_6f590e8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE8
        jmp public_6f4a800
        public_6f590f6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xEC
        jmp public_6f4a7e0
        public_6f59104 : nop
        mov eax, offset public_6f5c2b0
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f590e0)
        ASM_EXPORT_ENTRY_FIRST(0x6f590e8, public_6f590e8)
        ASM_EXPORT_ENTRY(0x6f590f6, public_6f590f6)
        ASM_EXPORT_ENTRY_LAST(0x6f59104, public_6f59104)
    }
}

#undef public_6f590e8
#undef public_6f590f6
#undef public_6f59104

#pragma init_seg(compiler)
extern "C" void const* const public_6f590e8 = __AsmFindLabelExport(&internal_6f590e0, 0x6f590e8);
extern "C" void const* const public_6f590f6 = __AsmFindLabelExport(&internal_6f590e0, 0x6f590f6);
extern "C" void const* const public_6f59104 = __AsmFindLabelExport(&internal_6f590e0, 0x6f59104);
