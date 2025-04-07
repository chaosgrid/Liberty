#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262400);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63923d8 _public_63923d8
#define public_63923e3 _public_63923e3

PROC_DECLARE(0x63923d0, internal_63923d0, public_63923d0);
/* CHUNK of public_6262150 */
extern "C" NAKED register_t __cdecl internal_63923d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62a68e0
        public_63923d8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp public_6262400
        public_63923e3 : nop
        mov eax, offset public_63aaec0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63923d0)
        ASM_EXPORT_ENTRY_FIRST(0x63923d8, public_63923d8)
        ASM_EXPORT_ENTRY_LAST(0x63923e3, public_63923e3)
    }
}

#undef public_63923d8
#undef public_63923e3

#pragma init_seg(compiler)
extern "C" void const* const public_63923d8 = __AsmFindLabelExport(&internal_63923d0, 0x63923d8);
extern "C" void const* const public_63923e3 = __AsmFindLabelExport(&internal_63923d0, 0x63923e3);
