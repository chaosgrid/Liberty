#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394ed8 _public_6394ed8
#define public_6394ee3 _public_6394ee3
#define public_6394ef1 _public_6394ef1

PROC_DECLARE(0x6394ed0, internal_6394ed0, public_6394ed0);
/* CHUNK of public_62cd700 */
extern "C" NAKED register_t __cdecl internal_6394ed0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394ed8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_62c3040
        public_6394ee3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA4
        jmp public_62c3040
        public_6394ef1 : nop
        mov eax, offset public_63ae5c4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394ed0)
        ASM_EXPORT_ENTRY_FIRST(0x6394ed8, public_6394ed8)
        ASM_EXPORT_ENTRY(0x6394ee3, public_6394ee3)
        ASM_EXPORT_ENTRY_LAST(0x6394ef1, public_6394ef1)
    }
}

#undef public_6394ed8
#undef public_6394ee3
#undef public_6394ef1

#pragma init_seg(compiler)
extern "C" void const* const public_6394ed8 = __AsmFindLabelExport(&internal_6394ed0, 0x6394ed8);
extern "C" void const* const public_6394ee3 = __AsmFindLabelExport(&internal_6394ed0, 0x6394ee3);
extern "C" void const* const public_6394ef1 = __AsmFindLabelExport(&internal_6394ed0, 0x6394ef1);
