#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395c6c _public_6395c6c
#define public_6395c78 _public_6395c78
#define public_6395c84 _public_6395c84

PROC_DECLARE(0x6395c60, internal_6395c60, public_6395c60);
/* CHUNK of public_62ff160 */
extern "C" NAKED register_t __cdecl internal_6395c60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_6395c6c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp dword ptr ds : [public_63991ac]
        public_6395c78 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp dword ptr ds : [public_63991ac]
        public_6395c84 : nop
        mov eax, offset public_63afa64
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395c60)
        ASM_EXPORT_ENTRY_FIRST(0x6395c6c, public_6395c6c)
        ASM_EXPORT_ENTRY(0x6395c78, public_6395c78)
        ASM_EXPORT_ENTRY_LAST(0x6395c84, public_6395c84)
    }
}

#undef public_6395c6c
#undef public_6395c78
#undef public_6395c84

#pragma init_seg(compiler)
extern "C" void const* const public_6395c6c = __AsmFindLabelExport(&internal_6395c60, 0x6395c6c);
extern "C" void const* const public_6395c78 = __AsmFindLabelExport(&internal_6395c60, 0x6395c78);
extern "C" void const* const public_6395c84 = __AsmFindLabelExport(&internal_6395c60, 0x6395c84);
