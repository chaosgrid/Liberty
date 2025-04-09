#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4bc9 _public_5c4bc9
#define public_5c4bd1 _public_5c4bd1
#define public_5c4be2 _public_5c4be2

PROC_DECLARE(0x5c4bc0, internal_5c4bc0, public_5c4bc0);
/* CHUNK of public_599f60 */
extern "C" NAKED register_t __cdecl internal_5c4bc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_5c62ac]
        public_5c4bc9 : nop
        lea ecx, ss:[ebp+8]
        jmp public_45eeb0
        public_5c4bd1 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        push eax
        mov ecx, dword ptr ss : [ebp-0x24]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5c4be2 : nop
        mov eax, offset public_5fe8ec
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4bc0)
        ASM_EXPORT_ENTRY_FIRST(0x5c4bc9, public_5c4bc9)
        ASM_EXPORT_ENTRY(0x5c4bd1, public_5c4bd1)
        ASM_EXPORT_ENTRY_LAST(0x5c4be2, public_5c4be2)
    }
}

#undef public_5c4bc9
#undef public_5c4bd1
#undef public_5c4be2

#pragma init_seg(compiler)
extern "C" void const* const public_5c4bc9 = __AsmFindLabelExport(&internal_5c4bc0, 0x5c4bc9);
extern "C" void const* const public_5c4bd1 = __AsmFindLabelExport(&internal_5c4bc0, 0x5c4bd1);
extern "C" void const* const public_5c4be2 = __AsmFindLabelExport(&internal_5c4bc0, 0x5c4be2);
