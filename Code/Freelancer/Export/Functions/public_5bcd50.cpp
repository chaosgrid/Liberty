#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcd5b _public_5bcd5b
#define public_5bcd63 _public_5bcd63
#define public_5bcd71 _public_5bcd71

PROC_DECLARE(0x5bcd50, internal_5bcd50, public_5bcd50);
/* CHUNK of public_4a9100 */
extern "C" NAKED register_t __cdecl internal_5bcd50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x24]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bcd5b : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        jmp public_59fa50
        public_5bcd63 : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0x40C
        jmp public_4de730
        public_5bcd71 : nop
        mov eax, offset public_5f7010
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcd50)
        ASM_EXPORT_ENTRY_FIRST(0x5bcd5b, public_5bcd5b)
        ASM_EXPORT_ENTRY(0x5bcd63, public_5bcd63)
        ASM_EXPORT_ENTRY_LAST(0x5bcd71, public_5bcd71)
    }
}

#undef public_5bcd5b
#undef public_5bcd63
#undef public_5bcd71

#pragma init_seg(compiler)
extern "C" void const* const public_5bcd5b = __AsmFindLabelExport(&internal_5bcd50, 0x5bcd5b);
extern "C" void const* const public_5bcd63 = __AsmFindLabelExport(&internal_5bcd50, 0x5bcd63);
extern "C" void const* const public_5bcd71 = __AsmFindLabelExport(&internal_5bcd50, 0x5bcd71);
