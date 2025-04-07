#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630b290);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639628b _public_639628b
#define public_6396296 _public_6396296
#define public_63962a1 _public_63962a1

PROC_DECLARE(0x6396280, internal_6396280, public_6396280);
/* CHUNK of public_630b320 */
extern "C" NAKED register_t __cdecl internal_6396280()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639628b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_630b290
        public_6396296 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        add ecx, 0x14
        jmp public_630b290
        public_63962a1 : nop
        mov eax, offset public_63b00e4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396280)
        ASM_EXPORT_ENTRY_FIRST(0x639628b, public_639628b)
        ASM_EXPORT_ENTRY(0x6396296, public_6396296)
        ASM_EXPORT_ENTRY_LAST(0x63962a1, public_63962a1)
    }
}

#undef public_639628b
#undef public_6396296
#undef public_63962a1

#pragma init_seg(compiler)
extern "C" void const* const public_639628b = __AsmFindLabelExport(&internal_6396280, 0x639628b);
extern "C" void const* const public_6396296 = __AsmFindLabelExport(&internal_6396280, 0x6396296);
extern "C" void const* const public_63962a1 = __AsmFindLabelExport(&internal_6396280, 0x63962a1);
