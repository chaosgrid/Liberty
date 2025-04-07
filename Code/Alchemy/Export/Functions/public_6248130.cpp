#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_6212ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248138 _public_6248138
#define public_6248143 _public_6248143
#define public_624814e _public_624814e

PROC_DECLARE(0x6248130, internal_6248130, public_6248130);
/* CHUNK of public_6215120 */
extern "C" NAKED register_t __cdecl internal_6248130()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6212ec0
        public_6248138 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp public_62084b0
        public_6248143 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_620b300
        public_624814e : nop
        mov eax, offset public_6250fcc
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248130)
        ASM_EXPORT_ENTRY_FIRST(0x6248138, public_6248138)
        ASM_EXPORT_ENTRY(0x6248143, public_6248143)
        ASM_EXPORT_ENTRY_LAST(0x624814e, public_624814e)
    }
}

#undef public_6248138
#undef public_6248143
#undef public_624814e

#pragma init_seg(compiler)
extern "C" void const* const public_6248138 = __AsmFindLabelExport(&internal_6248130, 0x6248138);
extern "C" void const* const public_6248143 = __AsmFindLabelExport(&internal_6248130, 0x6248143);
extern "C" void const* const public_624814e = __AsmFindLabelExport(&internal_6248130, 0x624814e);
