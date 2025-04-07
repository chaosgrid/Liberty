#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_630b290);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639620b _public_639620b
#define public_6396219 _public_6396219
#define public_6396227 _public_6396227
#define public_6396232 _public_6396232
#define public_639623e _public_639623e
#define public_639624a _public_639624a

PROC_DECLARE(0x6396200, internal_6396200, public_6396200);
/* CHUNK of public_630ad30 */
extern "C" NAKED register_t __cdecl internal_6396200()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263860
        public_639620b : nop
        mov eax, dword ptr ss : [ebp-0x15FC]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6396219 : nop
        mov ecx, dword ptr ss : [ebp-0x15FC]
        add ecx, 0x14
        jmp public_630b290
        public_6396227 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263310
        public_6396232 : nop
        mov ecx, dword ptr ss : [ebp-0x15FC]
        jmp dword ptr ds : [public_63991ac]
        public_639623e : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_63991ac]
        public_639624a : nop
        mov eax, offset public_63b008c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396200)
        ASM_EXPORT_ENTRY_FIRST(0x639620b, public_639620b)
        ASM_EXPORT_ENTRY(0x6396219, public_6396219)
        ASM_EXPORT_ENTRY(0x6396227, public_6396227)
        ASM_EXPORT_ENTRY(0x6396232, public_6396232)
        ASM_EXPORT_ENTRY(0x639623e, public_639623e)
        ASM_EXPORT_ENTRY_LAST(0x639624a, public_639624a)
    }
}

#undef public_639620b
#undef public_6396219
#undef public_6396227
#undef public_6396232
#undef public_639623e
#undef public_639624a

#pragma init_seg(compiler)
extern "C" void const* const public_639620b = __AsmFindLabelExport(&internal_6396200, 0x639620b);
extern "C" void const* const public_6396219 = __AsmFindLabelExport(&internal_6396200, 0x6396219);
extern "C" void const* const public_6396227 = __AsmFindLabelExport(&internal_6396200, 0x6396227);
extern "C" void const* const public_6396232 = __AsmFindLabelExport(&internal_6396200, 0x6396232);
extern "C" void const* const public_639623e = __AsmFindLabelExport(&internal_6396200, 0x639623e);
extern "C" void const* const public_639624a = __AsmFindLabelExport(&internal_6396200, 0x639624a);
