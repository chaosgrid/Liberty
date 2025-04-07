#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208530);
CLANG_FORWARD_PROC_SYMBOL(public_6208550);
CLANG_FORWARD_PROC_SYMBOL(public_620b210);
CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_620c070);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247e68 _public_6247e68
#define public_6247e73 _public_6247e73
#define public_6247e7e _public_6247e7e
#define public_6247e89 _public_6247e89
#define public_6247e94 _public_6247e94
#define public_6247e9c _public_6247e9c
#define public_6247ea7 _public_6247ea7
#define public_6247eb2 _public_6247eb2

PROC_DECLARE(0x6247e60, internal_6247e60, public_6247e60);
/* CHUNK of public_62116f0 */
extern "C" NAKED register_t __cdecl internal_6247e60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_620c070
        public_6247e68 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x6C
        jmp public_6208530
        public_6247e73 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x70
        jmp public_6208550
        public_6247e7e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x74
        jmp public_6208530
        public_6247e89 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x78
        jmp public_6208530
        public_6247e94 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_620b260
        public_6247e9c : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x4C
        jmp public_620b210
        public_6247ea7 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 4
        jmp public_620b300
        public_6247eb2 : nop
        mov eax, offset public_6250cfc
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247e60)
        ASM_EXPORT_ENTRY_FIRST(0x6247e68, public_6247e68)
        ASM_EXPORT_ENTRY(0x6247e73, public_6247e73)
        ASM_EXPORT_ENTRY(0x6247e7e, public_6247e7e)
        ASM_EXPORT_ENTRY(0x6247e89, public_6247e89)
        ASM_EXPORT_ENTRY(0x6247e94, public_6247e94)
        ASM_EXPORT_ENTRY(0x6247e9c, public_6247e9c)
        ASM_EXPORT_ENTRY(0x6247ea7, public_6247ea7)
        ASM_EXPORT_ENTRY_LAST(0x6247eb2, public_6247eb2)
    }
}

#undef public_6247e68
#undef public_6247e73
#undef public_6247e7e
#undef public_6247e89
#undef public_6247e94
#undef public_6247e9c
#undef public_6247ea7
#undef public_6247eb2

#pragma init_seg(compiler)
extern "C" void const* const public_6247e68 = __AsmFindLabelExport(&internal_6247e60, 0x6247e68);
extern "C" void const* const public_6247e73 = __AsmFindLabelExport(&internal_6247e60, 0x6247e73);
extern "C" void const* const public_6247e7e = __AsmFindLabelExport(&internal_6247e60, 0x6247e7e);
extern "C" void const* const public_6247e89 = __AsmFindLabelExport(&internal_6247e60, 0x6247e89);
extern "C" void const* const public_6247e94 = __AsmFindLabelExport(&internal_6247e60, 0x6247e94);
extern "C" void const* const public_6247e9c = __AsmFindLabelExport(&internal_6247e60, 0x6247e9c);
extern "C" void const* const public_6247ea7 = __AsmFindLabelExport(&internal_6247e60, 0x6247ea7);
extern "C" void const* const public_6247eb2 = __AsmFindLabelExport(&internal_6247e60, 0x6247eb2);
