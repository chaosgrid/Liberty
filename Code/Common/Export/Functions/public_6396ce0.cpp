#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396ceb _public_6396ceb
#define public_6396cf6 _public_6396cf6
#define public_6396d01 _public_6396d01

PROC_DECLARE(0x6396ce0, internal_6396ce0, public_6396ce0);
/* CHUNK of public_631fd00 */
extern "C" NAKED register_t __cdecl internal_6396ce0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_630e210
        public_6396ceb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_630e210
        public_6396cf6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x78
        jmp public_6269110
        public_6396d01 : nop
        mov eax, offset public_63b0c7c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396ce0)
        ASM_EXPORT_ENTRY_FIRST(0x6396ceb, public_6396ceb)
        ASM_EXPORT_ENTRY(0x6396cf6, public_6396cf6)
        ASM_EXPORT_ENTRY_LAST(0x6396d01, public_6396d01)
    }
}

#undef public_6396ceb
#undef public_6396cf6
#undef public_6396d01

#pragma init_seg(compiler)
extern "C" void const* const public_6396ceb = __AsmFindLabelExport(&internal_6396ce0, 0x6396ceb);
extern "C" void const* const public_6396cf6 = __AsmFindLabelExport(&internal_6396ce0, 0x6396cf6);
extern "C" void const* const public_6396d01 = __AsmFindLabelExport(&internal_6396ce0, 0x6396d01);
