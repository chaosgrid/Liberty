#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39e50);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b810);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a74b _public_6b6a74b
#define public_6b6a753 _public_6b6a753
#define public_6b6a75e _public_6b6a75e

PROC_DECLARE(0x6b6a740, internal_6b6a740, public_6b6a740);
/* CHUNK of public_6b3afd0 */
extern "C" NAKED register_t __cdecl internal_6b6a740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6b6a092
        pop ecx
        ret 
        public_6b6a74b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6b39e50
        public_6b6a753 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6b3b810
        public_6b6a75e : nop
        mov eax, offset public_6b6ee1c
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a740)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a74b, public_6b6a74b)
        ASM_EXPORT_ENTRY(0x6b6a753, public_6b6a753)
        ASM_EXPORT_ENTRY_LAST(0x6b6a75e, public_6b6a75e)
    }
}

#undef public_6b6a74b
#undef public_6b6a753
#undef public_6b6a75e

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a74b = __AsmFindLabelExport(&internal_6b6a740, 0x6b6a74b);
extern "C" void const* const public_6b6a753 = __AsmFindLabelExport(&internal_6b6a740, 0x6b6a753);
extern "C" void const* const public_6b6a75e = __AsmFindLabelExport(&internal_6b6a740, 0x6b6a75e);
