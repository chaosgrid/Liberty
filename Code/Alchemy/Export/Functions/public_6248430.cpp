#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b700);
CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_6217c00);
CLANG_FORWARD_PROC_SYMBOL(public_62184a0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624843b _public_624843b
#define public_6248443 _public_6248443
#define public_624844b _public_624844b
#define public_6248459 _public_6248459
#define public_6248461 _public_6248461
#define public_6248469 _public_6248469
#define public_6248471 _public_6248471

PROC_DECLARE(0x6248430, internal_6248430, public_6248430);
/* CHUNK of public_6218240 */
extern "C" NAKED register_t __cdecl internal_6248430()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624843b : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620ce80
        public_6248443 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620ce80
        public_624844b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0xB4
        jmp public_620b700
        public_6248459 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_62184a0
        public_6248461 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6217c00
        public_6248469 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620b710
        public_6248471 : nop
        mov eax, offset public_625131c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248430)
        ASM_EXPORT_ENTRY_FIRST(0x624843b, public_624843b)
        ASM_EXPORT_ENTRY(0x6248443, public_6248443)
        ASM_EXPORT_ENTRY(0x624844b, public_624844b)
        ASM_EXPORT_ENTRY(0x6248459, public_6248459)
        ASM_EXPORT_ENTRY(0x6248461, public_6248461)
        ASM_EXPORT_ENTRY(0x6248469, public_6248469)
        ASM_EXPORT_ENTRY_LAST(0x6248471, public_6248471)
    }
}

#undef public_624843b
#undef public_6248443
#undef public_624844b
#undef public_6248459
#undef public_6248461
#undef public_6248469
#undef public_6248471

#pragma init_seg(compiler)
extern "C" void const* const public_624843b = __AsmFindLabelExport(&internal_6248430, 0x624843b);
extern "C" void const* const public_6248443 = __AsmFindLabelExport(&internal_6248430, 0x6248443);
extern "C" void const* const public_624844b = __AsmFindLabelExport(&internal_6248430, 0x624844b);
extern "C" void const* const public_6248459 = __AsmFindLabelExport(&internal_6248430, 0x6248459);
extern "C" void const* const public_6248461 = __AsmFindLabelExport(&internal_6248430, 0x6248461);
extern "C" void const* const public_6248469 = __AsmFindLabelExport(&internal_6248430, 0x6248469);
extern "C" void const* const public_6248471 = __AsmFindLabelExport(&internal_6248430, 0x6248471);
