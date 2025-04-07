#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_6208530);
CLANG_FORWARD_PROC_SYMBOL(public_6208550);
CLANG_FORWARD_PROC_SYMBOL(public_620b210);
CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620c070);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62483bb _public_62483bb
#define public_62483c3 _public_62483c3
#define public_62483ce _public_62483ce
#define public_62483d9 _public_62483d9
#define public_62483e4 _public_62483e4
#define public_62483ef _public_62483ef
#define public_62483fa _public_62483fa
#define public_6248408 _public_6248408
#define public_6248410 _public_6248410
#define public_624841b _public_624841b

PROC_DECLARE(0x62483b0, internal_62483b0, public_62483b0);
/* CHUNK of public_6217f80 */
extern "C" NAKED register_t __cdecl internal_62483b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_62483bb : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620c070
        public_62483c3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x6C
        jmp public_6208530
        public_62483ce : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x70
        jmp public_6208550
        public_62483d9 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x74
        jmp public_6208530
        public_62483e4 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x78
        jmp public_6208530
        public_62483ef : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x7C
        jmp public_6208530
        public_62483fa : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x80
        jmp public_62084b0
        public_6248408 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620b260
        public_6248410 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_620b210
        public_624841b : nop
        mov eax, offset public_62512c8
        jmp public_6246126
        UNREACHABLE_TRAP(0x62483b0)
        ASM_EXPORT_ENTRY_FIRST(0x62483bb, public_62483bb)
        ASM_EXPORT_ENTRY(0x62483c3, public_62483c3)
        ASM_EXPORT_ENTRY(0x62483ce, public_62483ce)
        ASM_EXPORT_ENTRY(0x62483d9, public_62483d9)
        ASM_EXPORT_ENTRY(0x62483e4, public_62483e4)
        ASM_EXPORT_ENTRY(0x62483ef, public_62483ef)
        ASM_EXPORT_ENTRY(0x62483fa, public_62483fa)
        ASM_EXPORT_ENTRY(0x6248408, public_6248408)
        ASM_EXPORT_ENTRY(0x6248410, public_6248410)
        ASM_EXPORT_ENTRY_LAST(0x624841b, public_624841b)
    }
}

#undef public_62483bb
#undef public_62483c3
#undef public_62483ce
#undef public_62483d9
#undef public_62483e4
#undef public_62483ef
#undef public_62483fa
#undef public_6248408
#undef public_6248410
#undef public_624841b

#pragma init_seg(compiler)
extern "C" void const* const public_62483bb = __AsmFindLabelExport(&internal_62483b0, 0x62483bb);
extern "C" void const* const public_62483c3 = __AsmFindLabelExport(&internal_62483b0, 0x62483c3);
extern "C" void const* const public_62483ce = __AsmFindLabelExport(&internal_62483b0, 0x62483ce);
extern "C" void const* const public_62483d9 = __AsmFindLabelExport(&internal_62483b0, 0x62483d9);
extern "C" void const* const public_62483e4 = __AsmFindLabelExport(&internal_62483b0, 0x62483e4);
extern "C" void const* const public_62483ef = __AsmFindLabelExport(&internal_62483b0, 0x62483ef);
extern "C" void const* const public_62483fa = __AsmFindLabelExport(&internal_62483b0, 0x62483fa);
extern "C" void const* const public_6248408 = __AsmFindLabelExport(&internal_62483b0, 0x6248408);
extern "C" void const* const public_6248410 = __AsmFindLabelExport(&internal_62483b0, 0x6248410);
extern "C" void const* const public_624841b = __AsmFindLabelExport(&internal_62483b0, 0x624841b);
