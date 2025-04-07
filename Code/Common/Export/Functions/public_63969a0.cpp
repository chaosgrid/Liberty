#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63969b1 _public_63969b1
#define public_63969bd _public_63969bd

PROC_DECLARE(0x63969a0, internal_63969a0, public_63969a0);
/* CHUNK of public_631a1d0 */
extern "C" NAKED register_t __cdecl internal_63969a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_63969b1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp dword ptr ds : [public_63991ac]
        public_63969bd : nop
        mov eax, offset public_63b088c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63969a0)
        ASM_EXPORT_ENTRY_FIRST(0x63969b1, public_63969b1)
        ASM_EXPORT_ENTRY_LAST(0x63969bd, public_63969bd)
    }
}

#undef public_63969b1
#undef public_63969bd

#pragma init_seg(compiler)
extern "C" void const* const public_63969b1 = __AsmFindLabelExport(&internal_63969a0, 0x63969b1);
extern "C" void const* const public_63969bd = __AsmFindLabelExport(&internal_63969a0, 0x63969bd);
