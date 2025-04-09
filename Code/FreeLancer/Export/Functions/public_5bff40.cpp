#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ceb50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bff48 _public_5bff48
#define public_5bff53 _public_5bff53
#define public_5bff5c _public_5bff5c

PROC_DECLARE(0x5bff40, internal_5bff40, public_5bff40);
/* CHUNK of public_51e100 */
extern "C" NAKED register_t __cdecl internal_5bff40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4ceb50
        public_5bff48 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bff53 : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        jmp dword ptr ds : [public_5c62a4]
        public_5bff5c : nop
        mov eax, offset public_5f9f2c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bff40)
        ASM_EXPORT_ENTRY_FIRST(0x5bff48, public_5bff48)
        ASM_EXPORT_ENTRY(0x5bff53, public_5bff53)
        ASM_EXPORT_ENTRY_LAST(0x5bff5c, public_5bff5c)
    }
}

#undef public_5bff48
#undef public_5bff53
#undef public_5bff5c

#pragma init_seg(compiler)
extern "C" void const* const public_5bff48 = __AsmFindLabelExport(&internal_5bff40, 0x5bff48);
extern "C" void const* const public_5bff53 = __AsmFindLabelExport(&internal_5bff40, 0x5bff53);
extern "C" void const* const public_5bff5c = __AsmFindLabelExport(&internal_5bff40, 0x5bff5c);
