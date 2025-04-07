#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63938eb _public_63938eb
#define public_63938f6 _public_63938f6

PROC_DECLARE(0x63938e0, internal_63938e0, public_63938e0);
/* CHUNK of public_629b110 */
extern "C" NAKED register_t __cdecl internal_63938e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_62a68e0
        public_63938eb : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x10
        jmp public_62a68e0
        public_63938f6 : nop
        mov eax, offset public_63acb5c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63938e0)
        ASM_EXPORT_ENTRY_FIRST(0x63938eb, public_63938eb)
        ASM_EXPORT_ENTRY_LAST(0x63938f6, public_63938f6)
    }
}

#undef public_63938eb
#undef public_63938f6

#pragma init_seg(compiler)
extern "C" void const* const public_63938eb = __AsmFindLabelExport(&internal_63938e0, 0x63938eb);
extern "C" void const* const public_63938f6 = __AsmFindLabelExport(&internal_63938e0, 0x63938f6);
