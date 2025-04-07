#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef65a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac72c _public_6fac72c
#define public_6fac73d _public_6fac73d
#define public_6fac748 _public_6fac748
#define public_6fac753 _public_6fac753

PROC_DECLARE(0x6fac720, internal_6fac720, public_6fac720);
/* CHUNK of public_6efa7c0 */
extern "C" NAKED register_t __cdecl internal_6fac720()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp dword ptr ds : [public_6fb3138]
        public_6fac72c : nop
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fac73d : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_6ef65a0
        public_6fac748 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x44
        jmp public_6eec8d0
        public_6fac753 : nop
        mov eax, offset public_6fc13d4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac720)
        ASM_EXPORT_ENTRY_FIRST(0x6fac72c, public_6fac72c)
        ASM_EXPORT_ENTRY(0x6fac73d, public_6fac73d)
        ASM_EXPORT_ENTRY(0x6fac748, public_6fac748)
        ASM_EXPORT_ENTRY_LAST(0x6fac753, public_6fac753)
    }
}

#undef public_6fac72c
#undef public_6fac73d
#undef public_6fac748
#undef public_6fac753

#pragma init_seg(compiler)
extern "C" void const* const public_6fac72c = __AsmFindLabelExport(&internal_6fac720, 0x6fac72c);
extern "C" void const* const public_6fac73d = __AsmFindLabelExport(&internal_6fac720, 0x6fac73d);
extern "C" void const* const public_6fac748 = __AsmFindLabelExport(&internal_6fac720, 0x6fac748);
extern "C" void const* const public_6fac753 = __AsmFindLabelExport(&internal_6fac720, 0x6fac753);
