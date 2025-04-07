#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63c41 _public_6d63c41

PROC_DECLARE(0x6d63c30, internal_6d63c30, public_6d63c30);
/* CHUNK of public_6d5a9d0 */
extern "C" NAKED register_t __cdecl internal_6d63c30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d63c41 : nop
        mov eax, offset public_6d75e30
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63c30)
        ASM_EXPORT_ENTRY_SINGLE(0x6d63c41, public_6d63c41)
    }
}

#undef public_6d63c41

#pragma init_seg(compiler)
extern "C" void const* const public_6d63c41 = __AsmFindLabelExport(&internal_6d63c30, 0x6d63c41);
