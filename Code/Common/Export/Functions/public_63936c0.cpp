#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62949c0);
CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63936c8 _public_63936c8
#define public_63936d0 _public_63936d0
#define public_63936db _public_63936db

PROC_DECLARE(0x63936c0, internal_63936c0, public_63936c0);
/* CHUNK of public_6294be0 */
extern "C" NAKED register_t __cdecl internal_63936c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629f2f0
        public_63936c8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62881d0
        public_63936d0 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_62949c0
        public_63936db : nop
        mov eax, offset public_63ac878
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63936c0)
        ASM_EXPORT_ENTRY_FIRST(0x63936c8, public_63936c8)
        ASM_EXPORT_ENTRY(0x63936d0, public_63936d0)
        ASM_EXPORT_ENTRY_LAST(0x63936db, public_63936db)
    }
}

#undef public_63936c8
#undef public_63936d0
#undef public_63936db

#pragma init_seg(compiler)
extern "C" void const* const public_63936c8 = __AsmFindLabelExport(&internal_63936c0, 0x63936c8);
extern "C" void const* const public_63936d0 = __AsmFindLabelExport(&internal_63936c0, 0x63936d0);
extern "C" void const* const public_63936db = __AsmFindLabelExport(&internal_63936c0, 0x63936db);
