#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403af0);
CLANG_FORWARD_PROC_SYMBOL(public_40bc70);
CLANG_FORWARD_PROC_SYMBOL(public_40bcc0);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419f8d _public_419f8d
#define public_419f98 _public_419f98
#define public_419fa5 _public_419fa5
#define public_419fb0 _public_419fb0
#define public_419fbb _public_419fbb
#define public_419fc6 _public_419fc6

PROC_DECLARE(0x419f80, internal_419f80, public_419f80);
/* CHUNK of public_40b640 */
extern "C" NAKED register_t __cdecl internal_419f80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x1E4]
        push eax
        call public_403af0
        ret 
        public_419f8d : nop
        lea ecx, ss:[ebp-0x1B8]
        jmp public_40bcc0
        public_419f98 : nop
        mov eax, dword ptr ss : [ebp-0x1E4]
        push eax
        call public_403af0
        ret 
        public_419fa5 : nop
        lea ecx, ss:[ebp-0x1E8]
        jmp public_418aa4
        public_419fb0 : nop
        lea ecx, ss:[ebp-0x1E8]
        jmp public_418aa4
        public_419fbb : nop
        lea ecx, ss:[ebp-0x194]
        jmp public_40bc70
        public_419fc6 : nop
        mov eax, offset public_41f108
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419f80)
        ASM_EXPORT_ENTRY_FIRST(0x419f8d, public_419f8d)
        ASM_EXPORT_ENTRY(0x419f98, public_419f98)
        ASM_EXPORT_ENTRY(0x419fa5, public_419fa5)
        ASM_EXPORT_ENTRY(0x419fb0, public_419fb0)
        ASM_EXPORT_ENTRY(0x419fbb, public_419fbb)
        ASM_EXPORT_ENTRY_LAST(0x419fc6, public_419fc6)
    }
}

#undef public_419f8d
#undef public_419f98
#undef public_419fa5
#undef public_419fb0
#undef public_419fbb
#undef public_419fc6

#pragma init_seg(compiler)
extern "C" void const* const public_419f8d = __AsmFindLabelExport(&internal_419f80, 0x419f8d);
extern "C" void const* const public_419f98 = __AsmFindLabelExport(&internal_419f80, 0x419f98);
extern "C" void const* const public_419fa5 = __AsmFindLabelExport(&internal_419f80, 0x419fa5);
extern "C" void const* const public_419fb0 = __AsmFindLabelExport(&internal_419f80, 0x419fb0);
extern "C" void const* const public_419fbb = __AsmFindLabelExport(&internal_419f80, 0x419fbb);
extern "C" void const* const public_419fc6 = __AsmFindLabelExport(&internal_419f80, 0x419fc6);
