#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396c2c _public_6396c2c
#define public_6396c3d _public_6396c3d

PROC_DECLARE(0x6396c20, internal_6396c20, public_6396c20);
/* CHUNK of public_631d440 */
extern "C" NAKED register_t __cdecl internal_6396c20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_6396c2c : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_6396c3d : nop
        mov eax, offset public_63b0b88
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396c20)
        ASM_EXPORT_ENTRY_FIRST(0x6396c2c, public_6396c2c)
        ASM_EXPORT_ENTRY_LAST(0x6396c3d, public_6396c3d)
    }
}

#undef public_6396c2c
#undef public_6396c3d

#pragma init_seg(compiler)
extern "C" void const* const public_6396c2c = __AsmFindLabelExport(&internal_6396c20, 0x6396c2c);
extern "C" void const* const public_6396c3d = __AsmFindLabelExport(&internal_6396c20, 0x6396c3d);
