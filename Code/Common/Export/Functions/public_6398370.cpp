#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639837b _public_639837b
#define public_6398386 _public_6398386
#define public_6398391 _public_6398391

PROC_DECLARE(0x6398370, internal_6398370, public_6398370);
/* CHUNK of public_6360c80 */
extern "C" NAKED register_t __cdecl internal_6398370()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639837b : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6398386 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6398391 : nop
        mov eax, offset public_63b2868
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398370)
        ASM_EXPORT_ENTRY_FIRST(0x639837b, public_639837b)
        ASM_EXPORT_ENTRY(0x6398386, public_6398386)
        ASM_EXPORT_ENTRY_LAST(0x6398391, public_6398391)
    }
}

#undef public_639837b
#undef public_6398386
#undef public_6398391

#pragma init_seg(compiler)
extern "C" void const* const public_639837b = __AsmFindLabelExport(&internal_6398370, 0x639837b);
extern "C" void const* const public_6398386 = __AsmFindLabelExport(&internal_6398370, 0x6398386);
extern "C" void const* const public_6398391 = __AsmFindLabelExport(&internal_6398370, 0x6398391);
