#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf5b1 _public_6faf5b1
#define public_6faf5bc _public_6faf5bc
#define public_6faf5c7 _public_6faf5c7
#define public_6faf5d2 _public_6faf5d2
#define public_6faf5e0 _public_6faf5e0
#define public_6faf5ee _public_6faf5ee
#define public_6faf5fc _public_6faf5fc

PROC_DECLARE(0x6faf5a0, internal_6faf5a0, public_6faf5a0);
/* CHUNK of public_6f55330 */
extern "C" NAKED register_t __cdecl internal_6faf5a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6faf5b1 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x48
        jmp public_6eec8d0
        public_6faf5bc : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x5C
        jmp public_6eec8d0
        public_6faf5c7 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x74
        jmp public_6eec8d0
        public_6faf5d2 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x84
        jmp public_6eec8d0
        public_6faf5e0 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x9C
        jmp public_6eb7ac0
        public_6faf5ee : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0xB0
        jmp public_6eec8d0
        public_6faf5fc : nop
        mov eax, offset public_6fc456c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf5a0)
        ASM_EXPORT_ENTRY_FIRST(0x6faf5b1, public_6faf5b1)
        ASM_EXPORT_ENTRY(0x6faf5bc, public_6faf5bc)
        ASM_EXPORT_ENTRY(0x6faf5c7, public_6faf5c7)
        ASM_EXPORT_ENTRY(0x6faf5d2, public_6faf5d2)
        ASM_EXPORT_ENTRY(0x6faf5e0, public_6faf5e0)
        ASM_EXPORT_ENTRY(0x6faf5ee, public_6faf5ee)
        ASM_EXPORT_ENTRY_LAST(0x6faf5fc, public_6faf5fc)
    }
}

#undef public_6faf5b1
#undef public_6faf5bc
#undef public_6faf5c7
#undef public_6faf5d2
#undef public_6faf5e0
#undef public_6faf5ee
#undef public_6faf5fc

#pragma init_seg(compiler)
extern "C" void const* const public_6faf5b1 = __AsmFindLabelExport(&internal_6faf5a0, 0x6faf5b1);
extern "C" void const* const public_6faf5bc = __AsmFindLabelExport(&internal_6faf5a0, 0x6faf5bc);
extern "C" void const* const public_6faf5c7 = __AsmFindLabelExport(&internal_6faf5a0, 0x6faf5c7);
extern "C" void const* const public_6faf5d2 = __AsmFindLabelExport(&internal_6faf5a0, 0x6faf5d2);
extern "C" void const* const public_6faf5e0 = __AsmFindLabelExport(&internal_6faf5a0, 0x6faf5e0);
extern "C" void const* const public_6faf5ee = __AsmFindLabelExport(&internal_6faf5a0, 0x6faf5ee);
extern "C" void const* const public_6faf5fc = __AsmFindLabelExport(&internal_6faf5a0, 0x6faf5fc);
