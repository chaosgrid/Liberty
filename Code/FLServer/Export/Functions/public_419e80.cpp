#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fc80);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c78);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419e88 _public_419e88
#define public_419e93 _public_419e93
#define public_419ea1 _public_419ea1
#define public_419eaf _public_419eaf
#define public_419ebd _public_419ebd

PROC_DECLARE(0x419e80, internal_419e80, public_419e80);
/* CHUNK of public_409300 */
extern "C" NAKED register_t __cdecl internal_419e80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_419e88 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x60
        jmp public_418c78
        public_419e93 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA4
        jmp public_40fc80
        public_419ea1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x140
        jmp public_418c78
        public_419eaf : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x180
        jmp public_418c78
        public_419ebd : nop
        mov eax, offset public_41efe8
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419e80)
        ASM_EXPORT_ENTRY_FIRST(0x419e88, public_419e88)
        ASM_EXPORT_ENTRY(0x419e93, public_419e93)
        ASM_EXPORT_ENTRY(0x419ea1, public_419ea1)
        ASM_EXPORT_ENTRY(0x419eaf, public_419eaf)
        ASM_EXPORT_ENTRY_LAST(0x419ebd, public_419ebd)
    }
}

#undef public_419e88
#undef public_419e93
#undef public_419ea1
#undef public_419eaf
#undef public_419ebd

#pragma init_seg(compiler)
extern "C" void const* const public_419e88 = __AsmFindLabelExport(&internal_419e80, 0x419e88);
extern "C" void const* const public_419e93 = __AsmFindLabelExport(&internal_419e80, 0x419e93);
extern "C" void const* const public_419ea1 = __AsmFindLabelExport(&internal_419e80, 0x419ea1);
extern "C" void const* const public_419eaf = __AsmFindLabelExport(&internal_419e80, 0x419eaf);
extern "C" void const* const public_419ebd = __AsmFindLabelExport(&internal_419e80, 0x419ebd);
