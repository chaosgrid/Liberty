#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394fb8 _public_6394fb8
#define public_6394fc3 _public_6394fc3

PROC_DECLARE(0x6394fb0, internal_6394fb0, public_6394fb0);
/* CHUNK of public_62cfe20 */
extern "C" NAKED register_t __cdecl internal_6394fb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394fb8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_62c3040
        public_6394fc3 : nop
        mov eax, offset public_63ae704
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394fb0)
        ASM_EXPORT_ENTRY_FIRST(0x6394fb8, public_6394fb8)
        ASM_EXPORT_ENTRY_LAST(0x6394fc3, public_6394fc3)
    }
}

#undef public_6394fb8
#undef public_6394fc3

#pragma init_seg(compiler)
extern "C" void const* const public_6394fb8 = __AsmFindLabelExport(&internal_6394fb0, 0x6394fb8);
extern "C" void const* const public_6394fc3 = __AsmFindLabelExport(&internal_6394fb0, 0x6394fc3);
