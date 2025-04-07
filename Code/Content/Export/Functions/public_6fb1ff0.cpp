#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb2001 _public_6fb2001
#define public_6fb200d _public_6fb200d

PROC_DECLARE(0x6fb1ff0, internal_6fb1ff0, public_6fb1ff0);
/* CHUNK of public_6fa4490 */
extern "C" NAKED register_t __cdecl internal_6fb1ff0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb2001 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 4
        jmp dword ptr ds : [public_6fb3034]
        public_6fb200d : nop
        mov eax, offset public_6fc75b4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1ff0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb2001, public_6fb2001)
        ASM_EXPORT_ENTRY_LAST(0x6fb200d, public_6fb200d)
    }
}

#undef public_6fb2001
#undef public_6fb200d

#pragma init_seg(compiler)
extern "C" void const* const public_6fb2001 = __AsmFindLabelExport(&internal_6fb1ff0, 0x6fb2001);
extern "C" void const* const public_6fb200d = __AsmFindLabelExport(&internal_6fb1ff0, 0x6fb200d);
