#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0a080);
CLANG_FORWARD_PROC_SYMBOL(public_6d0a120);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d613e9 _public_6d613e9
#define public_6d613f4 _public_6d613f4
#define public_6d613ff _public_6d613ff
#define public_6d6140d _public_6d6140d
#define public_6d61418 _public_6d61418
#define public_6d61421 _public_6d61421
#define public_6d6142c _public_6d6142c

PROC_DECLARE(0x6d613e0, internal_6d613e0, public_6d613e0);
/* CHUNK of public_6d09d60 */
extern "C" NAKED register_t __cdecl internal_6d613e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x60]
        jmp dword ptr ds : [public_6d64390]
        public_6d613e9 : nop
        lea ecx, ss:[ebp-0xFC]
        jmp public_6d0a080
        public_6d613f4 : nop
        lea ecx, ss:[ebp-0xFC]
        jmp public_6d0a120
        public_6d613ff : nop
        mov eax, dword ptr ss : [ebp-0x104]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d6140d : nop
        lea ecx, ss:[ebp-0xFC]
        jmp public_6d0a080
        public_6d61418 : nop
        lea ecx, ss:[ebp-0x60]
        jmp dword ptr ds : [public_6d64390]
        public_6d61421 : nop
        lea ecx, ss:[ebp-0xFC]
        jmp public_6d0a080
        public_6d6142c : nop
        mov eax, offset public_6d7204c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d613e0)
        ASM_EXPORT_ENTRY_FIRST(0x6d613e9, public_6d613e9)
        ASM_EXPORT_ENTRY(0x6d613f4, public_6d613f4)
        ASM_EXPORT_ENTRY(0x6d613ff, public_6d613ff)
        ASM_EXPORT_ENTRY(0x6d6140d, public_6d6140d)
        ASM_EXPORT_ENTRY(0x6d61418, public_6d61418)
        ASM_EXPORT_ENTRY(0x6d61421, public_6d61421)
        ASM_EXPORT_ENTRY_LAST(0x6d6142c, public_6d6142c)
    }
}

#undef public_6d613e9
#undef public_6d613f4
#undef public_6d613ff
#undef public_6d6140d
#undef public_6d61418
#undef public_6d61421
#undef public_6d6142c

#pragma init_seg(compiler)
extern "C" void const* const public_6d613e9 = __AsmFindLabelExport(&internal_6d613e0, 0x6d613e9);
extern "C" void const* const public_6d613f4 = __AsmFindLabelExport(&internal_6d613e0, 0x6d613f4);
extern "C" void const* const public_6d613ff = __AsmFindLabelExport(&internal_6d613e0, 0x6d613ff);
extern "C" void const* const public_6d6140d = __AsmFindLabelExport(&internal_6d613e0, 0x6d6140d);
extern "C" void const* const public_6d61418 = __AsmFindLabelExport(&internal_6d613e0, 0x6d61418);
extern "C" void const* const public_6d61421 = __AsmFindLabelExport(&internal_6d613e0, 0x6d61421);
extern "C" void const* const public_6d6142c = __AsmFindLabelExport(&internal_6d613e0, 0x6d6142c);
