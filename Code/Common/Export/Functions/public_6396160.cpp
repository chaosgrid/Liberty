#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639616b _public_639616b
#define public_6396176 _public_6396176

PROC_DECLARE(0x6396160, internal_6396160, public_6396160);
/* CHUNK of public_6308dd0 */
extern "C" NAKED register_t __cdecl internal_6396160()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_630e210
        public_639616b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_630e210
        public_6396176 : nop
        mov eax, offset public_63affbc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396160)
        ASM_EXPORT_ENTRY_FIRST(0x639616b, public_639616b)
        ASM_EXPORT_ENTRY_LAST(0x6396176, public_6396176)
    }
}

#undef public_639616b
#undef public_6396176

#pragma init_seg(compiler)
extern "C" void const* const public_639616b = __AsmFindLabelExport(&internal_6396160, 0x639616b);
extern "C" void const* const public_6396176 = __AsmFindLabelExport(&internal_6396160, 0x6396176);
