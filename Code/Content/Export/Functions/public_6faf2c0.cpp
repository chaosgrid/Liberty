#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf2cb _public_6faf2cb
#define public_6faf2d6 _public_6faf2d6
#define public_6faf2e1 _public_6faf2e1
#define public_6faf2ef _public_6faf2ef

PROC_DECLARE(0x6faf2c0, internal_6faf2c0, public_6faf2c0);
/* CHUNK of public_6f501c0 */
extern "C" NAKED register_t __cdecl internal_6faf2c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x48
        jmp public_6eec8d0
        public_6faf2cb : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x5C
        jmp public_6eec8d0
        public_6faf2d6 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x74
        jmp public_6eec8d0
        public_6faf2e1 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x84
        jmp public_6eec8d0
        public_6faf2ef : nop
        mov eax, offset public_6fc4300
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf2c0)
        ASM_EXPORT_ENTRY_FIRST(0x6faf2cb, public_6faf2cb)
        ASM_EXPORT_ENTRY(0x6faf2d6, public_6faf2d6)
        ASM_EXPORT_ENTRY(0x6faf2e1, public_6faf2e1)
        ASM_EXPORT_ENTRY_LAST(0x6faf2ef, public_6faf2ef)
    }
}

#undef public_6faf2cb
#undef public_6faf2d6
#undef public_6faf2e1
#undef public_6faf2ef

#pragma init_seg(compiler)
extern "C" void const* const public_6faf2cb = __AsmFindLabelExport(&internal_6faf2c0, 0x6faf2cb);
extern "C" void const* const public_6faf2d6 = __AsmFindLabelExport(&internal_6faf2c0, 0x6faf2d6);
extern "C" void const* const public_6faf2e1 = __AsmFindLabelExport(&internal_6faf2c0, 0x6faf2e1);
extern "C" void const* const public_6faf2ef = __AsmFindLabelExport(&internal_6faf2c0, 0x6faf2ef);
