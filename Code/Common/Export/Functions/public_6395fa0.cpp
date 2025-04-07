#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395fac _public_6395fac
#define public_6395fb8 _public_6395fb8
#define public_6395fc4 _public_6395fc4

PROC_DECLARE(0x6395fa0, internal_6395fa0, public_6395fa0);
/* CHUNK of public_63026d0 */
extern "C" NAKED register_t __cdecl internal_6395fa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_6395fac : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x14
        jmp dword ptr ds : [public_63991ac]
        public_6395fb8 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x24
        jmp dword ptr ds : [public_63991ac]
        public_6395fc4 : nop
        mov eax, offset public_63afd70
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395fa0)
        ASM_EXPORT_ENTRY_FIRST(0x6395fac, public_6395fac)
        ASM_EXPORT_ENTRY(0x6395fb8, public_6395fb8)
        ASM_EXPORT_ENTRY_LAST(0x6395fc4, public_6395fc4)
    }
}

#undef public_6395fac
#undef public_6395fb8
#undef public_6395fc4

#pragma init_seg(compiler)
extern "C" void const* const public_6395fac = __AsmFindLabelExport(&internal_6395fa0, 0x6395fac);
extern "C" void const* const public_6395fb8 = __AsmFindLabelExport(&internal_6395fa0, 0x6395fb8);
extern "C" void const* const public_6395fc4 = __AsmFindLabelExport(&internal_6395fa0, 0x6395fc4);
