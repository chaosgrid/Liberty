#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d20a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d220d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d241f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62c38 _public_6d62c38
#define public_6d62c40 _public_6d62c40
#define public_6d62c4b _public_6d62c4b
#define public_6d62c53 _public_6d62c53
#define public_6d62c5b _public_6d62c5b

PROC_DECLARE(0x6d62c30, internal_6d62c30, public_6d62c30);
/* CHUNK of public_6d315e0 */
extern "C" NAKED register_t __cdecl internal_6d62c30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6d220d0
        public_6d62c38 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6d241f0
        public_6d62c40 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x24
        jmp public_6d209f0
        public_6d62c4b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6d20a40
        public_6d62c53 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6d20a40
        public_6d62c5b : nop
        mov eax, offset public_6d73fa8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62c30)
        ASM_EXPORT_ENTRY_FIRST(0x6d62c38, public_6d62c38)
        ASM_EXPORT_ENTRY(0x6d62c40, public_6d62c40)
        ASM_EXPORT_ENTRY(0x6d62c4b, public_6d62c4b)
        ASM_EXPORT_ENTRY(0x6d62c53, public_6d62c53)
        ASM_EXPORT_ENTRY_LAST(0x6d62c5b, public_6d62c5b)
    }
}

#undef public_6d62c38
#undef public_6d62c40
#undef public_6d62c4b
#undef public_6d62c53
#undef public_6d62c5b

#pragma init_seg(compiler)
extern "C" void const* const public_6d62c38 = __AsmFindLabelExport(&internal_6d62c30, 0x6d62c38);
extern "C" void const* const public_6d62c40 = __AsmFindLabelExport(&internal_6d62c30, 0x6d62c40);
extern "C" void const* const public_6d62c4b = __AsmFindLabelExport(&internal_6d62c30, 0x6d62c4b);
extern "C" void const* const public_6d62c53 = __AsmFindLabelExport(&internal_6d62c30, 0x6d62c53);
extern "C" void const* const public_6d62c5b = __AsmFindLabelExport(&internal_6d62c30, 0x6d62c5b);
