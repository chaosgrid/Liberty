#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_626d000);
CLANG_FORWARD_PROC_SYMBOL(public_62f1670);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63956cb _public_63956cb
#define public_63956d9 _public_63956d9
#define public_63956e4 _public_63956e4
#define public_63956ef _public_63956ef
#define public_63956fa _public_63956fa
#define public_6395705 _public_6395705
#define public_6395711 _public_6395711
#define public_639571d _public_639571d

PROC_DECLARE(0x63956c0, internal_63956c0, public_63956c0);
/* CHUNK of public_62f29d0 */
extern "C" NAKED register_t __cdecl internal_63956c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263860
        public_63956cb : nop
        mov eax, dword ptr ss : [ebp-0x16DC]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63956d9 : nop
        lea ecx, ss:[ebp-0x16BC]
        jmp public_62f1670
        public_63956e4 : nop
        lea ecx, ss:[ebp-0x16BC]
        jmp public_626d000
        public_63956ef : nop
        lea ecx, ss:[ebp-0x16BC]
        jmp public_62f1670
        public_63956fa : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263310
        public_6395705 : nop
        mov ecx, dword ptr ss : [ebp-0x16C8]
        jmp dword ptr ds : [public_63991ac]
        public_6395711 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_63991ac]
        public_639571d : nop
        mov eax, offset public_63af1dc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63956c0)
        ASM_EXPORT_ENTRY_FIRST(0x63956cb, public_63956cb)
        ASM_EXPORT_ENTRY(0x63956d9, public_63956d9)
        ASM_EXPORT_ENTRY(0x63956e4, public_63956e4)
        ASM_EXPORT_ENTRY(0x63956ef, public_63956ef)
        ASM_EXPORT_ENTRY(0x63956fa, public_63956fa)
        ASM_EXPORT_ENTRY(0x6395705, public_6395705)
        ASM_EXPORT_ENTRY(0x6395711, public_6395711)
        ASM_EXPORT_ENTRY_LAST(0x639571d, public_639571d)
    }
}

#undef public_63956cb
#undef public_63956d9
#undef public_63956e4
#undef public_63956ef
#undef public_63956fa
#undef public_6395705
#undef public_6395711
#undef public_639571d

#pragma init_seg(compiler)
extern "C" void const* const public_63956cb = __AsmFindLabelExport(&internal_63956c0, 0x63956cb);
extern "C" void const* const public_63956d9 = __AsmFindLabelExport(&internal_63956c0, 0x63956d9);
extern "C" void const* const public_63956e4 = __AsmFindLabelExport(&internal_63956c0, 0x63956e4);
extern "C" void const* const public_63956ef = __AsmFindLabelExport(&internal_63956c0, 0x63956ef);
extern "C" void const* const public_63956fa = __AsmFindLabelExport(&internal_63956c0, 0x63956fa);
extern "C" void const* const public_6395705 = __AsmFindLabelExport(&internal_63956c0, 0x6395705);
extern "C" void const* const public_6395711 = __AsmFindLabelExport(&internal_63956c0, 0x6395711);
extern "C" void const* const public_639571d = __AsmFindLabelExport(&internal_63956c0, 0x639571d);
