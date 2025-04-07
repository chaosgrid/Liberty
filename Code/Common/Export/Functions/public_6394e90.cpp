#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394e98 _public_6394e98
#define public_6394ea3 _public_6394ea3
#define public_6394eb1 _public_6394eb1
#define public_6394eb9 _public_6394eb9

PROC_DECLARE(0x6394e90, internal_6394e90, public_6394e90);
/* CHUNK of public_62cd640 */
extern "C" NAKED register_t __cdecl internal_6394e90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394e98 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_62c3040
        public_6394ea3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA4
        jmp public_62c3040
        public_6394eb1 : nop
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_62881d0
        public_6394eb9 : nop
        mov eax, offset public_63ae590
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394e90)
        ASM_EXPORT_ENTRY_FIRST(0x6394e98, public_6394e98)
        ASM_EXPORT_ENTRY(0x6394ea3, public_6394ea3)
        ASM_EXPORT_ENTRY(0x6394eb1, public_6394eb1)
        ASM_EXPORT_ENTRY_LAST(0x6394eb9, public_6394eb9)
    }
}

#undef public_6394e98
#undef public_6394ea3
#undef public_6394eb1
#undef public_6394eb9

#pragma init_seg(compiler)
extern "C" void const* const public_6394e98 = __AsmFindLabelExport(&internal_6394e90, 0x6394e98);
extern "C" void const* const public_6394ea3 = __AsmFindLabelExport(&internal_6394e90, 0x6394ea3);
extern "C" void const* const public_6394eb1 = __AsmFindLabelExport(&internal_6394e90, 0x6394eb1);
extern "C" void const* const public_6394eb9 = __AsmFindLabelExport(&internal_6394e90, 0x6394eb9);
