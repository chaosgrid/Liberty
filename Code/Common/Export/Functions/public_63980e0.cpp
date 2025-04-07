#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63980eb _public_63980eb
#define public_63980f6 _public_63980f6
#define public_6398101 _public_6398101
#define public_639810c _public_639810c

PROC_DECLARE(0x63980e0, internal_63980e0, public_63980e0);
/* CHUNK of public_6356bc0 */
extern "C" NAKED register_t __cdecl internal_63980e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x64]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63980eb : nop
        mov eax, dword ptr ss : [ebp-0x6C]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63980f6 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6398101 : nop
        mov eax, dword ptr ss : [ebp-0x7C]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639810c : nop
        mov eax, offset public_63b2520
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63980e0)
        ASM_EXPORT_ENTRY_FIRST(0x63980eb, public_63980eb)
        ASM_EXPORT_ENTRY(0x63980f6, public_63980f6)
        ASM_EXPORT_ENTRY(0x6398101, public_6398101)
        ASM_EXPORT_ENTRY_LAST(0x639810c, public_639810c)
    }
}

#undef public_63980eb
#undef public_63980f6
#undef public_6398101
#undef public_639810c

#pragma init_seg(compiler)
extern "C" void const* const public_63980eb = __AsmFindLabelExport(&internal_63980e0, 0x63980eb);
extern "C" void const* const public_63980f6 = __AsmFindLabelExport(&internal_63980e0, 0x63980f6);
extern "C" void const* const public_6398101 = __AsmFindLabelExport(&internal_63980e0, 0x6398101);
extern "C" void const* const public_639810c = __AsmFindLabelExport(&internal_63980e0, 0x639810c);
