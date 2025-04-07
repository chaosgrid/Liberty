#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393b11 _public_6393b11
#define public_6393b19 _public_6393b19

PROC_DECLARE(0x6393b00, internal_6393b00, public_6393b00);
/* CHUNK of public_629ebd0 */
extern "C" NAKED register_t __cdecl internal_6393b00()
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
        public_6393b11 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_62881d0
        public_6393b19 : nop
        mov eax, offset public_63ace24
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393b00)
        ASM_EXPORT_ENTRY_FIRST(0x6393b11, public_6393b11)
        ASM_EXPORT_ENTRY_LAST(0x6393b19, public_6393b19)
    }
}

#undef public_6393b11
#undef public_6393b19

#pragma init_seg(compiler)
extern "C" void const* const public_6393b11 = __AsmFindLabelExport(&internal_6393b00, 0x6393b11);
extern "C" void const* const public_6393b19 = __AsmFindLabelExport(&internal_6393b00, 0x6393b19);
