#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ae740);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c5798 _public_5c5798
#define public_5c57a7 _public_5c57a7
#define public_5c57b6 _public_5c57b6
#define public_5c57c5 _public_5c57c5

PROC_DECLARE(0x5c5790, internal_5c5790, public_5c5790);
/* CHUNK of public_5ae810 */
extern "C" NAKED register_t __cdecl internal_5c5790()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_5ae740
        public_5c5798 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x204
        jmp dword ptr ds : [public_5c7058]
        public_5c57a7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x214
        jmp dword ptr ds : [public_5c7058]
        public_5c57b6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x248
        jmp dword ptr ds : [public_5c60fc]
        public_5c57c5 : nop
        mov eax, offset public_5ff5a4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5790)
        ASM_EXPORT_ENTRY_FIRST(0x5c5798, public_5c5798)
        ASM_EXPORT_ENTRY(0x5c57a7, public_5c57a7)
        ASM_EXPORT_ENTRY(0x5c57b6, public_5c57b6)
        ASM_EXPORT_ENTRY_LAST(0x5c57c5, public_5c57c5)
    }
}

#undef public_5c5798
#undef public_5c57a7
#undef public_5c57b6
#undef public_5c57c5

#pragma init_seg(compiler)
extern "C" void const* const public_5c5798 = __AsmFindLabelExport(&internal_5c5790, 0x5c5798);
extern "C" void const* const public_5c57a7 = __AsmFindLabelExport(&internal_5c5790, 0x5c57a7);
extern "C" void const* const public_5c57b6 = __AsmFindLabelExport(&internal_5c5790, 0x5c57b6);
extern "C" void const* const public_5c57c5 = __AsmFindLabelExport(&internal_5c5790, 0x5c57c5);
