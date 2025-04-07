#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6289730);
CLANG_FORWARD_PROC_SYMBOL(public_6289760);
CLANG_FORWARD_PROC_SYMBOL(public_6289790);
CLANG_FORWARD_PROC_SYMBOL(public_6289850);
CLANG_FORWARD_PROC_SYMBOL(public_634bca0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639324e _public_639324e
#define public_6393256 _public_6393256
#define public_6393261 _public_6393261
#define public_639326c _public_639326c
#define public_639328d _public_639328d
#define public_6393297 _public_6393297
#define public_63932a2 _public_63932a2
#define public_63932c3 _public_63932c3
#define public_63932cd _public_63932cd
#define public_63932d8 _public_63932d8
#define public_63932e6 _public_63932e6
#define public_63932ee _public_63932ee
#define public_6393307 _public_6393307
#define public_6393311 _public_6393311
#define public_639331c _public_639331c
#define public_6393335 _public_6393335
#define public_639333f _public_639333f
#define public_639334a _public_639334a
#define public_6393352 _public_6393352

PROC_DECLARE(0x6393240, internal_6393240, public_6393240);
/* CHUNK of public_6289510 */
extern "C" NAKED register_t __cdecl internal_6393240()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0xA8]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639324e : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_6289790
        public_6393256 : nop
        lea ecx, ss:[ebp-0x98]
        jmp public_6289850
        public_6393261 : nop
        mov ecx, dword ptr ss : [ebp-0xA8]
        jmp public_6289730
        public_639326c : nop
        cmp dword ptr ss : [ebp-0xA8], 0
        je public_639328d
        mov eax, dword ptr ss : [ebp-0xA8]
        add eax, 4
        mov dword ptr ss : [ebp-0xE8], eax
        jmp public_6393297
        public_639328d : nop
        mov dword ptr ss : [ebp-0xE8], 0
        public_6393297 : nop
        mov ecx, dword ptr ss : [ebp-0xE8]
        jmp public_6289760
        public_63932a2 : nop
        cmp dword ptr ss : [ebp-0xA8], 0
        je public_63932c3
        mov eax, dword ptr ss : [ebp-0xA8]
        add eax, 0xC
        mov dword ptr ss : [ebp-0xAC], eax
        jmp public_63932cd
        public_63932c3 : nop
        mov dword ptr ss : [ebp-0xAC], 0
        public_63932cd : nop
        mov ecx, dword ptr ss : [ebp-0xAC]
        jmp public_634bca0
        public_63932d8 : nop
        mov ecx, dword ptr ss : [ebp-0xA8]
        add ecx, 0x1C
        jmp public_6269110
        public_63932e6 : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_6289730
        public_63932ee : nop
        lea eax, ss:[ebp-0x50]
        test eax, eax
        je public_6393307
        lea ecx, ss:[ebp-0x4C]
        mov dword ptr ss : [ebp-0x100], ecx
        jmp public_6393311
        public_6393307 : nop
        mov dword ptr ss : [ebp-0x100], 0
        public_6393311 : nop
        mov ecx, dword ptr ss : [ebp-0x100]
        jmp public_6289760
        public_639331c : nop
        lea eax, ss:[ebp-0x50]
        test eax, eax
        je public_6393335
        lea ecx, ss:[ebp-0x44]
        mov dword ptr ss : [ebp-0xB0], ecx
        jmp public_639333f
        public_6393335 : nop
        mov dword ptr ss : [ebp-0xB0], 0
        public_639333f : nop
        mov ecx, dword ptr ss : [ebp-0xB0]
        jmp public_634bca0
        public_639334a : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_6269110
        public_6393352 : nop
        mov eax, offset public_63ac370
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393240)
        ASM_EXPORT_ENTRY_FIRST(0x639324e, public_639324e)
        ASM_EXPORT_ENTRY(0x6393256, public_6393256)
        ASM_EXPORT_ENTRY(0x6393261, public_6393261)
        ASM_EXPORT_ENTRY(0x639326c, public_639326c)
        ASM_EXPORT_ENTRY(0x639328d, public_639328d)
        ASM_EXPORT_ENTRY(0x6393297, public_6393297)
        ASM_EXPORT_ENTRY(0x63932a2, public_63932a2)
        ASM_EXPORT_ENTRY(0x63932c3, public_63932c3)
        ASM_EXPORT_ENTRY(0x63932cd, public_63932cd)
        ASM_EXPORT_ENTRY(0x63932d8, public_63932d8)
        ASM_EXPORT_ENTRY(0x63932e6, public_63932e6)
        ASM_EXPORT_ENTRY(0x63932ee, public_63932ee)
        ASM_EXPORT_ENTRY(0x6393307, public_6393307)
        ASM_EXPORT_ENTRY(0x6393311, public_6393311)
        ASM_EXPORT_ENTRY(0x639331c, public_639331c)
        ASM_EXPORT_ENTRY(0x6393335, public_6393335)
        ASM_EXPORT_ENTRY(0x639333f, public_639333f)
        ASM_EXPORT_ENTRY(0x639334a, public_639334a)
        ASM_EXPORT_ENTRY_LAST(0x6393352, public_6393352)
    }
}

