#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e910);
CLANG_FORWARD_PROC_SYMBOL(public_40e9b0);
CLANG_FORWARD_PROC_SYMBOL(public_40fb00);
CLANG_FORWARD_PROC_SYMBOL(public_40fbc0);
CLANG_FORWARD_PROC_SYMBOL(public_41918e);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a509 _public_41a509
#define public_41a510 _public_41a510
#define public_41a518 _public_41a518
#define public_41a523 _public_41a523
#define public_41a52e _public_41a52e
#define public_41a539 _public_41a539
#define public_41a544 _public_41a544
#define public_41a54f _public_41a54f
#define public_41a55a _public_41a55a
#define public_41a568 _public_41a568
#define public_41a570 _public_41a570
#define public_41a578 _public_41a578
#define public_41a580 _public_41a580
#define public_41a588 _public_41a588

PROC_DECLARE(0x41a4f0, internal_41a4f0, public_41a4f0);
/* CHUNK of public_40fc80 */
extern "C" NAKED register_t __cdecl internal_41a4f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x18]
        sub eax, 4
        test eax, eax
        je public_41a509
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x20], ecx
        jmp public_41a510
        public_41a509 : nop
        mov dword ptr ss : [ebp-0x20], 0
        public_41a510 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_41918e
        public_41a518 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x40
        jmp public_40e9b0
        public_41a523 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x48
        jmp public_40e9b0
        public_41a52e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x50
        jmp public_40e9b0
        public_41a539 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x58
        jmp public_40e9b0
        public_41a544 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x60
        jmp public_40fb00
        public_41a54f : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x74
        jmp public_40fbc0
        public_41a55a : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x88
        jmp public_40fbc0
        public_41a568 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_40e910
        public_41a570 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_40e910
        public_41a578 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_40e910
        public_41a580 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_40e910
        public_41a588 : nop
        mov eax, offset public_41f68c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a4f0)
        ASM_EXPORT_ENTRY_FIRST(0x41a509, public_41a509)
        ASM_EXPORT_ENTRY(0x41a510, public_41a510)
        ASM_EXPORT_ENTRY(0x41a518, public_41a518)
        ASM_EXPORT_ENTRY(0x41a523, public_41a523)
        ASM_EXPORT_ENTRY(0x41a52e, public_41a52e)
        ASM_EXPORT_ENTRY(0x41a539, public_41a539)
        ASM_EXPORT_ENTRY(0x41a544, public_41a544)
        ASM_EXPORT_ENTRY(0x41a54f, public_41a54f)
        ASM_EXPORT_ENTRY(0x41a55a, public_41a55a)
        ASM_EXPORT_ENTRY(0x41a568, public_41a568)
        ASM_EXPORT_ENTRY(0x41a570, public_41a570)
        ASM_EXPORT_ENTRY(0x41a578, public_41a578)
        ASM_EXPORT_ENTRY(0x41a580, public_41a580)
        ASM_EXPORT_ENTRY_LAST(0x41a588, public_41a588)
    }
}

#undef public_41a509
#undef public_41a510
#undef public_41a518
#undef public_41a523
#undef public_41a52e
#undef public_41a539
#undef public_41a544
#undef public_41a54f
#undef public_41a55a
#undef public_41a568
#undef public_41a570
#undef public_41a578
#undef public_41a580
#undef public_41a588

#pragma init_seg(compiler)
extern "C" void const* const public_41a509 = __AsmFindLabelExport(&internal_41a4f0, 0x41a509);
extern "C" void const* const public_41a510 = __AsmFindLabelExport(&internal_41a4f0, 0x41a510);
extern "C" void const* const public_41a518 = __AsmFindLabelExport(&internal_41a4f0, 0x41a518);
extern "C" void const* const public_41a523 = __AsmFindLabelExport(&internal_41a4f0, 0x41a523);
extern "C" void const* const public_41a52e = __AsmFindLabelExport(&internal_41a4f0, 0x41a52e);
extern "C" void const* const public_41a539 = __AsmFindLabelExport(&internal_41a4f0, 0x41a539);
extern "C" void const* const public_41a544 = __AsmFindLabelExport(&internal_41a4f0, 0x41a544);
extern "C" void const* const public_41a54f = __AsmFindLabelExport(&internal_41a4f0, 0x41a54f);
extern "C" void const* const public_41a55a = __AsmFindLabelExport(&internal_41a4f0, 0x41a55a);
extern "C" void const* const public_41a568 = __AsmFindLabelExport(&internal_41a4f0, 0x41a568);
extern "C" void const* const public_41a570 = __AsmFindLabelExport(&internal_41a4f0, 0x41a570);
extern "C" void const* const public_41a578 = __AsmFindLabelExport(&internal_41a4f0, 0x41a578);
extern "C" void const* const public_41a580 = __AsmFindLabelExport(&internal_41a4f0, 0x41a580);
extern "C" void const* const public_41a588 = __AsmFindLabelExport(&internal_41a4f0, 0x41a588);
