#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084d0);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a6fb _public_624a6fb
#define public_624a706 _public_624a706
#define public_624a711 _public_624a711
#define public_624a71c _public_624a71c

PROC_DECLARE(0x624a6f0, internal_624a6f0, public_624a6f0);
/* CHUNK of public_623f7b0 */
extern "C" NAKED register_t __cdecl internal_624a6f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_620b300
        public_624a6fb : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x24
        jmp public_62084d0
        public_624a706 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_620b300
        public_624a711 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a71c : nop
        mov eax, offset public_625378c
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a6f0)
        ASM_EXPORT_ENTRY_FIRST(0x624a6fb, public_624a6fb)
        ASM_EXPORT_ENTRY(0x624a706, public_624a706)
        ASM_EXPORT_ENTRY(0x624a711, public_624a711)
        ASM_EXPORT_ENTRY_LAST(0x624a71c, public_624a71c)
    }
}

#undef public_624a6fb
#undef public_624a706
#undef public_624a711
#undef public_624a71c

#pragma init_seg(compiler)
extern "C" void const* const public_624a6fb = __AsmFindLabelExport(&internal_624a6f0, 0x624a6fb);
extern "C" void const* const public_624a706 = __AsmFindLabelExport(&internal_624a6f0, 0x624a706);
extern "C" void const* const public_624a711 = __AsmFindLabelExport(&internal_624a6f0, 0x624a711);
extern "C" void const* const public_624a71c = __AsmFindLabelExport(&internal_624a6f0, 0x624a71c);
