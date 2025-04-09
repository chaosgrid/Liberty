#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444e50);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4fb8 _public_5c4fb8
#define public_5c4fc3 _public_5c4fc3
#define public_5c4fcb _public_5c4fcb
#define public_5c4fd6 _public_5c4fd6

PROC_DECLARE(0x5c4fb0, internal_5c4fb0, public_5c4fb0);
/* CHUNK of public_5a1af0 */
extern "C" NAKED register_t __cdecl internal_5c4fb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4b4fd0
        public_5c4fb8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x7C
        jmp public_444e50
        public_5c4fc3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_444e20
        public_5c4fcb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_445d70
        public_5c4fd6 : nop
        mov eax, offset public_5feda8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4fb0)
        ASM_EXPORT_ENTRY_FIRST(0x5c4fb8, public_5c4fb8)
        ASM_EXPORT_ENTRY(0x5c4fc3, public_5c4fc3)
        ASM_EXPORT_ENTRY(0x5c4fcb, public_5c4fcb)
        ASM_EXPORT_ENTRY_LAST(0x5c4fd6, public_5c4fd6)
    }
}

#undef public_5c4fb8
#undef public_5c4fc3
#undef public_5c4fcb
#undef public_5c4fd6

#pragma init_seg(compiler)
extern "C" void const* const public_5c4fb8 = __AsmFindLabelExport(&internal_5c4fb0, 0x5c4fb8);
extern "C" void const* const public_5c4fc3 = __AsmFindLabelExport(&internal_5c4fb0, 0x5c4fc3);
extern "C" void const* const public_5c4fcb = __AsmFindLabelExport(&internal_5c4fb0, 0x5c4fcb);
extern "C" void const* const public_5c4fd6 = __AsmFindLabelExport(&internal_5c4fb0, 0x5c4fd6);
