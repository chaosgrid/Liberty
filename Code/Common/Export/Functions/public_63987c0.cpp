#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63987cb _public_63987cb
#define public_63987d6 _public_63987d6
#define public_63987de _public_63987de
#define public_63987e9 _public_63987e9

PROC_DECLARE(0x63987c0, internal_63987c0, public_63987c0);
/* CHUNK of public_636b830 */
extern "C" NAKED register_t __cdecl internal_63987c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63987cb : nop
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63987d6 : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_63449d0
        public_63987de : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63987e9 : nop
        mov eax, offset public_63b2dc8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63987c0)
        ASM_EXPORT_ENTRY_FIRST(0x63987cb, public_63987cb)
        ASM_EXPORT_ENTRY(0x63987d6, public_63987d6)
        ASM_EXPORT_ENTRY(0x63987de, public_63987de)
        ASM_EXPORT_ENTRY_LAST(0x63987e9, public_63987e9)
    }
}

#undef public_63987cb
#undef public_63987d6
#undef public_63987de
#undef public_63987e9

#pragma init_seg(compiler)
extern "C" void const* const public_63987cb = __AsmFindLabelExport(&internal_63987c0, 0x63987cb);
extern "C" void const* const public_63987d6 = __AsmFindLabelExport(&internal_63987c0, 0x63987d6);
extern "C" void const* const public_63987de = __AsmFindLabelExport(&internal_63987c0, 0x63987de);
extern "C" void const* const public_63987e9 = __AsmFindLabelExport(&internal_63987c0, 0x63987e9);
