#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639872b _public_639872b
#define public_6398736 _public_6398736
#define public_6398744 _public_6398744
#define public_6398752 _public_6398752
#define public_6398760 _public_6398760
#define public_639876e _public_639876e
#define public_639877c _public_639877c
#define public_639878a _public_639878a

PROC_DECLARE(0x6398720, internal_6398720, public_6398720);
/* CHUNK of public_636a860 */
extern "C" NAKED register_t __cdecl internal_6398720()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xC0]
        jmp public_63449d0
        public_639872b : nop
        lea ecx, ss:[ebp-0xCC]
        jmp public_63449d0
        public_6398736 : nop
        mov eax, dword ptr ss : [ebp-0xCC]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6398744 : nop
        mov eax, dword ptr ss : [ebp-0xCC]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6398752 : nop
        mov eax, dword ptr ss : [ebp-0xCC]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6398760 : nop
        mov eax, dword ptr ss : [ebp-0xCC]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639876e : nop
        mov eax, dword ptr ss : [ebp-0xCC]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639877c : nop
        mov eax, dword ptr ss : [ebp-0xCC]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639878a : nop
        mov eax, offset public_63b2d40
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398720)
        ASM_EXPORT_ENTRY_FIRST(0x639872b, public_639872b)
        ASM_EXPORT_ENTRY(0x6398736, public_6398736)
        ASM_EXPORT_ENTRY(0x6398744, public_6398744)
        ASM_EXPORT_ENTRY(0x6398752, public_6398752)
        ASM_EXPORT_ENTRY(0x6398760, public_6398760)
        ASM_EXPORT_ENTRY(0x639876e, public_639876e)
        ASM_EXPORT_ENTRY(0x639877c, public_639877c)
        ASM_EXPORT_ENTRY_LAST(0x639878a, public_639878a)
    }
}

#undef public_639872b
#undef public_6398736
#undef public_6398744
#undef public_6398752
#undef public_6398760
#undef public_639876e
#undef public_639877c
#undef public_639878a

#pragma init_seg(compiler)
extern "C" void const* const public_639872b = __AsmFindLabelExport(&internal_6398720, 0x639872b);
extern "C" void const* const public_6398736 = __AsmFindLabelExport(&internal_6398720, 0x6398736);
extern "C" void const* const public_6398744 = __AsmFindLabelExport(&internal_6398720, 0x6398744);
extern "C" void const* const public_6398752 = __AsmFindLabelExport(&internal_6398720, 0x6398752);
extern "C" void const* const public_6398760 = __AsmFindLabelExport(&internal_6398720, 0x6398760);
extern "C" void const* const public_639876e = __AsmFindLabelExport(&internal_6398720, 0x639876e);
extern "C" void const* const public_639877c = __AsmFindLabelExport(&internal_6398720, 0x639877c);
extern "C" void const* const public_639878a = __AsmFindLabelExport(&internal_6398720, 0x639878a);
