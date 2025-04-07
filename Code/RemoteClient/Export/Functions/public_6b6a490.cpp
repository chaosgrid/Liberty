#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a49b _public_6b6a49b
#define public_6b6a4a6 _public_6b6a4a6
#define public_6b6a4b1 _public_6b6a4b1
#define public_6b6a4bc _public_6b6a4bc
#define public_6b6a4c7 _public_6b6a4c7
#define public_6b6a4d2 _public_6b6a4d2

PROC_DECLARE(0x6b6a490, internal_6b6a490, public_6b6a490);
/* CHUNK of public_6b313d0 */
extern "C" NAKED register_t __cdecl internal_6b6a490()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6b6a092
        pop ecx
        ret 
        public_6b6a49b : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6b6a092
        pop ecx
        ret 
        public_6b6a4a6 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6b6a092
        pop ecx
        ret 
        public_6b6a4b1 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6b6a092
        pop ecx
        ret 
        public_6b6a4bc : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6b6a092
        pop ecx
        ret 
        public_6b6a4c7 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6b6a092
        pop ecx
        ret 
        public_6b6a4d2 : nop
        mov eax, offset public_6b6eb48
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a490)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a49b, public_6b6a49b)
        ASM_EXPORT_ENTRY(0x6b6a4a6, public_6b6a4a6)
        ASM_EXPORT_ENTRY(0x6b6a4b1, public_6b6a4b1)
        ASM_EXPORT_ENTRY(0x6b6a4bc, public_6b6a4bc)
        ASM_EXPORT_ENTRY(0x6b6a4c7, public_6b6a4c7)
        ASM_EXPORT_ENTRY_LAST(0x6b6a4d2, public_6b6a4d2)
    }
}

#undef public_6b6a49b
#undef public_6b6a4a6
#undef public_6b6a4b1
#undef public_6b6a4bc
#undef public_6b6a4c7
#undef public_6b6a4d2

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a49b = __AsmFindLabelExport(&internal_6b6a490, 0x6b6a49b);
extern "C" void const* const public_6b6a4a6 = __AsmFindLabelExport(&internal_6b6a490, 0x6b6a4a6);
extern "C" void const* const public_6b6a4b1 = __AsmFindLabelExport(&internal_6b6a490, 0x6b6a4b1);
extern "C" void const* const public_6b6a4bc = __AsmFindLabelExport(&internal_6b6a490, 0x6b6a4bc);
extern "C" void const* const public_6b6a4c7 = __AsmFindLabelExport(&internal_6b6a490, 0x6b6a4c7);
extern "C" void const* const public_6b6a4d2 = __AsmFindLabelExport(&internal_6b6a490, 0x6b6a4d2);
