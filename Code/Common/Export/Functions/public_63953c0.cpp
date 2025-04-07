#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4c90);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63953cb _public_63953cb
#define public_63953d9 _public_63953d9
#define public_63953e1 _public_63953e1

PROC_DECLARE(0x63953c0, internal_63953c0, public_63953c0);
/* CHUNK of public_62e6af0 */
extern "C" NAKED register_t __cdecl internal_63953c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_6269110
        public_63953cb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xDC
        jmp public_62d4c90
        public_63953d9 : nop
        mov ecx, dword ptr ss : [ebp-0x54]
        jmp public_62881d0
        public_63953e1 : nop
        mov eax, offset public_63aee78
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63953c0)
        ASM_EXPORT_ENTRY_FIRST(0x63953cb, public_63953cb)
        ASM_EXPORT_ENTRY(0x63953d9, public_63953d9)
        ASM_EXPORT_ENTRY_LAST(0x63953e1, public_63953e1)
    }
}

#undef public_63953cb
#undef public_63953d9
#undef public_63953e1

#pragma init_seg(compiler)
extern "C" void const* const public_63953cb = __AsmFindLabelExport(&internal_63953c0, 0x63953cb);
extern "C" void const* const public_63953d9 = __AsmFindLabelExport(&internal_63953c0, 0x63953d9);
extern "C" void const* const public_63953e1 = __AsmFindLabelExport(&internal_63953c0, 0x63953e1);
