#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d46f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63951a8 _public_63951a8
#define public_63951b0 _public_63951b0
#define public_63951b8 _public_63951b8
#define public_63951c0 _public_63951c0
#define public_63951c8 _public_63951c8

PROC_DECLARE(0x63951a0, internal_63951a0, public_63951a0);
/* CHUNK of public_62d4750 */
extern "C" NAKED register_t __cdecl internal_63951a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x2C]
        jmp public_62881d0
        public_63951a8 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_62881d0
        public_63951b0 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_62881d0
        public_63951b8 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_62d46f0
        public_63951c0 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_62881d0
        public_63951c8 : nop
        mov eax, offset public_63aebf4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63951a0)
        ASM_EXPORT_ENTRY_FIRST(0x63951a8, public_63951a8)
        ASM_EXPORT_ENTRY(0x63951b0, public_63951b0)
        ASM_EXPORT_ENTRY(0x63951b8, public_63951b8)
        ASM_EXPORT_ENTRY(0x63951c0, public_63951c0)
        ASM_EXPORT_ENTRY_LAST(0x63951c8, public_63951c8)
    }
}

#undef public_63951a8
#undef public_63951b0
#undef public_63951b8
#undef public_63951c0
#undef public_63951c8

#pragma init_seg(compiler)
extern "C" void const* const public_63951a8 = __AsmFindLabelExport(&internal_63951a0, 0x63951a8);
extern "C" void const* const public_63951b0 = __AsmFindLabelExport(&internal_63951a0, 0x63951b0);
extern "C" void const* const public_63951b8 = __AsmFindLabelExport(&internal_63951a0, 0x63951b8);
extern "C" void const* const public_63951c0 = __AsmFindLabelExport(&internal_63951a0, 0x63951c0);
extern "C" void const* const public_63951c8 = __AsmFindLabelExport(&internal_63951a0, 0x63951c8);
