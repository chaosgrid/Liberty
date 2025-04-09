#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_4c60a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c52c1 _public_5c52c1
#define public_5c52d2 _public_5c52d2
#define public_5c52da _public_5c52da
#define public_5c52e6 _public_5c52e6

PROC_DECLARE(0x5c52b0, internal_5c52b0, public_5c52b0);
/* CHUNK of public_5a7cd0 */
extern "C" NAKED register_t __cdecl internal_5c52b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5c52c1 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5c52d2 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4c60a0
        public_5c52da : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x10
        jmp dword ptr ds : [public_5c6098]
        public_5c52e6 : nop
        mov eax, offset public_5ff174
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c52b0)
        ASM_EXPORT_ENTRY_FIRST(0x5c52c1, public_5c52c1)
        ASM_EXPORT_ENTRY(0x5c52d2, public_5c52d2)
        ASM_EXPORT_ENTRY(0x5c52da, public_5c52da)
        ASM_EXPORT_ENTRY_LAST(0x5c52e6, public_5c52e6)
    }
}

#undef public_5c52c1
#undef public_5c52d2
#undef public_5c52da
#undef public_5c52e6

#pragma init_seg(compiler)
extern "C" void const* const public_5c52c1 = __AsmFindLabelExport(&internal_5c52b0, 0x5c52c1);
extern "C" void const* const public_5c52d2 = __AsmFindLabelExport(&internal_5c52b0, 0x5c52d2);
extern "C" void const* const public_5c52da = __AsmFindLabelExport(&internal_5c52b0, 0x5c52da);
extern "C" void const* const public_5c52e6 = __AsmFindLabelExport(&internal_5c52b0, 0x5c52e6);
