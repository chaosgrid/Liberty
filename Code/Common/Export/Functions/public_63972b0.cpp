#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632ae20);
CLANG_FORWARD_PROC_SYMBOL(public_632af20);
CLANG_FORWARD_PROC_SYMBOL(public_632af40);
CLANG_FORWARD_PROC_SYMBOL(public_632afb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63972b8 _public_63972b8
#define public_63972c3 _public_63972c3
#define public_63972cb _public_63972cb
#define public_63972d3 _public_63972d3
#define public_63972db _public_63972db
#define public_63972e3 _public_63972e3

PROC_DECLARE(0x63972b0, internal_63972b0, public_63972b0);
/* CHUNK of public_632ac30 */
extern "C" NAKED register_t __cdecl internal_63972b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_632afb0
        public_63972b8 : nop
        mov eax, dword ptr ss : [ebp-0x3C]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63972c3 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_632ae20
        public_63972cb : nop
        lea ecx, ss:[ebp-0x38]
        jmp public_632af20
        public_63972d3 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_632af40
        public_63972db : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_632af40
        public_63972e3 : nop
        mov eax, offset public_63b1408
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63972b0)
        ASM_EXPORT_ENTRY_FIRST(0x63972b8, public_63972b8)
        ASM_EXPORT_ENTRY(0x63972c3, public_63972c3)
        ASM_EXPORT_ENTRY(0x63972cb, public_63972cb)
        ASM_EXPORT_ENTRY(0x63972d3, public_63972d3)
        ASM_EXPORT_ENTRY(0x63972db, public_63972db)
        ASM_EXPORT_ENTRY_LAST(0x63972e3, public_63972e3)
    }
}

#undef public_63972b8
#undef public_63972c3
#undef public_63972cb
#undef public_63972d3
#undef public_63972db
#undef public_63972e3

#pragma init_seg(compiler)
extern "C" void const* const public_63972b8 = __AsmFindLabelExport(&internal_63972b0, 0x63972b8);
extern "C" void const* const public_63972c3 = __AsmFindLabelExport(&internal_63972b0, 0x63972c3);
extern "C" void const* const public_63972cb = __AsmFindLabelExport(&internal_63972b0, 0x63972cb);
extern "C" void const* const public_63972d3 = __AsmFindLabelExport(&internal_63972b0, 0x63972d3);
extern "C" void const* const public_63972db = __AsmFindLabelExport(&internal_63972b0, 0x63972db);
extern "C" void const* const public_63972e3 = __AsmFindLabelExport(&internal_63972b0, 0x63972e3);
