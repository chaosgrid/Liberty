#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_63221f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396fde _public_6396fde
#define public_6396fec _public_6396fec
#define public_6396ffa _public_6396ffa
#define public_6397005 _public_6397005
#define public_6397013 _public_6397013

PROC_DECLARE(0x6396fd0, internal_6396fd0, public_6396fd0);
/* CHUNK of public_6324d10 */
extern "C" NAKED register_t __cdecl internal_6396fd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0xA0]
        add ecx, 0x10
        jmp public_630e210
        public_6396fde : nop
        mov ecx, dword ptr ss : [ebp-0xA0]
        add ecx, 0x28
        jmp public_630e210
        public_6396fec : nop
        mov ecx, dword ptr ss : [ebp-0xA0]
        add ecx, 0x78
        jmp public_6269110
        public_6396ffa : nop
        lea ecx, ss:[ebp-0x9C]
        jmp public_63221f0
        public_6397005 : nop
        mov ecx, dword ptr ss : [ebp-0xA0]
        add ecx, 0x10
        jmp public_630e210
        public_6397013 : nop
        mov eax, offset public_63b102c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396fd0)
        ASM_EXPORT_ENTRY_FIRST(0x6396fde, public_6396fde)
        ASM_EXPORT_ENTRY(0x6396fec, public_6396fec)
        ASM_EXPORT_ENTRY(0x6396ffa, public_6396ffa)
        ASM_EXPORT_ENTRY(0x6397005, public_6397005)
        ASM_EXPORT_ENTRY_LAST(0x6397013, public_6397013)
    }
}

#undef public_6396fde
#undef public_6396fec
#undef public_6396ffa
#undef public_6397005
#undef public_6397013

#pragma init_seg(compiler)
extern "C" void const* const public_6396fde = __AsmFindLabelExport(&internal_6396fd0, 0x6396fde);
extern "C" void const* const public_6396fec = __AsmFindLabelExport(&internal_6396fd0, 0x6396fec);
extern "C" void const* const public_6396ffa = __AsmFindLabelExport(&internal_6396fd0, 0x6396ffa);
extern "C" void const* const public_6397005 = __AsmFindLabelExport(&internal_6396fd0, 0x6397005);
extern "C" void const* const public_6397013 = __AsmFindLabelExport(&internal_6396fd0, 0x6397013);
