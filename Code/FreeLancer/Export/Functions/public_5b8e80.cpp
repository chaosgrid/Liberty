#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8e91 _public_5b8e91
#define public_5b8ea2 _public_5b8ea2
#define public_5b8ead _public_5b8ead

PROC_DECLARE(0x5b8e80, internal_5b8e80, public_5b8e80);
/* CHUNK of public_430500 */
extern "C" NAKED register_t __cdecl internal_5b8e80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5b8e91 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5b8ea2 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp public_4de730
        public_5b8ead : nop
        mov eax, offset public_5f2d88
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8e80)
        ASM_EXPORT_ENTRY_FIRST(0x5b8e91, public_5b8e91)
        ASM_EXPORT_ENTRY(0x5b8ea2, public_5b8ea2)
        ASM_EXPORT_ENTRY_LAST(0x5b8ead, public_5b8ead)
    }
}

#undef public_5b8e91
#undef public_5b8ea2
#undef public_5b8ead

#pragma init_seg(compiler)
extern "C" void const* const public_5b8e91 = __AsmFindLabelExport(&internal_5b8e80, 0x5b8e91);
extern "C" void const* const public_5b8ea2 = __AsmFindLabelExport(&internal_5b8e80, 0x5b8ea2);
extern "C" void const* const public_5b8ead = __AsmFindLabelExport(&internal_5b8e80, 0x5b8ead);
