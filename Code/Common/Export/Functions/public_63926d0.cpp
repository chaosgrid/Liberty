#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_62f1670);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63926d8 _public_63926d8
#define public_63926e9 _public_63926e9

PROC_DECLARE(0x63926d0, internal_63926d0, public_63926d0);
/* CHUNK of public_626c9b0 */
extern "C" NAKED register_t __cdecl internal_63926d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62f1670
        public_63926d8 : nop
        mov eax, dword ptr ss : [ebp-0x20]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_63926e9 : nop
        mov eax, offset public_63ab47c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63926d0)
        ASM_EXPORT_ENTRY_FIRST(0x63926d8, public_63926d8)
        ASM_EXPORT_ENTRY_LAST(0x63926e9, public_63926e9)
    }
}

#undef public_63926d8
#undef public_63926e9

#pragma init_seg(compiler)
extern "C" void const* const public_63926d8 = __AsmFindLabelExport(&internal_63926d0, 0x63926d8);
extern "C" void const* const public_63926e9 = __AsmFindLabelExport(&internal_63926d0, 0x63926e9);
