#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fc80);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c78);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419e38 _public_419e38
#define public_419e43 _public_419e43
#define public_419e51 _public_419e51
#define public_419e5f _public_419e5f
#define public_419e6d _public_419e6d

PROC_DECLARE(0x419e30, internal_419e30, public_419e30);
/* CHUNK of public_409200 */
extern "C" NAKED register_t __cdecl internal_419e30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_419e38 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x60
        jmp public_418c78
        public_419e43 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA4
        jmp public_40fc80
        public_419e51 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x140
        jmp public_418c78
        public_419e5f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x180
        jmp public_418c78
        public_419e6d : nop
        mov eax, offset public_41efa4
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419e30)
        ASM_EXPORT_ENTRY_FIRST(0x419e38, public_419e38)
        ASM_EXPORT_ENTRY(0x419e43, public_419e43)
        ASM_EXPORT_ENTRY(0x419e51, public_419e51)
        ASM_EXPORT_ENTRY(0x419e5f, public_419e5f)
        ASM_EXPORT_ENTRY_LAST(0x419e6d, public_419e6d)
    }
}

#undef public_419e38
#undef public_419e43
#undef public_419e51
#undef public_419e5f
#undef public_419e6d

#pragma init_seg(compiler)
extern "C" void const* const public_419e38 = __AsmFindLabelExport(&internal_419e30, 0x419e38);
extern "C" void const* const public_419e43 = __AsmFindLabelExport(&internal_419e30, 0x419e43);
extern "C" void const* const public_419e51 = __AsmFindLabelExport(&internal_419e30, 0x419e51);
extern "C" void const* const public_419e5f = __AsmFindLabelExport(&internal_419e30, 0x419e5f);
extern "C" void const* const public_419e6d = __AsmFindLabelExport(&internal_419e30, 0x419e6d);