#undef public_639324e
#undef public_6393256
#undef public_6393261
#undef public_639326c
#undef public_639328d
#undef public_6393297
#undef public_63932a2
#undef public_63932c3
#undef public_63932cd
#undef public_63932d8
#undef public_63932e6
#undef public_63932ee
#undef public_6393307
#undef public_6393311
#undef public_639331c
#undef public_6393335
#undef public_639333f
#undef public_639334a
#undef public_6393352

#pragma init_seg(compiler)
extern "C" void const* const public_639324e = __AsmFindLabelExport(&internal_6393240, 0x639324e);
extern "C" void const* const public_6393256 = __AsmFindLabelExport(&internal_6393240, 0x6393256);
extern "C" void const* const public_6393261 = __AsmFindLabelExport(&internal_6393240, 0x6393261);
extern "C" void const* const public_639326c = __AsmFindLabelExport(&internal_6393240, 0x639326c);
extern "C" void const* const public_639328d = __AsmFindLabelExport(&internal_6393240, 0x639328d);
extern "C" void const* const public_6393297 = __AsmFindLabelExport(&internal_6393240, 0x6393297);
extern "C" void const* const public_63932a2 = __AsmFindLabelExport(&internal_6393240, 0x63932a2);
extern "C" void const* const public_63932c3 = __AsmFindLabelExport(&internal_6393240, 0x63932c3);
extern "C" void const* const public_63932cd = __AsmFindLabelExport(&internal_6393240, 0x63932cd);
extern "C" void const* const public_63932d8 = __AsmFindLabelExport(&internal_6393240, 0x63932d8);
extern "C" void const* const public_63932e6 = __AsmFindLabelExport(&internal_6393240, 0x63932e6);
extern "C" void const* const public_63932ee = __AsmFindLabelExport(&internal_6393240, 0x63932ee);
extern "C" void const* const public_6393307 = __AsmFindLabelExport(&internal_6393240, 0x6393307);
extern "C" void const* const public_6393311 = __AsmFindLabelExport(&internal_6393240, 0x6393311);
extern "C" void const* const public_639331c = __AsmFindLabelExport(&internal_6393240, 0x639331c);
extern "C" void const* const public_6393335 = __AsmFindLabelExport(&internal_6393240, 0x6393335);
extern "C" void const* const public_639333f = __AsmFindLabelExport(&internal_6393240, 0x639333f);
extern "C" void const* const public_639334a = __AsmFindLabelExport(&internal_6393240, 0x639334a);
extern "C" void const* const public_6393352 = __AsmFindLabelExport(&internal_6393240, 0x6393352);
