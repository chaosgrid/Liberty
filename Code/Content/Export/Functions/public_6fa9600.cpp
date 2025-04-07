#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa960b _public_6fa960b
#define public_6fa9617 _public_6fa9617
#define public_6fa9622 _public_6fa9622
#define public_6fa962e _public_6fa962e
#define public_6fa963a _public_6fa963a

PROC_DECLARE(0x6fa9600, internal_6fa9600, public_6fa9600);
/* CHUNK of public_6ea3de0 */
extern "C" NAKED register_t __cdecl internal_6fa9600()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_6eb7d30
        public_6fa960b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa9617 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa9622 : nop
        mov ecx, dword ptr ss : [ebp-0x157C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa962e : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa963a : nop
        mov eax, offset public_6fbd99c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9600)
        ASM_EXPORT_ENTRY_FIRST(0x6fa960b, public_6fa960b)
        ASM_EXPORT_ENTRY(0x6fa9617, public_6fa9617)
        ASM_EXPORT_ENTRY(0x6fa9622, public_6fa9622)
        ASM_EXPORT_ENTRY(0x6fa962e, public_6fa962e)
        ASM_EXPORT_ENTRY_LAST(0x6fa963a, public_6fa963a)
    }
}

#undef public_6fa960b
#undef public_6fa9617
#undef public_6fa9622
#undef public_6fa962e
#undef public_6fa963a

#pragma init_seg(compiler)
extern "C" void const* const public_6fa960b = __AsmFindLabelExport(&internal_6fa9600, 0x6fa960b);
extern "C" void const* const public_6fa9617 = __AsmFindLabelExport(&internal_6fa9600, 0x6fa9617);
extern "C" void const* const public_6fa9622 = __AsmFindLabelExport(&internal_6fa9600, 0x6fa9622);
extern "C" void const* const public_6fa962e = __AsmFindLabelExport(&internal_6fa9600, 0x6fa962e);
extern "C" void const* const public_6fa963a = __AsmFindLabelExport(&internal_6fa9600, 0x6fa963a);
