#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208530);
CLANG_FORWARD_PROC_SYMBOL(public_6208550);
CLANG_FORWARD_PROC_SYMBOL(public_620b210);
CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_620c070);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249d58 _public_6249d58
#define public_6249d63 _public_6249d63
#define public_6249d6e _public_6249d6e
#define public_6249d79 _public_6249d79
#define public_6249d84 _public_6249d84
#define public_6249d8c _public_6249d8c
#define public_6249d97 _public_6249d97
#define public_6249da2 _public_6249da2

PROC_DECLARE(0x6249d50, internal_6249d50, public_6249d50);
/* CHUNK of public_6234d60 */
extern "C" NAKED register_t __cdecl internal_6249d50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_620c070
        public_6249d58 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x6C
        jmp public_6208530
        public_6249d63 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x70
        jmp public_6208550
        public_6249d6e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x74
        jmp public_6208530
        public_6249d79 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x78
        jmp public_6208530
        public_6249d84 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_620b260
        public_6249d8c : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x4C
        jmp public_620b210
        public_6249d97 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 4
        jmp public_620b300
        public_6249da2 : nop
        mov eax, offset public_6252dec
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249d50)
        ASM_EXPORT_ENTRY_FIRST(0x6249d58, public_6249d58)
        ASM_EXPORT_ENTRY(0x6249d63, public_6249d63)
        ASM_EXPORT_ENTRY(0x6249d6e, public_6249d6e)
        ASM_EXPORT_ENTRY(0x6249d79, public_6249d79)
        ASM_EXPORT_ENTRY(0x6249d84, public_6249d84)
        ASM_EXPORT_ENTRY(0x6249d8c, public_6249d8c)
        ASM_EXPORT_ENTRY(0x6249d97, public_6249d97)
        ASM_EXPORT_ENTRY_LAST(0x6249da2, public_6249da2)
    }
}

#undef public_6249d58
#undef public_6249d63
#undef public_6249d6e
#undef public_6249d79
#undef public_6249d84
#undef public_6249d8c
#undef public_6249d97
#undef public_6249da2

#pragma init_seg(compiler)
extern "C" void const* const public_6249d58 = __AsmFindLabelExport(&internal_6249d50, 0x6249d58);
extern "C" void const* const public_6249d63 = __AsmFindLabelExport(&internal_6249d50, 0x6249d63);
extern "C" void const* const public_6249d6e = __AsmFindLabelExport(&internal_6249d50, 0x6249d6e);
extern "C" void const* const public_6249d79 = __AsmFindLabelExport(&internal_6249d50, 0x6249d79);
extern "C" void const* const public_6249d84 = __AsmFindLabelExport(&internal_6249d50, 0x6249d84);
extern "C" void const* const public_6249d8c = __AsmFindLabelExport(&internal_6249d50, 0x6249d8c);
extern "C" void const* const public_6249d97 = __AsmFindLabelExport(&internal_6249d50, 0x6249d97);
extern "C" void const* const public_6249da2 = __AsmFindLabelExport(&internal_6249d50, 0x6249da2);
