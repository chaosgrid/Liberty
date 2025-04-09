#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcd8b _public_5bcd8b
#define public_5bcd93 _public_5bcd93
#define public_5bcda1 _public_5bcda1
#define public_5bcdaf _public_5bcdaf
#define public_5bcdbd _public_5bcdbd
#define public_5bcdcb _public_5bcdcb
#define public_5bcdd9 _public_5bcdd9
#define public_5bcde7 _public_5bcde7
#define public_5bcdf5 _public_5bcdf5
#define public_5bce03 _public_5bce03

PROC_DECLARE(0x5bcd80, internal_5bcd80, public_5bcd80);
/* CHUNK of public_4a9380 */
extern "C" NAKED register_t __cdecl internal_5bcd80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bcd8b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bcd93 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x504
        jmp public_4de730
        public_5bcda1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x514
        jmp public_4de730
        public_5bcdaf : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x524
        jmp public_4de730
        public_5bcdbd : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x534
        jmp public_4de730
        public_5bcdcb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x544
        jmp public_4de730
        public_5bcdd9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x554
        jmp public_4de730
        public_5bcde7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x7FC
        jmp public_4de730
        public_5bcdf5 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x80C
        jmp public_4de730
        public_5bce03 : nop
        mov eax, offset public_5f707c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcd80)
        ASM_EXPORT_ENTRY_FIRST(0x5bcd8b, public_5bcd8b)
        ASM_EXPORT_ENTRY(0x5bcd93, public_5bcd93)
        ASM_EXPORT_ENTRY(0x5bcda1, public_5bcda1)
        ASM_EXPORT_ENTRY(0x5bcdaf, public_5bcdaf)
        ASM_EXPORT_ENTRY(0x5bcdbd, public_5bcdbd)
        ASM_EXPORT_ENTRY(0x5bcdcb, public_5bcdcb)
        ASM_EXPORT_ENTRY(0x5bcdd9, public_5bcdd9)
        ASM_EXPORT_ENTRY(0x5bcde7, public_5bcde7)
        ASM_EXPORT_ENTRY(0x5bcdf5, public_5bcdf5)
        ASM_EXPORT_ENTRY_LAST(0x5bce03, public_5bce03)
    }
}

#undef public_5bcd8b
#undef public_5bcd93
#undef public_5bcda1
#undef public_5bcdaf
#undef public_5bcdbd
#undef public_5bcdcb
#undef public_5bcdd9
#undef public_5bcde7
#undef public_5bcdf5
#undef public_5bce03

#pragma init_seg(compiler)
extern "C" void const* const public_5bcd8b = __AsmFindLabelExport(&internal_5bcd80, 0x5bcd8b);
extern "C" void const* const public_5bcd93 = __AsmFindLabelExport(&internal_5bcd80, 0x5bcd93);
extern "C" void const* const public_5bcda1 = __AsmFindLabelExport(&internal_5bcd80, 0x5bcda1);
extern "C" void const* const public_5bcdaf = __AsmFindLabelExport(&internal_5bcd80, 0x5bcdaf);
extern "C" void const* const public_5bcdbd = __AsmFindLabelExport(&internal_5bcd80, 0x5bcdbd);
extern "C" void const* const public_5bcdcb = __AsmFindLabelExport(&internal_5bcd80, 0x5bcdcb);
extern "C" void const* const public_5bcdd9 = __AsmFindLabelExport(&internal_5bcd80, 0x5bcdd9);
extern "C" void const* const public_5bcde7 = __AsmFindLabelExport(&internal_5bcd80, 0x5bcde7);
extern "C" void const* const public_5bcdf5 = __AsmFindLabelExport(&internal_5bcd80, 0x5bcdf5);
extern "C" void const* const public_5bce03 = __AsmFindLabelExport(&internal_5bcd80, 0x5bce03);
