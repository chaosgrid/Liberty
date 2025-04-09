#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd49b _public_5bd49b
#define public_5bd4a3 _public_5bd4a3

PROC_DECLARE(0x5bd490, internal_5bd490, public_5bd490);
/* CHUNK of public_4bd2c0 */
extern "C" NAKED register_t __cdecl internal_5bd490()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd49b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bd4a3 : nop
        mov eax, offset public_5f7834
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd490)
        ASM_EXPORT_ENTRY_FIRST(0x5bd49b, public_5bd49b)
        ASM_EXPORT_ENTRY_LAST(0x5bd4a3, public_5bd4a3)
    }
}

#undef public_5bd49b
#undef public_5bd4a3

#pragma init_seg(compiler)
extern "C" void const* const public_5bd49b = __AsmFindLabelExport(&internal_5bd490, 0x5bd49b);
extern "C" void const* const public_5bd4a3 = __AsmFindLabelExport(&internal_5bd490, 0x5bd4a3);
