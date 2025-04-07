#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207470);
CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_6212ec0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248cb8 _public_6248cb8
#define public_6248cc3 _public_6248cc3
#define public_6248cce _public_6248cce
#define public_6248cd6 _public_6248cd6

PROC_DECLARE(0x6248cb0, internal_6248cb0, public_6248cb0);
/* CHUNK of public_62231f0 */
extern "C" NAKED register_t __cdecl internal_6248cb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6212ec0
        public_6248cb8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp public_62084b0
        public_6248cc3 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248cce : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_6207470
        public_6248cd6 : nop
        mov eax, offset public_6251bc8
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248cb0)
        ASM_EXPORT_ENTRY_FIRST(0x6248cb8, public_6248cb8)
        ASM_EXPORT_ENTRY(0x6248cc3, public_6248cc3)
        ASM_EXPORT_ENTRY(0x6248cce, public_6248cce)
        ASM_EXPORT_ENTRY_LAST(0x6248cd6, public_6248cd6)
    }
}

#undef public_6248cb8
#undef public_6248cc3
#undef public_6248cce
#undef public_6248cd6

#pragma init_seg(compiler)
extern "C" void const* const public_6248cb8 = __AsmFindLabelExport(&internal_6248cb0, 0x6248cb8);
extern "C" void const* const public_6248cc3 = __AsmFindLabelExport(&internal_6248cb0, 0x6248cc3);
extern "C" void const* const public_6248cce = __AsmFindLabelExport(&internal_6248cb0, 0x6248cce);
extern "C" void const* const public_6248cd6 = __AsmFindLabelExport(&internal_6248cb0, 0x6248cd6);
