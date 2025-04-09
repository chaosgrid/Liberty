#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e2a0);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0f98 _public_5c0f98
#define public_5c0fa3 _public_5c0fa3
#define public_5c0fae _public_5c0fae
#define public_5c0fb9 _public_5c0fb9
#define public_5c0fc7 _public_5c0fc7
#define public_5c0fd2 _public_5c0fd2
#define public_5c0fdd _public_5c0fdd

PROC_DECLARE(0x5c0f90, internal_5c0f90, public_5c0f90);
/* CHUNK of public_5478f0 */
extern "C" NAKED register_t __cdecl internal_5c0f90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x64]
        jmp public_40e2a0
        public_5c0f98 : nop
        lea ecx, ss:[ebp-0x164]
        jmp public_502d90
        public_5c0fa3 : nop
        lea ecx, ss:[ebp-0xBC]
        jmp public_40e2a0
        public_5c0fae : nop
        lea ecx, ss:[ebp-0x164]
        jmp public_502d90
        public_5c0fb9 : nop
        mov eax, dword ptr ss : [ebp-0xC0]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c0fc7 : nop
        lea ecx, ss:[ebp-0xBC]
        jmp public_40e2a0
        public_5c0fd2 : nop
        lea ecx, ss:[ebp-0x164]
        jmp public_502d90
        public_5c0fdd : nop
        mov eax, offset public_5fb2c0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0f90)
        ASM_EXPORT_ENTRY_FIRST(0x5c0f98, public_5c0f98)
        ASM_EXPORT_ENTRY(0x5c0fa3, public_5c0fa3)
        ASM_EXPORT_ENTRY(0x5c0fae, public_5c0fae)
        ASM_EXPORT_ENTRY(0x5c0fb9, public_5c0fb9)
        ASM_EXPORT_ENTRY(0x5c0fc7, public_5c0fc7)
        ASM_EXPORT_ENTRY(0x5c0fd2, public_5c0fd2)
        ASM_EXPORT_ENTRY_LAST(0x5c0fdd, public_5c0fdd)
    }
}

#undef public_5c0f98
#undef public_5c0fa3
#undef public_5c0fae
#undef public_5c0fb9
#undef public_5c0fc7
#undef public_5c0fd2
#undef public_5c0fdd

#pragma init_seg(compiler)
extern "C" void const* const public_5c0f98 = __AsmFindLabelExport(&internal_5c0f90, 0x5c0f98);
extern "C" void const* const public_5c0fa3 = __AsmFindLabelExport(&internal_5c0f90, 0x5c0fa3);
extern "C" void const* const public_5c0fae = __AsmFindLabelExport(&internal_5c0f90, 0x5c0fae);
extern "C" void const* const public_5c0fb9 = __AsmFindLabelExport(&internal_5c0f90, 0x5c0fb9);
extern "C" void const* const public_5c0fc7 = __AsmFindLabelExport(&internal_5c0f90, 0x5c0fc7);
extern "C" void const* const public_5c0fd2 = __AsmFindLabelExport(&internal_5c0f90, 0x5c0fd2);
extern "C" void const* const public_5c0fdd = __AsmFindLabelExport(&internal_5c0f90, 0x5c0fdd);
