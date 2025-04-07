#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207470);
CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_6212ec0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248ceb _public_6248ceb
#define public_6248cf3 _public_6248cf3
#define public_6248cfe _public_6248cfe
#define public_6248d09 _public_6248d09
#define public_6248d11 _public_6248d11

PROC_DECLARE(0x6248ce0, internal_6248ce0, public_6248ce0);
/* CHUNK of public_6223340 */
extern "C" NAKED register_t __cdecl internal_6248ce0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248ceb : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6212ec0
        public_6248cf3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_62084b0
        public_6248cfe : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248d09 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6207470
        public_6248d11 : nop
        mov eax, offset public_6251c0c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248ce0)
        ASM_EXPORT_ENTRY_FIRST(0x6248ceb, public_6248ceb)
        ASM_EXPORT_ENTRY(0x6248cf3, public_6248cf3)
        ASM_EXPORT_ENTRY(0x6248cfe, public_6248cfe)
        ASM_EXPORT_ENTRY(0x6248d09, public_6248d09)
        ASM_EXPORT_ENTRY_LAST(0x6248d11, public_6248d11)
    }
}

#undef public_6248ceb
#undef public_6248cf3
#undef public_6248cfe
#undef public_6248d09
#undef public_6248d11

#pragma init_seg(compiler)
extern "C" void const* const public_6248ceb = __AsmFindLabelExport(&internal_6248ce0, 0x6248ceb);
extern "C" void const* const public_6248cf3 = __AsmFindLabelExport(&internal_6248ce0, 0x6248cf3);
extern "C" void const* const public_6248cfe = __AsmFindLabelExport(&internal_6248ce0, 0x6248cfe);
extern "C" void const* const public_6248d09 = __AsmFindLabelExport(&internal_6248ce0, 0x6248d09);
extern "C" void const* const public_6248d11 = __AsmFindLabelExport(&internal_6248ce0, 0x6248d11);
