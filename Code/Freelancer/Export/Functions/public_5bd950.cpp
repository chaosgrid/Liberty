#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_4ca610);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5bd95e _public_5bd95e
#define public_5bd977 _public_5bd977
#define public_5bd982 _public_5bd982

PROC_DECLARE(0x5bd950, internal_5bd950, public_5bd950);
/* CHUNK of public_4c9a80 */
extern "C" NAKED register_t __cdecl internal_5bd950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x73C]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
/*FIXUP public_5bd95e : nop
        push offset _public_420d10 @0x5bd95e*/
  FIXUP public_5bd95e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_420d10
        push 4
        push 0x10
        mov eax, dword ptr ss : [ebp-0x73C]
        add eax, 4
        push eax
        call public_5b7ec6
        ret 
        public_5bd977 : nop
        lea ecx, ss:[ebp-0x6F0]
        jmp public_4ca610
        public_5bd982 : nop
        mov eax, offset public_5f7dd4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd950)
        ASM_EXPORT_ENTRY_FIRST(0x5bd95e, public_5bd95e)
        ASM_EXPORT_ENTRY(0x5bd977, public_5bd977)
        ASM_EXPORT_ENTRY_LAST(0x5bd982, public_5bd982)
    }
}

#undef public_5bd95e
#undef public_5bd977
#undef public_5bd982

#pragma init_seg(compiler)
extern "C" void const* const public_5bd95e = __AsmFindLabelExport(&internal_5bd950, 0x5bd95e);
extern "C" void const* const public_5bd977 = __AsmFindLabelExport(&internal_5bd950, 0x5bd977);
extern "C" void const* const public_5bd982 = __AsmFindLabelExport(&internal_5bd950, 0x5bd982);
