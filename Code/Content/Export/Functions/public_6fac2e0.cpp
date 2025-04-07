#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac2e8 _public_6fac2e8
#define public_6fac2f6 _public_6fac2f6
#define public_6fac304 _public_6fac304
#define public_6fac30c _public_6fac30c
#define public_6fac317 _public_6fac317
#define public_6fac31f _public_6fac31f

PROC_DECLARE(0x6fac2e0, internal_6fac2e0, public_6fac2e0);
/* CHUNK of public_6ef4bb0 */
extern "C" NAKED register_t __cdecl internal_6fac2e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6ef4ab0
        public_6fac2e8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x80
        jmp public_6eec8d0
        public_6fac2f6 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xFC
        jmp public_6f28e10
        public_6fac304 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f28e10
        public_6fac30c : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x50
        jmp public_6eec8d0
        public_6fac317 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f15350
        public_6fac31f : nop
        mov eax, offset public_6fc0f80
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac2e0)
        ASM_EXPORT_ENTRY_FIRST(0x6fac2e8, public_6fac2e8)
        ASM_EXPORT_ENTRY(0x6fac2f6, public_6fac2f6)
        ASM_EXPORT_ENTRY(0x6fac304, public_6fac304)
        ASM_EXPORT_ENTRY(0x6fac30c, public_6fac30c)
        ASM_EXPORT_ENTRY(0x6fac317, public_6fac317)
        ASM_EXPORT_ENTRY_LAST(0x6fac31f, public_6fac31f)
    }
}

#undef public_6fac2e8
#undef public_6fac2f6
#undef public_6fac304
#undef public_6fac30c
#undef public_6fac317
#undef public_6fac31f

#pragma init_seg(compiler)
extern "C" void const* const public_6fac2e8 = __AsmFindLabelExport(&internal_6fac2e0, 0x6fac2e8);
extern "C" void const* const public_6fac2f6 = __AsmFindLabelExport(&internal_6fac2e0, 0x6fac2f6);
extern "C" void const* const public_6fac304 = __AsmFindLabelExport(&internal_6fac2e0, 0x6fac304);
extern "C" void const* const public_6fac30c = __AsmFindLabelExport(&internal_6fac2e0, 0x6fac30c);
extern "C" void const* const public_6fac317 = __AsmFindLabelExport(&internal_6fac2e0, 0x6fac317);
extern "C" void const* const public_6fac31f = __AsmFindLabelExport(&internal_6fac2e0, 0x6fac31f);
