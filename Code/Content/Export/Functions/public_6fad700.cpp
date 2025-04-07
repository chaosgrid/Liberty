#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3710);
CLANG_FORWARD_PROC_SYMBOL(public_6ed37d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad708 _public_6fad708
#define public_6fad71c _public_6fad71c
#define public_6fad724 _public_6fad724
#define public_6fad72c _public_6fad72c

PROC_DECLARE(0x6fad700, internal_6fad700, public_6fad700);
/* CHUNK of public_6f11b90 */
extern "C" NAKED register_t __cdecl internal_6fad700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x54]
        jmp public_6ed3710
        public_6fad708 : nop
        mov eax, dword ptr ss : [ebp-0x84]
        push eax
        mov ecx, dword ptr ss : [ebp-0x80]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fad71c : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_6ed37d0
        public_6fad724 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_6f28e10
        public_6fad72c : nop
        mov eax, offset public_6fc2614
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad700)
        ASM_EXPORT_ENTRY_FIRST(0x6fad708, public_6fad708)
        ASM_EXPORT_ENTRY(0x6fad71c, public_6fad71c)
        ASM_EXPORT_ENTRY(0x6fad724, public_6fad724)
        ASM_EXPORT_ENTRY_LAST(0x6fad72c, public_6fad72c)
    }
}

#undef public_6fad708
#undef public_6fad71c
#undef public_6fad724
#undef public_6fad72c

#pragma init_seg(compiler)
extern "C" void const* const public_6fad708 = __AsmFindLabelExport(&internal_6fad700, 0x6fad708);
extern "C" void const* const public_6fad71c = __AsmFindLabelExport(&internal_6fad700, 0x6fad71c);
extern "C" void const* const public_6fad724 = __AsmFindLabelExport(&internal_6fad700, 0x6fad724);
extern "C" void const* const public_6fad72c = __AsmFindLabelExport(&internal_6fad700, 0x6fad72c);
