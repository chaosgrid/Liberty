#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0b58 _public_6fb0b58
#define public_6fb0b63 _public_6fb0b63
#define public_6fb0b6e _public_6fb0b6e
#define public_6fb0b79 _public_6fb0b79
#define public_6fb0b84 _public_6fb0b84
#define public_6fb0b8c _public_6fb0b8c

PROC_DECLARE(0x6fb0b50, internal_6fb0b50, public_6fb0b50);
/* CHUNK of public_6f86420 */
extern "C" NAKED register_t __cdecl internal_6fb0b50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6ed2c20
        public_6fb0b58 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x3C
        jmp public_6f15350
        public_6fb0b63 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x58
        jmp public_6ecfa90
        public_6fb0b6e : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x68
        jmp public_6f28e10
        public_6fb0b79 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x6C
        jmp public_6eec8d0
        public_6fb0b84 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f15350
        public_6fb0b8c : nop
        mov eax, offset public_6fc5f30
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0b50)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0b58, public_6fb0b58)
        ASM_EXPORT_ENTRY(0x6fb0b63, public_6fb0b63)
        ASM_EXPORT_ENTRY(0x6fb0b6e, public_6fb0b6e)
        ASM_EXPORT_ENTRY(0x6fb0b79, public_6fb0b79)
        ASM_EXPORT_ENTRY(0x6fb0b84, public_6fb0b84)
        ASM_EXPORT_ENTRY_LAST(0x6fb0b8c, public_6fb0b8c)
    }
}

#undef public_6fb0b58
#undef public_6fb0b63
#undef public_6fb0b6e
#undef public_6fb0b79
#undef public_6fb0b84
#undef public_6fb0b8c

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0b58 = __AsmFindLabelExport(&internal_6fb0b50, 0x6fb0b58);
extern "C" void const* const public_6fb0b63 = __AsmFindLabelExport(&internal_6fb0b50, 0x6fb0b63);
extern "C" void const* const public_6fb0b6e = __AsmFindLabelExport(&internal_6fb0b50, 0x6fb0b6e);
extern "C" void const* const public_6fb0b79 = __AsmFindLabelExport(&internal_6fb0b50, 0x6fb0b79);
extern "C" void const* const public_6fb0b84 = __AsmFindLabelExport(&internal_6fb0b50, 0x6fb0b84);
extern "C" void const* const public_6fb0b8c = __AsmFindLabelExport(&internal_6fb0b50, 0x6fb0b8c);
