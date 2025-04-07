#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f02660);
CLANG_FORWARD_PROC_SYMBOL(public_6f02730);
CLANG_FORWARD_PROC_SYMBOL(public_6f02790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facbdc _public_6facbdc
#define public_6facbe7 _public_6facbe7
#define public_6facbf2 _public_6facbf2
#define public_6facbfd _public_6facbfd
#define public_6facc08 _public_6facc08
#define public_6facc14 _public_6facc14
#define public_6facc20 _public_6facc20

PROC_DECLARE(0x6facbd0, internal_6facbd0, public_6facbd0);
/* CHUNK of public_6f02330 */
extern "C" NAKED register_t __cdecl internal_6facbd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6facbdc : nop
        lea ecx, ss:[ebp-0x15B0]
        jmp public_6f02730
        public_6facbe7 : nop
        lea ecx, ss:[ebp-0x1590]
        jmp public_6f02660
        public_6facbf2 : nop
        lea ecx, ss:[ebp-0x15A0]
        jmp public_6f02790
        public_6facbfd : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6facc08 : nop
        mov ecx, dword ptr ss : [ebp-0x15B8]
        jmp dword ptr ds : [public_6fb330c]
        public_6facc14 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6facc20 : nop
        mov eax, offset public_6fc18a4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facbd0)
        ASM_EXPORT_ENTRY_FIRST(0x6facbdc, public_6facbdc)
        ASM_EXPORT_ENTRY(0x6facbe7, public_6facbe7)
        ASM_EXPORT_ENTRY(0x6facbf2, public_6facbf2)
        ASM_EXPORT_ENTRY(0x6facbfd, public_6facbfd)
        ASM_EXPORT_ENTRY(0x6facc08, public_6facc08)
        ASM_EXPORT_ENTRY(0x6facc14, public_6facc14)
        ASM_EXPORT_ENTRY_LAST(0x6facc20, public_6facc20)
    }
}

#undef public_6facbdc
#undef public_6facbe7
#undef public_6facbf2
#undef public_6facbfd
#undef public_6facc08
#undef public_6facc14
#undef public_6facc20

#pragma init_seg(compiler)
extern "C" void const* const public_6facbdc = __AsmFindLabelExport(&internal_6facbd0, 0x6facbdc);
extern "C" void const* const public_6facbe7 = __AsmFindLabelExport(&internal_6facbd0, 0x6facbe7);
extern "C" void const* const public_6facbf2 = __AsmFindLabelExport(&internal_6facbd0, 0x6facbf2);
extern "C" void const* const public_6facbfd = __AsmFindLabelExport(&internal_6facbd0, 0x6facbfd);
extern "C" void const* const public_6facc08 = __AsmFindLabelExport(&internal_6facbd0, 0x6facc08);
extern "C" void const* const public_6facc14 = __AsmFindLabelExport(&internal_6facbd0, 0x6facc14);
extern "C" void const* const public_6facc20 = __AsmFindLabelExport(&internal_6facbd0, 0x6facc20);
