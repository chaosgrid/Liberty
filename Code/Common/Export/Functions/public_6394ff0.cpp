#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394ff8 _public_6394ff8
#define public_6395006 _public_6395006
#define public_6395014 _public_6395014
#define public_639501f _public_639501f
#define public_639502a _public_639502a

PROC_DECLARE(0x6394ff0, internal_6394ff0, public_6394ff0);
/* CHUNK of public_62d2220 */
extern "C" NAKED register_t __cdecl internal_6394ff0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x28]
        jmp public_62881d0
        public_6394ff8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xF0
        jmp public_62881d0
        public_6395006 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x158
        jmp public_62d4bf0
        public_6395014 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639501f : nop
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639502a : nop
        mov eax, offset public_63aea60
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394ff0)
        ASM_EXPORT_ENTRY_FIRST(0x6394ff8, public_6394ff8)
        ASM_EXPORT_ENTRY(0x6395006, public_6395006)
        ASM_EXPORT_ENTRY(0x6395014, public_6395014)
        ASM_EXPORT_ENTRY(0x639501f, public_639501f)
        ASM_EXPORT_ENTRY_LAST(0x639502a, public_639502a)
    }
}

#undef public_6394ff8
#undef public_6395006
#undef public_6395014
#undef public_639501f
#undef public_639502a

#pragma init_seg(compiler)
extern "C" void const* const public_6394ff8 = __AsmFindLabelExport(&internal_6394ff0, 0x6394ff8);
extern "C" void const* const public_6395006 = __AsmFindLabelExport(&internal_6394ff0, 0x6395006);
extern "C" void const* const public_6395014 = __AsmFindLabelExport(&internal_6394ff0, 0x6395014);
extern "C" void const* const public_639501f = __AsmFindLabelExport(&internal_6394ff0, 0x639501f);
extern "C" void const* const public_639502a = __AsmFindLabelExport(&internal_6394ff0, 0x639502a);
