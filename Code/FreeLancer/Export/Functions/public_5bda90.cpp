#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_426de0);
CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_4ca940);
CLANG_FORWARD_PROC_SYMBOL(public_4ceb50);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bda98 _public_5bda98
#define public_5bdaa3 _public_5bdaa3
#define public_5bdaae _public_5bdaae
#define public_5bdabc _public_5bdabc
#define public_5bdaca _public_5bdaca
#define public_5bdad8 _public_5bdad8
#define public_5bdae6 _public_5bdae6
#define public_5bdaf4 _public_5bdaf4
#define public_5bdb02 _public_5bdb02
#define public_5bdb0d _public_5bdb0d

PROC_DECLARE(0x5bda90, internal_5bda90, public_5bda90);
/* CHUNK of public_4cd350 */
extern "C" NAKED register_t __cdecl internal_5bda90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x5C]
        jmp public_4b4fd0
        public_5bda98 : nop
        mov ecx, dword ptr ss : [ebp-0x58]
        add ecx, 0x28
        jmp public_5154f0
        public_5bdaa3 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        add ecx, 0x7C
        jmp public_4c8630
        public_5bdaae : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        add ecx, 0xB4
        jmp public_4ca940
        public_5bdabc : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        add ecx, 0x284
        jmp public_4ca940
        public_5bdaca : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        add ecx, 0x454
        jmp public_401e90
        public_5bdad8 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        add ecx, 0x464
        jmp public_401e90
        public_5bdae6 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        add ecx, 0x474
        jmp public_426de0
        public_5bdaf4 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        add ecx, 0x4B8
        jmp public_4ceb50
        public_5bdb02 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bdb0d : nop
        mov eax, offset public_5f7f84
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bda90)
        ASM_EXPORT_ENTRY_FIRST(0x5bda98, public_5bda98)
        ASM_EXPORT_ENTRY(0x5bdaa3, public_5bdaa3)
        ASM_EXPORT_ENTRY(0x5bdaae, public_5bdaae)
        ASM_EXPORT_ENTRY(0x5bdabc, public_5bdabc)
        ASM_EXPORT_ENTRY(0x5bdaca, public_5bdaca)
        ASM_EXPORT_ENTRY(0x5bdad8, public_5bdad8)
        ASM_EXPORT_ENTRY(0x5bdae6, public_5bdae6)
        ASM_EXPORT_ENTRY(0x5bdaf4, public_5bdaf4)
        ASM_EXPORT_ENTRY(0x5bdb02, public_5bdb02)
        ASM_EXPORT_ENTRY_LAST(0x5bdb0d, public_5bdb0d)
    }
}

#undef public_5bda98
#undef public_5bdaa3
#undef public_5bdaae
#undef public_5bdabc
#undef public_5bdaca
#undef public_5bdad8
#undef public_5bdae6
#undef public_5bdaf4
#undef public_5bdb02
#undef public_5bdb0d

#pragma init_seg(compiler)
extern "C" void const* const public_5bda98 = __AsmFindLabelExport(&internal_5bda90, 0x5bda98);
extern "C" void const* const public_5bdaa3 = __AsmFindLabelExport(&internal_5bda90, 0x5bdaa3);
extern "C" void const* const public_5bdaae = __AsmFindLabelExport(&internal_5bda90, 0x5bdaae);
extern "C" void const* const public_5bdabc = __AsmFindLabelExport(&internal_5bda90, 0x5bdabc);
extern "C" void const* const public_5bdaca = __AsmFindLabelExport(&internal_5bda90, 0x5bdaca);
extern "C" void const* const public_5bdad8 = __AsmFindLabelExport(&internal_5bda90, 0x5bdad8);
extern "C" void const* const public_5bdae6 = __AsmFindLabelExport(&internal_5bda90, 0x5bdae6);
extern "C" void const* const public_5bdaf4 = __AsmFindLabelExport(&internal_5bda90, 0x5bdaf4);
extern "C" void const* const public_5bdb02 = __AsmFindLabelExport(&internal_5bda90, 0x5bdb02);
extern "C" void const* const public_5bdb0d = __AsmFindLabelExport(&internal_5bda90, 0x5bdb0d);
