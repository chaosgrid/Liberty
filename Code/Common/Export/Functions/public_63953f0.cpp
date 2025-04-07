#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63953f8 _public_63953f8
#define public_6395400 _public_6395400
#define public_6395411 _public_6395411

PROC_DECLARE(0x63953f0, internal_63953f0, public_63953f0);
/* CHUNK of public_62e8720 */
extern "C" NAKED register_t __cdecl internal_63953f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_62881d0
        public_63953f8 : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_62881d0
        public_6395400 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_6395411 : nop
        mov eax, offset public_63aeeac
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63953f0)
        ASM_EXPORT_ENTRY_FIRST(0x63953f8, public_63953f8)
        ASM_EXPORT_ENTRY(0x6395400, public_6395400)
        ASM_EXPORT_ENTRY_LAST(0x6395411, public_6395411)
    }
}

#undef public_63953f8
#undef public_6395400
#undef public_6395411

#pragma init_seg(compiler)
extern "C" void const* const public_63953f8 = __AsmFindLabelExport(&internal_63953f0, 0x63953f8);
extern "C" void const* const public_6395400 = __AsmFindLabelExport(&internal_63953f0, 0x6395400);
extern "C" void const* const public_6395411 = __AsmFindLabelExport(&internal_63953f0, 0x6395411);
