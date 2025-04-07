#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63945cb _public_63945cb
#define public_63945d6 _public_63945d6
#define public_63945e1 _public_63945e1

PROC_DECLARE(0x63945c0, internal_63945c0, public_63945c0);
/* CHUNK of public_62b0c40 */
extern "C" NAKED register_t __cdecl internal_63945c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_62fd570
        pop ecx
        ret 
        public_63945cb : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_62fd570
        pop ecx
        ret 
        public_63945d6 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_62fd570
        pop ecx
        ret 
        public_63945e1 : nop
        mov eax, offset public_63adae8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63945c0)
        ASM_EXPORT_ENTRY_FIRST(0x63945cb, public_63945cb)
        ASM_EXPORT_ENTRY(0x63945d6, public_63945d6)
        ASM_EXPORT_ENTRY_LAST(0x63945e1, public_63945e1)
    }
}

#undef public_63945cb
#undef public_63945d6
#undef public_63945e1

#pragma init_seg(compiler)
extern "C" void const* const public_63945cb = __AsmFindLabelExport(&internal_63945c0, 0x63945cb);
extern "C" void const* const public_63945d6 = __AsmFindLabelExport(&internal_63945c0, 0x63945d6);
extern "C" void const* const public_63945e1 = __AsmFindLabelExport(&internal_63945c0, 0x63945e1);
