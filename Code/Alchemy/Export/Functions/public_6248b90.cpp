#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220a20);
CLANG_FORWARD_PROC_SYMBOL(public_6222ec0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248b9b _public_6248b9b
#define public_6248ba9 _public_6248ba9
#define public_6248bb8 _public_6248bb8
#define public_6248bc6 _public_6248bc6

PROC_DECLARE(0x6248b90, internal_6248b90, public_6248b90);
/* CHUNK of public_6220310 */
extern "C" NAKED register_t __cdecl internal_6248b90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x170]
        jmp public_6222ec0
        public_6248b9b : nop
        mov eax, dword ptr ss : [ebp-0x138]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248ba9 : nop
        mov ecx, dword ptr ss : [ebp-0x138]
        add ecx, 4
        jmp dword ptr ds : [public_624b02c]
        public_6248bb8 : nop
        mov ecx, dword ptr ss : [ebp-0x138]
        add ecx, 0x14
        jmp public_6220a20
        public_6248bc6 : nop
        mov eax, offset public_6251a80
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248b90)
        ASM_EXPORT_ENTRY_FIRST(0x6248b9b, public_6248b9b)
        ASM_EXPORT_ENTRY(0x6248ba9, public_6248ba9)
        ASM_EXPORT_ENTRY(0x6248bb8, public_6248bb8)
        ASM_EXPORT_ENTRY_LAST(0x6248bc6, public_6248bc6)
    }
}

#undef public_6248b9b
#undef public_6248ba9
#undef public_6248bb8
#undef public_6248bc6

#pragma init_seg(compiler)
extern "C" void const* const public_6248b9b = __AsmFindLabelExport(&internal_6248b90, 0x6248b9b);
extern "C" void const* const public_6248ba9 = __AsmFindLabelExport(&internal_6248b90, 0x6248ba9);
extern "C" void const* const public_6248bb8 = __AsmFindLabelExport(&internal_6248b90, 0x6248bb8);
extern "C" void const* const public_6248bc6 = __AsmFindLabelExport(&internal_6248b90, 0x6248bc6);
