#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9c6b _public_5b9c6b
#define public_5b9c76 _public_5b9c76
#define public_5b9c81 _public_5b9c81
#define public_5b9c8c _public_5b9c8c
#define public_5b9c97 _public_5b9c97
#define public_5b9ca2 _public_5b9ca2

PROC_DECLARE(0x5b9c60, internal_5b9c60, public_5b9c60);
/* CHUNK of public_44ced0 */
extern "C" NAKED register_t __cdecl internal_5b9c60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9c6b : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9c76 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9c81 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9c8c : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9c97 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9ca2 : nop
        mov eax, offset public_5f3d38
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9c60)
        ASM_EXPORT_ENTRY_FIRST(0x5b9c6b, public_5b9c6b)
        ASM_EXPORT_ENTRY(0x5b9c76, public_5b9c76)
        ASM_EXPORT_ENTRY(0x5b9c81, public_5b9c81)
        ASM_EXPORT_ENTRY(0x5b9c8c, public_5b9c8c)
        ASM_EXPORT_ENTRY(0x5b9c97, public_5b9c97)
        ASM_EXPORT_ENTRY_LAST(0x5b9ca2, public_5b9ca2)
    }
}

#undef public_5b9c6b
#undef public_5b9c76
#undef public_5b9c81
#undef public_5b9c8c
#undef public_5b9c97
#undef public_5b9ca2

#pragma init_seg(compiler)
extern "C" void const* const public_5b9c6b = __AsmFindLabelExport(&internal_5b9c60, 0x5b9c6b);
extern "C" void const* const public_5b9c76 = __AsmFindLabelExport(&internal_5b9c60, 0x5b9c76);
extern "C" void const* const public_5b9c81 = __AsmFindLabelExport(&internal_5b9c60, 0x5b9c81);
extern "C" void const* const public_5b9c8c = __AsmFindLabelExport(&internal_5b9c60, 0x5b9c8c);
extern "C" void const* const public_5b9c97 = __AsmFindLabelExport(&internal_5b9c60, 0x5b9c97);
extern "C" void const* const public_5b9ca2 = __AsmFindLabelExport(&internal_5b9c60, 0x5b9ca2);
