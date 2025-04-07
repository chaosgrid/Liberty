#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d29370);
CLANG_FORWARD_PROC_SYMBOL(public_6d3cd60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62ae9 _public_6d62ae9
#define public_6d62af1 _public_6d62af1
#define public_6d62afc _public_6d62afc
#define public_6d62b04 _public_6d62b04
#define public_6d62b0c _public_6d62b0c
#define public_6d62b14 _public_6d62b14

PROC_DECLARE(0x6d62ae0, internal_6d62ae0, public_6d62ae0);
/* CHUNK of public_6d271c0 */
extern "C" NAKED register_t __cdecl internal_6d62ae0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x58]
        jmp dword ptr ds : [public_6d64b68]
        public_6d62ae9 : nop
        lea ecx, ss:[ebp-0x58]
        jmp public_6ce36f0
        public_6d62af1 : nop
        mov eax, dword ptr ss : [ebp-0x6C]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d62afc : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_6d29370
        public_6d62b04 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6ce36f0
        public_6d62b0c : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_6d3cd60
        public_6d62b14 : nop
        mov eax, offset public_6d73bb8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62ae0)
        ASM_EXPORT_ENTRY_FIRST(0x6d62ae9, public_6d62ae9)
        ASM_EXPORT_ENTRY(0x6d62af1, public_6d62af1)
        ASM_EXPORT_ENTRY(0x6d62afc, public_6d62afc)
        ASM_EXPORT_ENTRY(0x6d62b04, public_6d62b04)
        ASM_EXPORT_ENTRY(0x6d62b0c, public_6d62b0c)
        ASM_EXPORT_ENTRY_LAST(0x6d62b14, public_6d62b14)
    }
}

#undef public_6d62ae9
#undef public_6d62af1
#undef public_6d62afc
#undef public_6d62b04
#undef public_6d62b0c
#undef public_6d62b14

#pragma init_seg(compiler)
extern "C" void const* const public_6d62ae9 = __AsmFindLabelExport(&internal_6d62ae0, 0x6d62ae9);
extern "C" void const* const public_6d62af1 = __AsmFindLabelExport(&internal_6d62ae0, 0x6d62af1);
extern "C" void const* const public_6d62afc = __AsmFindLabelExport(&internal_6d62ae0, 0x6d62afc);
extern "C" void const* const public_6d62b04 = __AsmFindLabelExport(&internal_6d62ae0, 0x6d62b04);
extern "C" void const* const public_6d62b0c = __AsmFindLabelExport(&internal_6d62ae0, 0x6d62b0c);
extern "C" void const* const public_6d62b14 = __AsmFindLabelExport(&internal_6d62ae0, 0x6d62b14);
