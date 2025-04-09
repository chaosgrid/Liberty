#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0188 _public_5c0188
#define public_5c0190 _public_5c0190
#define public_5c019b _public_5c019b

PROC_DECLARE(0x5c0180, internal_5c0180, public_5c0180);
/* CHUNK of public_525800 */
extern "C" NAKED register_t __cdecl internal_5c0180()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_526a20
        public_5c0188 : nop
        lea ecx, ss:[ebp+4]
        jmp public_526a20
        public_5c0190 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c019b : nop
        mov eax, offset public_5fa15c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0180)
        ASM_EXPORT_ENTRY_FIRST(0x5c0188, public_5c0188)
        ASM_EXPORT_ENTRY(0x5c0190, public_5c0190)
        ASM_EXPORT_ENTRY_LAST(0x5c019b, public_5c019b)
    }
}

#undef public_5c0188
#undef public_5c0190
#undef public_5c019b

#pragma init_seg(compiler)
extern "C" void const* const public_5c0188 = __AsmFindLabelExport(&internal_5c0180, 0x5c0188);
extern "C" void const* const public_5c0190 = __AsmFindLabelExport(&internal_5c0180, 0x5c0190);
extern "C" void const* const public_5c019b = __AsmFindLabelExport(&internal_5c0180, 0x5c019b);
