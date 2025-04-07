#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63962e1 _public_63962e1
#define public_63962ec _public_63962ec
#define public_63962f7 _public_63962f7

PROC_DECLARE(0x63962d0, internal_63962d0, public_63962d0);
/* CHUNK of public_630cb70 */
extern "C" NAKED register_t __cdecl internal_63962d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_63962e1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_62a68e0
        public_63962ec : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x40
        jmp public_6269110
        public_63962f7 : nop
        mov eax, offset public_63b0144
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63962d0)
        ASM_EXPORT_ENTRY_FIRST(0x63962e1, public_63962e1)
        ASM_EXPORT_ENTRY(0x63962ec, public_63962ec)
        ASM_EXPORT_ENTRY_LAST(0x63962f7, public_63962f7)
    }
}

#undef public_63962e1
#undef public_63962ec
#undef public_63962f7

#pragma init_seg(compiler)
extern "C" void const* const public_63962e1 = __AsmFindLabelExport(&internal_63962d0, 0x63962e1);
extern "C" void const* const public_63962ec = __AsmFindLabelExport(&internal_63962d0, 0x63962ec);
extern "C" void const* const public_63962f7 = __AsmFindLabelExport(&internal_63962d0, 0x63962f7);
