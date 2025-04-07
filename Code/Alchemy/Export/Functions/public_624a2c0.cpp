#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b700);
CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_6239ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6239ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a2c8 _public_624a2c8
#define public_624a2d6 _public_624a2d6
#define public_624a2de _public_624a2de
#define public_624a2e6 _public_624a2e6
#define public_624a2ee _public_624a2ee

PROC_DECLARE(0x624a2c0, internal_624a2c0, public_624a2c0);
/* CHUNK of public_623a700 */
extern "C" NAKED register_t __cdecl internal_624a2c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620ce80
        public_624a2c8 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0xB4
        jmp public_620b700
        public_624a2d6 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6239ee0
        public_624a2de : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6239ed0
        public_624a2e6 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620b710
        public_624a2ee : nop
        mov eax, offset public_6253364
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a2c0)
        ASM_EXPORT_ENTRY_FIRST(0x624a2c8, public_624a2c8)
        ASM_EXPORT_ENTRY(0x624a2d6, public_624a2d6)
        ASM_EXPORT_ENTRY(0x624a2de, public_624a2de)
        ASM_EXPORT_ENTRY(0x624a2e6, public_624a2e6)
        ASM_EXPORT_ENTRY_LAST(0x624a2ee, public_624a2ee)
    }
}

#undef public_624a2c8
#undef public_624a2d6
#undef public_624a2de
#undef public_624a2e6
#undef public_624a2ee

#pragma init_seg(compiler)
extern "C" void const* const public_624a2c8 = __AsmFindLabelExport(&internal_624a2c0, 0x624a2c8);
extern "C" void const* const public_624a2d6 = __AsmFindLabelExport(&internal_624a2c0, 0x624a2d6);
extern "C" void const* const public_624a2de = __AsmFindLabelExport(&internal_624a2c0, 0x624a2de);
extern "C" void const* const public_624a2e6 = __AsmFindLabelExport(&internal_624a2c0, 0x624a2e6);
extern "C" void const* const public_624a2ee = __AsmFindLabelExport(&internal_624a2c0, 0x624a2ee);
