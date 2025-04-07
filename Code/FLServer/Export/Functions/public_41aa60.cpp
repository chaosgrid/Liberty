#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41aa68 _public_41aa68
#define public_41aa73 _public_41aa73
#define public_41aa81 _public_41aa81

PROC_DECLARE(0x41aa60, internal_41aa60, public_41aa60);
/* CHUNK of public_415ff0 */
extern "C" NAKED register_t __cdecl internal_41aa60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_41aa68 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_418c24
        public_41aa73 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA4
        jmp public_418c24
        public_41aa81 : nop
        mov eax, offset public_41fbb4
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41aa60)
        ASM_EXPORT_ENTRY_FIRST(0x41aa68, public_41aa68)
        ASM_EXPORT_ENTRY(0x41aa73, public_41aa73)
        ASM_EXPORT_ENTRY_LAST(0x41aa81, public_41aa81)
    }
}

#undef public_41aa68
#undef public_41aa73
#undef public_41aa81

#pragma init_seg(compiler)
extern "C" void const* const public_41aa68 = __AsmFindLabelExport(&internal_41aa60, 0x41aa68);
extern "C" void const* const public_41aa73 = __AsmFindLabelExport(&internal_41aa60, 0x41aa73);
extern "C" void const* const public_41aa81 = __AsmFindLabelExport(&internal_41aa60, 0x41aa81);
