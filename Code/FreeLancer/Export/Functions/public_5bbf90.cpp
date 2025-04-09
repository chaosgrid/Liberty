#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_477da0);
CLANG_FORWARD_PROC_SYMBOL(public_4c6200);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbf98 _public_5bbf98
#define public_5bbfa6 _public_5bbfa6
#define public_5bbfb5 _public_5bbfb5
#define public_5bbfbd _public_5bbfbd

PROC_DECLARE(0x5bbf90, internal_5bbf90, public_5bbf90);
/* CHUNK of public_47fbe0 */
extern "C" NAKED register_t __cdecl internal_5bbf90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bbf98 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x330
        jmp public_4c6200
        public_5bbfa6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3A8
        jmp dword ptr ds : [public_5c60fc]
        public_5bbfb5 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_477da0
        public_5bbfbd : nop
        mov eax, offset public_5f639c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbf90)
        ASM_EXPORT_ENTRY_FIRST(0x5bbf98, public_5bbf98)
        ASM_EXPORT_ENTRY(0x5bbfa6, public_5bbfa6)
        ASM_EXPORT_ENTRY(0x5bbfb5, public_5bbfb5)
        ASM_EXPORT_ENTRY_LAST(0x5bbfbd, public_5bbfbd)
    }
}

#undef public_5bbf98
#undef public_5bbfa6
#undef public_5bbfb5
#undef public_5bbfbd

#pragma init_seg(compiler)
extern "C" void const* const public_5bbf98 = __AsmFindLabelExport(&internal_5bbf90, 0x5bbf98);
extern "C" void const* const public_5bbfa6 = __AsmFindLabelExport(&internal_5bbf90, 0x5bbfa6);
extern "C" void const* const public_5bbfb5 = __AsmFindLabelExport(&internal_5bbf90, 0x5bbfb5);
extern "C" void const* const public_5bbfbd = __AsmFindLabelExport(&internal_5bbf90, 0x5bbfbd);
