#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639897b _public_639897b
#define public_6398986 _public_6398986
#define public_6398991 _public_6398991

PROC_DECLARE(0x6398970, internal_6398970, public_6398970);
/* CHUNK of public_6379b50 */
extern "C" NAKED register_t __cdecl internal_6398970()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x40]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639897b : nop
        mov eax, dword ptr ss : [ebp-0x40]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6398986 : nop
        mov eax, dword ptr ss : [ebp-0x40]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6398991 : nop
        mov eax, offset public_63b2fd8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398970)
        ASM_EXPORT_ENTRY_FIRST(0x639897b, public_639897b)
        ASM_EXPORT_ENTRY(0x6398986, public_6398986)
        ASM_EXPORT_ENTRY_LAST(0x6398991, public_6398991)
    }
}

#undef public_639897b
#undef public_6398986
#undef public_6398991

#pragma init_seg(compiler)
extern "C" void const* const public_639897b = __AsmFindLabelExport(&internal_6398970, 0x639897b);
extern "C" void const* const public_6398986 = __AsmFindLabelExport(&internal_6398970, 0x6398986);
extern "C" void const* const public_6398991 = __AsmFindLabelExport(&internal_6398970, 0x6398991);
