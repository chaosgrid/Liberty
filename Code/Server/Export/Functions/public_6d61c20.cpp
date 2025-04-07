#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d13660);
CLANG_FORWARD_PROC_SYMBOL(public_6d13720);
CLANG_FORWARD_PROC_SYMBOL(public_6d137e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d138a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61c2b _public_6d61c2b
#define public_6d61c36 _public_6d61c36
#define public_6d61c41 _public_6d61c41
#define public_6d61c4c _public_6d61c4c
#define public_6d61c57 _public_6d61c57
#define public_6d61c62 _public_6d61c62

PROC_DECLARE(0x6d61c20, internal_6d61c20, public_6d61c20);
/* CHUNK of public_6d13550 */
extern "C" NAKED register_t __cdecl internal_6d61c20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6d13660
        public_6d61c2b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C
        jmp public_6d13720
        public_6d61c36 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_6d13720
        public_6d61c41 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp public_6d137e0
        public_6d61c4c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x58
        jmp public_6d138a0
        public_6d61c57 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x6C
        jmp public_6d138a0
        public_6d61c62 : nop
        mov eax, offset public_6d7295c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61c20)
        ASM_EXPORT_ENTRY_FIRST(0x6d61c2b, public_6d61c2b)
        ASM_EXPORT_ENTRY(0x6d61c36, public_6d61c36)
        ASM_EXPORT_ENTRY(0x6d61c41, public_6d61c41)
        ASM_EXPORT_ENTRY(0x6d61c4c, public_6d61c4c)
        ASM_EXPORT_ENTRY(0x6d61c57, public_6d61c57)
        ASM_EXPORT_ENTRY_LAST(0x6d61c62, public_6d61c62)
    }
}

#undef public_6d61c2b
#undef public_6d61c36
#undef public_6d61c41
#undef public_6d61c4c
#undef public_6d61c57
#undef public_6d61c62

#pragma init_seg(compiler)
extern "C" void const* const public_6d61c2b = __AsmFindLabelExport(&internal_6d61c20, 0x6d61c2b);
extern "C" void const* const public_6d61c36 = __AsmFindLabelExport(&internal_6d61c20, 0x6d61c36);
extern "C" void const* const public_6d61c41 = __AsmFindLabelExport(&internal_6d61c20, 0x6d61c41);
extern "C" void const* const public_6d61c4c = __AsmFindLabelExport(&internal_6d61c20, 0x6d61c4c);
extern "C" void const* const public_6d61c57 = __AsmFindLabelExport(&internal_6d61c20, 0x6d61c57);
extern "C" void const* const public_6d61c62 = __AsmFindLabelExport(&internal_6d61c20, 0x6d61c62);
