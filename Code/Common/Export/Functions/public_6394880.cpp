#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394891 _public_6394891
#define public_63948a2 _public_63948a2

PROC_DECLARE(0x6394880, internal_6394880, public_6394880);
/* CHUNK of public_62bb070 */
extern "C" NAKED register_t __cdecl internal_6394880()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_6394891 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_63948a2 : nop
        mov eax, offset public_63ade64
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394880)
        ASM_EXPORT_ENTRY_FIRST(0x6394891, public_6394891)
        ASM_EXPORT_ENTRY_LAST(0x63948a2, public_63948a2)
    }
}

#undef public_6394891
#undef public_63948a2

#pragma init_seg(compiler)
extern "C" void const* const public_6394891 = __AsmFindLabelExport(&internal_6394880, 0x6394891);
extern "C" void const* const public_63948a2 = __AsmFindLabelExport(&internal_6394880, 0x63948a2);
