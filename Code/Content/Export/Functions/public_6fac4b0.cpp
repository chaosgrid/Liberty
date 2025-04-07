#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac4c1 _public_6fac4c1
#define public_6fac4c9 _public_6fac4c9
#define public_6fac4d4 _public_6fac4d4
#define public_6fac4dc _public_6fac4dc
#define public_6fac4ea _public_6fac4ea
#define public_6fac4f8 _public_6fac4f8

PROC_DECLARE(0x6fac4b0, internal_6fac4b0, public_6fac4b0);
/* CHUNK of public_6ef7bd0 */
extern "C" NAKED register_t __cdecl internal_6fac4b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fac4c1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f28e10
        public_6fac4c9 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x50
        jmp public_6eec8d0
        public_6fac4d4 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6ef4ab0
        public_6fac4dc : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x80
        jmp public_6eec8d0
        public_6fac4ea : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xFC
        jmp public_6f28e10
        public_6fac4f8 : nop
        mov eax, offset public_6fc115c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac4b0)
        ASM_EXPORT_ENTRY_FIRST(0x6fac4c1, public_6fac4c1)
        ASM_EXPORT_ENTRY(0x6fac4c9, public_6fac4c9)
        ASM_EXPORT_ENTRY(0x6fac4d4, public_6fac4d4)
        ASM_EXPORT_ENTRY(0x6fac4dc, public_6fac4dc)
        ASM_EXPORT_ENTRY(0x6fac4ea, public_6fac4ea)
        ASM_EXPORT_ENTRY_LAST(0x6fac4f8, public_6fac4f8)
    }
}

#undef public_6fac4c1
#undef public_6fac4c9
#undef public_6fac4d4
#undef public_6fac4dc
#undef public_6fac4ea
#undef public_6fac4f8

#pragma init_seg(compiler)
extern "C" void const* const public_6fac4c1 = __AsmFindLabelExport(&internal_6fac4b0, 0x6fac4c1);
extern "C" void const* const public_6fac4c9 = __AsmFindLabelExport(&internal_6fac4b0, 0x6fac4c9);
extern "C" void const* const public_6fac4d4 = __AsmFindLabelExport(&internal_6fac4b0, 0x6fac4d4);
extern "C" void const* const public_6fac4dc = __AsmFindLabelExport(&internal_6fac4b0, 0x6fac4dc);
extern "C" void const* const public_6fac4ea = __AsmFindLabelExport(&internal_6fac4b0, 0x6fac4ea);
extern "C" void const* const public_6fac4f8 = __AsmFindLabelExport(&internal_6fac4b0, 0x6fac4f8);
