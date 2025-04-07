#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396ebb _public_6396ebb
#define public_6396ec6 _public_6396ec6
#define public_6396ed1 _public_6396ed1

PROC_DECLARE(0x6396eb0, internal_6396eb0, public_6396eb0);
/* CHUNK of public_6321fa0 */
extern "C" NAKED register_t __cdecl internal_6396eb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 0x10
        jmp public_630e210
        public_6396ebb : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 0x28
        jmp public_630e210
        public_6396ec6 : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 0x78
        jmp public_6269110
        public_6396ed1 : nop
        mov eax, offset public_63b0ed8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396eb0)
        ASM_EXPORT_ENTRY_FIRST(0x6396ebb, public_6396ebb)
        ASM_EXPORT_ENTRY(0x6396ec6, public_6396ec6)
        ASM_EXPORT_ENTRY_LAST(0x6396ed1, public_6396ed1)
    }
}

#undef public_6396ebb
#undef public_6396ec6
#undef public_6396ed1

#pragma init_seg(compiler)
extern "C" void const* const public_6396ebb = __AsmFindLabelExport(&internal_6396eb0, 0x6396ebb);
extern "C" void const* const public_6396ec6 = __AsmFindLabelExport(&internal_6396eb0, 0x6396ec6);
extern "C" void const* const public_6396ed1 = __AsmFindLabelExport(&internal_6396eb0, 0x6396ed1);
