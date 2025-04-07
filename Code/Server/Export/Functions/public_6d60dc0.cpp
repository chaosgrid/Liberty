#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfb030);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60dcc _public_6d60dcc
#define public_6d60dda _public_6d60dda
#define public_6d60de5 _public_6d60de5
#define public_6d60df1 _public_6d60df1
#define public_6d60dfd _public_6d60dfd

PROC_DECLARE(0x6d60dc0, internal_6d60dc0, public_6d60dc0);
/* CHUNK of public_6cfd4e0 */
extern "C" NAKED register_t __cdecl internal_6d60dc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d644e0]
        public_6d60dcc : nop
        mov eax, dword ptr ss : [ebp-0x1590]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d60dda : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6cfb030
        public_6d60de5 : nop
        mov ecx, dword ptr ss : [ebp-0x1590]
        jmp dword ptr ds : [public_6d64b94]
        public_6d60df1 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d64b94]
        public_6d60dfd : nop
        mov eax, offset public_6d71888
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60dc0)
        ASM_EXPORT_ENTRY_FIRST(0x6d60dcc, public_6d60dcc)
        ASM_EXPORT_ENTRY(0x6d60dda, public_6d60dda)
        ASM_EXPORT_ENTRY(0x6d60de5, public_6d60de5)
        ASM_EXPORT_ENTRY(0x6d60df1, public_6d60df1)
        ASM_EXPORT_ENTRY_LAST(0x6d60dfd, public_6d60dfd)
    }
}

#undef public_6d60dcc
#undef public_6d60dda
#undef public_6d60de5
#undef public_6d60df1
#undef public_6d60dfd

#pragma init_seg(compiler)
extern "C" void const* const public_6d60dcc = __AsmFindLabelExport(&internal_6d60dc0, 0x6d60dcc);
extern "C" void const* const public_6d60dda = __AsmFindLabelExport(&internal_6d60dc0, 0x6d60dda);
extern "C" void const* const public_6d60de5 = __AsmFindLabelExport(&internal_6d60dc0, 0x6d60de5);
extern "C" void const* const public_6d60df1 = __AsmFindLabelExport(&internal_6d60dc0, 0x6d60df1);
extern "C" void const* const public_6d60dfd = __AsmFindLabelExport(&internal_6d60dc0, 0x6d60dfd);
