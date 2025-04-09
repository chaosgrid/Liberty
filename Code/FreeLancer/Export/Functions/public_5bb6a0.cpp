#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_468850);
CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb6a8 _public_5bb6a8
#define public_5bb6b3 _public_5bb6b3
#define public_5bb6be _public_5bb6be
#define public_5bb6c9 _public_5bb6c9
#define public_5bb6d4 _public_5bb6d4

PROC_DECLARE(0x5bb6a0, internal_5bb6a0, public_5bb6a0);
/* CHUNK of public_4699d0 */
extern "C" NAKED register_t __cdecl internal_5bb6a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4a2d30
        public_5bb6a8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp public_4a2d30
        public_5bb6b3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x18
        jmp public_468850
        public_5bb6be : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_468850
        public_5bb6c9 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bb6d4 : nop
        mov eax, offset public_5f5878
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb6a0)
        ASM_EXPORT_ENTRY_FIRST(0x5bb6a8, public_5bb6a8)
        ASM_EXPORT_ENTRY(0x5bb6b3, public_5bb6b3)
        ASM_EXPORT_ENTRY(0x5bb6be, public_5bb6be)
        ASM_EXPORT_ENTRY(0x5bb6c9, public_5bb6c9)
        ASM_EXPORT_ENTRY_LAST(0x5bb6d4, public_5bb6d4)
    }
}

#undef public_5bb6a8
#undef public_5bb6b3
#undef public_5bb6be
#undef public_5bb6c9
#undef public_5bb6d4

#pragma init_seg(compiler)
extern "C" void const* const public_5bb6a8 = __AsmFindLabelExport(&internal_5bb6a0, 0x5bb6a8);
extern "C" void const* const public_5bb6b3 = __AsmFindLabelExport(&internal_5bb6a0, 0x5bb6b3);
extern "C" void const* const public_5bb6be = __AsmFindLabelExport(&internal_5bb6a0, 0x5bb6be);
extern "C" void const* const public_5bb6c9 = __AsmFindLabelExport(&internal_5bb6a0, 0x5bb6c9);
extern "C" void const* const public_5bb6d4 = __AsmFindLabelExport(&internal_5bb6a0, 0x5bb6d4);
