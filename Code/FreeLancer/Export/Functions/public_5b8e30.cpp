#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8e41 _public_5b8e41
#define public_5b8e4c _public_5b8e4c

PROC_DECLARE(0x5b8e30, internal_5b8e30, public_5b8e30);
/* CHUNK of public_42ee70 */
extern "C" NAKED register_t __cdecl internal_5b8e30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5b8e41 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp public_4de730
        public_5b8e4c : nop
        mov eax, offset public_5f2d30
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8e30)
        ASM_EXPORT_ENTRY_FIRST(0x5b8e41, public_5b8e41)
        ASM_EXPORT_ENTRY_LAST(0x5b8e4c, public_5b8e4c)
    }
}

#undef public_5b8e41
#undef public_5b8e4c

#pragma init_seg(compiler)
extern "C" void const* const public_5b8e41 = __AsmFindLabelExport(&internal_5b8e30, 0x5b8e41);
extern "C" void const* const public_5b8e4c = __AsmFindLabelExport(&internal_5b8e30, 0x5b8e4c);
