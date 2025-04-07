#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd55b _public_5bd55b
#define public_5bd567 _public_5bd567
#define public_5bd575 _public_5bd575
#define public_5bd580 _public_5bd580

PROC_DECLARE(0x5bd550, internal_5bd550, public_5bd550);
/* CHUNK of public_4bf120 */
extern "C" NAKED register_t __cdecl internal_5bd550()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, 0x10
        jmp public_4de730
        public_5bd55b : nop
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, 0x20
        jmp dword ptr ds : [public_5c60fc]
        public_5bd567 : nop
        mov eax, dword ptr ss : [ebp-0xB0]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd575 : nop
        mov eax, dword ptr ss : [ebp-0x44]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd580 : nop
        mov eax, offset public_5f791c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd550)
        ASM_EXPORT_ENTRY_FIRST(0x5bd55b, public_5bd55b)
        ASM_EXPORT_ENTRY(0x5bd567, public_5bd567)
        ASM_EXPORT_ENTRY(0x5bd575, public_5bd575)
        ASM_EXPORT_ENTRY_LAST(0x5bd580, public_5bd580)
    }
}

#undef public_5bd55b
#undef public_5bd567
#undef public_5bd575
#undef public_5bd580

#pragma init_seg(compiler)
extern "C" void const* const public_5bd55b = __AsmFindLabelExport(&internal_5bd550, 0x5bd55b);
extern "C" void const* const public_5bd567 = __AsmFindLabelExport(&internal_5bd550, 0x5bd567);
extern "C" void const* const public_5bd575 = __AsmFindLabelExport(&internal_5bd550, 0x5bd575);
extern "C" void const* const public_5bd580 = __AsmFindLabelExport(&internal_5bd550, 0x5bd580);
