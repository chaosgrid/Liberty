#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfb030);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6109c _public_6d6109c
#define public_6d610a7 _public_6d610a7
#define public_6d610b3 _public_6d610b3
#define public_6d610bf _public_6d610bf

PROC_DECLARE(0x6d61090, internal_6d61090, public_6d61090);
/* CHUNK of public_6d04140 */
extern "C" NAKED register_t __cdecl internal_6d61090()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2280]
        jmp dword ptr ds : [public_6d644e0]
        public_6d6109c : nop
        lea ecx, ss:[ebp-0x2280]
        jmp public_6cfb030
        public_6d610a7 : nop
        mov ecx, dword ptr ss : [ebp-0x2288]
        jmp dword ptr ds : [public_6d64b94]
        public_6d610b3 : nop
        lea ecx, ss:[ebp-0x2280]
        jmp dword ptr ds : [public_6d64b94]
        public_6d610bf : nop
        mov eax, offset public_6d71c20
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61090)
        ASM_EXPORT_ENTRY_FIRST(0x6d6109c, public_6d6109c)
        ASM_EXPORT_ENTRY(0x6d610a7, public_6d610a7)
        ASM_EXPORT_ENTRY(0x6d610b3, public_6d610b3)
        ASM_EXPORT_ENTRY_LAST(0x6d610bf, public_6d610bf)
    }
}

#undef public_6d6109c
#undef public_6d610a7
#undef public_6d610b3
#undef public_6d610bf

#pragma init_seg(compiler)
extern "C" void const* const public_6d6109c = __AsmFindLabelExport(&internal_6d61090, 0x6d6109c);
extern "C" void const* const public_6d610a7 = __AsmFindLabelExport(&internal_6d61090, 0x6d610a7);
extern "C" void const* const public_6d610b3 = __AsmFindLabelExport(&internal_6d61090, 0x6d610b3);
extern "C" void const* const public_6d610bf = __AsmFindLabelExport(&internal_6d61090, 0x6d610bf);
