#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d09ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d609b8 _public_6d609b8
#define public_6d609d4 _public_6d609d4
#define public_6d609db _public_6d609db
#define public_6d609e4 _public_6d609e4

PROC_DECLARE(0x6d609b0, internal_6d609b0, public_6d609b0);
/* CHUNK of public_6cf3db0 */
extern "C" NAKED register_t __cdecl internal_6d609b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6d09ba0
        public_6d609b8 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        sub eax, 0xC
        test eax, eax
        je public_6d609d4
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x54
        mov dword ptr ss : [ebp-0x14], ecx
        jmp public_6d609db
        public_6d609d4 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_6d609db : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp dword ptr ds : [public_6d6443c]
        public_6d609e4 : nop
        mov eax, offset public_6d71314
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d609b0)
        ASM_EXPORT_ENTRY_FIRST(0x6d609b8, public_6d609b8)
        ASM_EXPORT_ENTRY(0x6d609d4, public_6d609d4)
        ASM_EXPORT_ENTRY(0x6d609db, public_6d609db)
        ASM_EXPORT_ENTRY_LAST(0x6d609e4, public_6d609e4)
    }
}

#undef public_6d609b8
#undef public_6d609d4
#undef public_6d609db
#undef public_6d609e4

#pragma init_seg(compiler)
extern "C" void const* const public_6d609b8 = __AsmFindLabelExport(&internal_6d609b0, 0x6d609b8);
extern "C" void const* const public_6d609d4 = __AsmFindLabelExport(&internal_6d609b0, 0x6d609d4);
extern "C" void const* const public_6d609db = __AsmFindLabelExport(&internal_6d609b0, 0x6d609db);
extern "C" void const* const public_6d609e4 = __AsmFindLabelExport(&internal_6d609b0, 0x6d609e4);
