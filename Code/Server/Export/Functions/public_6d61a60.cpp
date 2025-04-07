#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d115e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d161e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16410);
CLANG_FORWARD_PROC_SYMBOL(public_6d16640);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61a6b _public_6d61a6b
#define public_6d61a76 _public_6d61a76
#define public_6d61a81 _public_6d61a81
#define public_6d61a8c _public_6d61a8c

PROC_DECLARE(0x6d61a60, internal_6d61a60, public_6d61a60);
/* CHUNK of public_6d11b70 */
extern "C" NAKED register_t __cdecl internal_6d61a60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_6d161e0
        public_6d61a6b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_6d16410
        public_6d61a76 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3C
        jmp public_6d16640
        public_6d61a81 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x54
        jmp public_6d115e0
        public_6d61a8c : nop
        mov eax, offset public_6d72690
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61a60)
        ASM_EXPORT_ENTRY_FIRST(0x6d61a6b, public_6d61a6b)
        ASM_EXPORT_ENTRY(0x6d61a76, public_6d61a76)
        ASM_EXPORT_ENTRY(0x6d61a81, public_6d61a81)
        ASM_EXPORT_ENTRY_LAST(0x6d61a8c, public_6d61a8c)
    }
}

#undef public_6d61a6b
#undef public_6d61a76
#undef public_6d61a81
#undef public_6d61a8c

#pragma init_seg(compiler)
extern "C" void const* const public_6d61a6b = __AsmFindLabelExport(&internal_6d61a60, 0x6d61a6b);
extern "C" void const* const public_6d61a76 = __AsmFindLabelExport(&internal_6d61a60, 0x6d61a76);
extern "C" void const* const public_6d61a81 = __AsmFindLabelExport(&internal_6d61a60, 0x6d61a81);
extern "C" void const* const public_6d61a8c = __AsmFindLabelExport(&internal_6d61a60, 0x6d61a8c);
