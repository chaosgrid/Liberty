#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf07b _public_5bf07b
#define public_5bf087 _public_5bf087
#define public_5bf092 _public_5bf092
#define public_5bf09d _public_5bf09d
#define public_5bf0b4 _public_5bf0b4
#define public_5bf0c0 _public_5bf0c0

PROC_DECLARE(0x5bf070, internal_5bf070, public_5bf070);
/* CHUNK of public_4ef030 */
extern "C" NAKED register_t __cdecl internal_5bf070()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3FC]
        jmp public_444e20
        public_5bf07b : nop
        lea ecx, ss:[ebp-0x3E4]
        jmp dword ptr ds : [public_5c62a4]
        public_5bf087 : nop
        lea ecx, ss:[ebp-0x3E4]
        jmp public_5154f0
        public_5bf092 : nop
        lea ecx, ss:[ebp-0x3E4]
        jmp public_5154f0
        public_5bf09d : nop
        mov eax, dword ptr ss : [ebp-0x3E8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x3F0]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5bf0b4 : nop
        mov ecx, dword ptr ss : [ebp-0x3F0]
        jmp dword ptr ds : [public_5c62a4]
        public_5bf0c0 : nop
        mov eax, offset public_5f9008
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf070)
        ASM_EXPORT_ENTRY_FIRST(0x5bf07b, public_5bf07b)
        ASM_EXPORT_ENTRY(0x5bf087, public_5bf087)
        ASM_EXPORT_ENTRY(0x5bf092, public_5bf092)
        ASM_EXPORT_ENTRY(0x5bf09d, public_5bf09d)
        ASM_EXPORT_ENTRY(0x5bf0b4, public_5bf0b4)
        ASM_EXPORT_ENTRY_LAST(0x5bf0c0, public_5bf0c0)
    }
}

#undef public_5bf07b
#undef public_5bf087
#undef public_5bf092
#undef public_5bf09d
#undef public_5bf0b4
#undef public_5bf0c0

#pragma init_seg(compiler)
extern "C" void const* const public_5bf07b = __AsmFindLabelExport(&internal_5bf070, 0x5bf07b);
extern "C" void const* const public_5bf087 = __AsmFindLabelExport(&internal_5bf070, 0x5bf087);
extern "C" void const* const public_5bf092 = __AsmFindLabelExport(&internal_5bf070, 0x5bf092);
extern "C" void const* const public_5bf09d = __AsmFindLabelExport(&internal_5bf070, 0x5bf09d);
extern "C" void const* const public_5bf0b4 = __AsmFindLabelExport(&internal_5bf070, 0x5bf0b4);
extern "C" void const* const public_5bf0c0 = __AsmFindLabelExport(&internal_5bf070, 0x5bf0c0);
