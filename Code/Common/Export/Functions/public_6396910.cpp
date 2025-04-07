#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6315b30);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639691c _public_639691c
#define public_6396927 _public_6396927
#define public_6396933 _public_6396933
#define public_639693e _public_639693e
#define public_639694a _public_639694a

PROC_DECLARE(0x6396910, internal_6396910, public_6396910);
/* CHUNK of public_63165f0 */
extern "C" NAKED register_t __cdecl internal_6396910()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_639691c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6315b30
        public_6396927 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp dword ptr ds : [public_63991ac]
        public_6396933 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34
        jmp public_6315b30
        public_639693e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp dword ptr ds : [public_63991ac]
        public_639694a : nop
        mov eax, offset public_63b0824
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396910)
        ASM_EXPORT_ENTRY_FIRST(0x639691c, public_639691c)
        ASM_EXPORT_ENTRY(0x6396927, public_6396927)
        ASM_EXPORT_ENTRY(0x6396933, public_6396933)
        ASM_EXPORT_ENTRY(0x639693e, public_639693e)
        ASM_EXPORT_ENTRY_LAST(0x639694a, public_639694a)
    }
}

#undef public_639691c
#undef public_6396927
#undef public_6396933
#undef public_639693e
#undef public_639694a

#pragma init_seg(compiler)
extern "C" void const* const public_639691c = __AsmFindLabelExport(&internal_6396910, 0x639691c);
extern "C" void const* const public_6396927 = __AsmFindLabelExport(&internal_6396910, 0x6396927);
extern "C" void const* const public_6396933 = __AsmFindLabelExport(&internal_6396910, 0x6396933);
extern "C" void const* const public_639693e = __AsmFindLabelExport(&internal_6396910, 0x639693e);
extern "C" void const* const public_639694a = __AsmFindLabelExport(&internal_6396910, 0x639694a);
