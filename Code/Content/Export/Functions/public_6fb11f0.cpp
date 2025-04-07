#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f867a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f86ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb11f8 _public_6fb11f8
#define public_6fb1203 _public_6fb1203
#define public_6fb120e _public_6fb120e
#define public_6fb1216 _public_6fb1216

PROC_DECLARE(0x6fb11f0, internal_6fb11f0, public_6fb11f0);
/* CHUNK of public_6f8beb0 */
extern "C" NAKED register_t __cdecl internal_6fb11f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp public_6f867a0
        public_6fb11f8 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb1203 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb120e : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6f86ac0
        public_6fb1216 : nop
        mov eax, offset public_6fc67b4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb11f0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb11f8, public_6fb11f8)
        ASM_EXPORT_ENTRY(0x6fb1203, public_6fb1203)
        ASM_EXPORT_ENTRY(0x6fb120e, public_6fb120e)
        ASM_EXPORT_ENTRY_LAST(0x6fb1216, public_6fb1216)
    }
}

#undef public_6fb11f8
#undef public_6fb1203
#undef public_6fb120e
#undef public_6fb1216

#pragma init_seg(compiler)
extern "C" void const* const public_6fb11f8 = __AsmFindLabelExport(&internal_6fb11f0, 0x6fb11f8);
extern "C" void const* const public_6fb1203 = __AsmFindLabelExport(&internal_6fb11f0, 0x6fb1203);
extern "C" void const* const public_6fb120e = __AsmFindLabelExport(&internal_6fb11f0, 0x6fb120e);
extern "C" void const* const public_6fb1216 = __AsmFindLabelExport(&internal_6fb11f0, 0x6fb1216);
