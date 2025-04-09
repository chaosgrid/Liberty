#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfd6b _public_5bfd6b
#define public_5bfd76 _public_5bfd76
#define public_5bfd7f _public_5bfd7f
#define public_5bfd8a _public_5bfd8a

PROC_DECLARE(0x5bfd60, internal_5bfd60, public_5bfd60);
/* CHUNK of public_515200 */
extern "C" NAKED register_t __cdecl internal_5bfd60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bfd6b : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        add ecx, 8
        jmp public_4a2d30
        public_5bfd76 : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp dword ptr ds : [public_5c62a4]
        public_5bfd7f : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        add ecx, 0x14
        jmp public_5154f0
        public_5bfd8a : nop
        mov eax, offset public_5f9cdc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfd60)
        ASM_EXPORT_ENTRY_FIRST(0x5bfd6b, public_5bfd6b)
        ASM_EXPORT_ENTRY(0x5bfd76, public_5bfd76)
        ASM_EXPORT_ENTRY(0x5bfd7f, public_5bfd7f)
        ASM_EXPORT_ENTRY_LAST(0x5bfd8a, public_5bfd8a)
    }
}

#undef public_5bfd6b
#undef public_5bfd76
#undef public_5bfd7f
#undef public_5bfd8a

#pragma init_seg(compiler)
extern "C" void const* const public_5bfd6b = __AsmFindLabelExport(&internal_5bfd60, 0x5bfd6b);
extern "C" void const* const public_5bfd76 = __AsmFindLabelExport(&internal_5bfd60, 0x5bfd76);
extern "C" void const* const public_5bfd7f = __AsmFindLabelExport(&internal_5bfd60, 0x5bfd7f);
extern "C" void const* const public_5bfd8a = __AsmFindLabelExport(&internal_5bfd60, 0x5bfd8a);
