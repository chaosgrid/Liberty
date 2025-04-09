#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dc50);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5204e0);
CLANG_FORWARD_PROC_SYMBOL(public_520500);
CLANG_FORWARD_PROC_SYMBOL(public_54c600);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bff9b _public_5bff9b
#define public_5bffa9 _public_5bffa9
#define public_5bffb7 _public_5bffb7
#define public_5bffc5 _public_5bffc5
#define public_5bffd3 _public_5bffd3
#define public_5bffe1 _public_5bffe1

PROC_DECLARE(0x5bff90, internal_5bff90, public_5bff90);
/* CHUNK of public_5201e0 */
extern "C" NAKED register_t __cdecl internal_5bff90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 8
        jmp public_520500
        public_5bff9b : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xE0
        jmp public_41dc50
        public_5bffa9 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xFC
        jmp public_54c600
        public_5bffb7 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x184
        jmp public_4de730
        public_5bffc5 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x19C
        jmp public_5204e0
        public_5bffd3 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x220
        jmp public_4de730
        public_5bffe1 : nop
        mov eax, offset public_5f9f9c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bff90)
        ASM_EXPORT_ENTRY_FIRST(0x5bff9b, public_5bff9b)
        ASM_EXPORT_ENTRY(0x5bffa9, public_5bffa9)
        ASM_EXPORT_ENTRY(0x5bffb7, public_5bffb7)
        ASM_EXPORT_ENTRY(0x5bffc5, public_5bffc5)
        ASM_EXPORT_ENTRY(0x5bffd3, public_5bffd3)
        ASM_EXPORT_ENTRY_LAST(0x5bffe1, public_5bffe1)
    }
}

#undef public_5bff9b
#undef public_5bffa9
#undef public_5bffb7
#undef public_5bffc5
#undef public_5bffd3
#undef public_5bffe1

#pragma init_seg(compiler)
extern "C" void const* const public_5bff9b = __AsmFindLabelExport(&internal_5bff90, 0x5bff9b);
extern "C" void const* const public_5bffa9 = __AsmFindLabelExport(&internal_5bff90, 0x5bffa9);
extern "C" void const* const public_5bffb7 = __AsmFindLabelExport(&internal_5bff90, 0x5bffb7);
extern "C" void const* const public_5bffc5 = __AsmFindLabelExport(&internal_5bff90, 0x5bffc5);
extern "C" void const* const public_5bffd3 = __AsmFindLabelExport(&internal_5bff90, 0x5bffd3);
extern "C" void const* const public_5bffe1 = __AsmFindLabelExport(&internal_5bff90, 0x5bffe1);
