#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f85550);
CLANG_FORWARD_PROC_SYMBOL(public_6f9e6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1c2b _public_6fb1c2b
#define public_6fb1c36 _public_6fb1c36
#define public_6fb1c41 _public_6fb1c41

PROC_DECLARE(0x6fb1c20, internal_6fb1c20, public_6fb1c20);
/* CHUNK of public_6f9efb0 */
extern "C" NAKED register_t __cdecl internal_6fb1c20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6f9fbd0
        public_6fb1c2b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp public_6f9e6a0
        public_6fb1c36 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_6f85550
        public_6fb1c41 : nop
        mov eax, offset public_6fc7298
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1c20)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1c2b, public_6fb1c2b)
        ASM_EXPORT_ENTRY(0x6fb1c36, public_6fb1c36)
        ASM_EXPORT_ENTRY_LAST(0x6fb1c41, public_6fb1c41)
    }
}

#undef public_6fb1c2b
#undef public_6fb1c36
#undef public_6fb1c41

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1c2b = __AsmFindLabelExport(&internal_6fb1c20, 0x6fb1c2b);
extern "C" void const* const public_6fb1c36 = __AsmFindLabelExport(&internal_6fb1c20, 0x6fb1c36);
extern "C" void const* const public_6fb1c41 = __AsmFindLabelExport(&internal_6fb1c20, 0x6fb1c41);
