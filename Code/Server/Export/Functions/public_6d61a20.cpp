#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f230);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f290);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61a31 _public_6d61a31
#define public_6d61a3c _public_6d61a3c
#define public_6d61a47 _public_6d61a47

PROC_DECLARE(0x6d61a20, internal_6d61a20, public_6d61a20);
/* CHUNK of public_6d11330 */
extern "C" NAKED register_t __cdecl internal_6d61a20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x24]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d61a31 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 8
        jmp public_6d0f230
        public_6d61a3c : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0x14
        jmp public_6d0f290
        public_6d61a47 : nop
        mov eax, offset public_6d72654
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61a20)
        ASM_EXPORT_ENTRY_FIRST(0x6d61a31, public_6d61a31)
        ASM_EXPORT_ENTRY(0x6d61a3c, public_6d61a3c)
        ASM_EXPORT_ENTRY_LAST(0x6d61a47, public_6d61a47)
    }
}

#undef public_6d61a31
#undef public_6d61a3c
#undef public_6d61a47

#pragma init_seg(compiler)
extern "C" void const* const public_6d61a31 = __AsmFindLabelExport(&internal_6d61a20, 0x6d61a31);
extern "C" void const* const public_6d61a3c = __AsmFindLabelExport(&internal_6d61a20, 0x6d61a3c);
extern "C" void const* const public_6d61a47 = __AsmFindLabelExport(&internal_6d61a20, 0x6d61a47);
