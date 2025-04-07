#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280b30);
CLANG_FORWARD_PROC_SYMBOL(public_629b110);
CLANG_FORWARD_PROC_SYMBOL(public_62a1230);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_PROC_SYMBOL(public_62b5980);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63930d8 _public_63930d8
#define public_63930e6 _public_63930e6
#define public_63930ee _public_63930ee
#define public_63930f9 _public_63930f9
#define public_6393107 _public_6393107
#define public_6393115 _public_6393115

PROC_DECLARE(0x63930d0, internal_63930d0, public_63930d0);
/* CHUNK of public_62872c0 */
extern "C" NAKED register_t __cdecl internal_63930d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_62af440
        public_63930d8 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x9C
        jmp public_6280b30
        public_63930e6 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_62b5980
        public_63930ee : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 4
        jmp public_62a68e0
        public_63930f9 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0xE4
        jmp public_629b110
        public_6393107 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x144
        jmp public_62a1230
        public_6393115 : nop
        mov eax, offset public_63ac190
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63930d0)
        ASM_EXPORT_ENTRY_FIRST(0x63930d8, public_63930d8)
        ASM_EXPORT_ENTRY(0x63930e6, public_63930e6)
        ASM_EXPORT_ENTRY(0x63930ee, public_63930ee)
        ASM_EXPORT_ENTRY(0x63930f9, public_63930f9)
        ASM_EXPORT_ENTRY(0x6393107, public_6393107)
        ASM_EXPORT_ENTRY_LAST(0x6393115, public_6393115)
    }
}

#undef public_63930d8
#undef public_63930e6
#undef public_63930ee
#undef public_63930f9
#undef public_6393107
#undef public_6393115

#pragma init_seg(compiler)
extern "C" void const* const public_63930d8 = __AsmFindLabelExport(&internal_63930d0, 0x63930d8);
extern "C" void const* const public_63930e6 = __AsmFindLabelExport(&internal_63930d0, 0x63930e6);
extern "C" void const* const public_63930ee = __AsmFindLabelExport(&internal_63930d0, 0x63930ee);
extern "C" void const* const public_63930f9 = __AsmFindLabelExport(&internal_63930d0, 0x63930f9);
extern "C" void const* const public_6393107 = __AsmFindLabelExport(&internal_63930d0, 0x6393107);
extern "C" void const* const public_6393115 = __AsmFindLabelExport(&internal_63930d0, 0x6393115);
