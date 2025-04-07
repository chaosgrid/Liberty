#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fc10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1a68 _public_6fb1a68
#define public_6fb1a6f _public_6fb1a6f
#define public_6fb1a77 _public_6fb1a77
#define public_6fb1a82 _public_6fb1a82
#define public_6fb1a8d _public_6fb1a8d

PROC_DECLARE(0x6fb1a50, internal_6fb1a50, public_6fb1a50);
/* CHUNK of public_6f9d970 */
extern "C" NAKED register_t __cdecl internal_6fb1a50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6fb1a68
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 4
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_6fb1a6f
        public_6fb1a68 : nop
        mov dword ptr ss : [ebp-0x18], 0
        public_6fb1a6f : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6f9fc10
        public_6fb1a77 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp public_6eec8d0
        public_6fb1a82 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x1C
        jmp public_6f9d8a0
        public_6fb1a8d : nop
        mov eax, offset public_6fc70e8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1a50)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1a68, public_6fb1a68)
        ASM_EXPORT_ENTRY(0x6fb1a6f, public_6fb1a6f)
        ASM_EXPORT_ENTRY(0x6fb1a77, public_6fb1a77)
        ASM_EXPORT_ENTRY(0x6fb1a82, public_6fb1a82)
        ASM_EXPORT_ENTRY_LAST(0x6fb1a8d, public_6fb1a8d)
    }
}

#undef public_6fb1a68
#undef public_6fb1a6f
#undef public_6fb1a77
#undef public_6fb1a82
#undef public_6fb1a8d

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1a68 = __AsmFindLabelExport(&internal_6fb1a50, 0x6fb1a68);
extern "C" void const* const public_6fb1a6f = __AsmFindLabelExport(&internal_6fb1a50, 0x6fb1a6f);
extern "C" void const* const public_6fb1a77 = __AsmFindLabelExport(&internal_6fb1a50, 0x6fb1a77);
extern "C" void const* const public_6fb1a82 = __AsmFindLabelExport(&internal_6fb1a50, 0x6fb1a82);
extern "C" void const* const public_6fb1a8d = __AsmFindLabelExport(&internal_6fb1a50, 0x6fb1a8d);
