#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5298c0);
CLANG_FORWARD_PROC_SYMBOL(public_5298e0);
CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0238 _public_5c0238
#define public_5c0243 _public_5c0243
#define public_5c024e _public_5c024e
#define public_5c0259 _public_5c0259

PROC_DECLARE(0x5c0230, internal_5c0230, public_5c0230);
/* CHUNK of public_527d10 */
extern "C" NAKED register_t __cdecl internal_5c0230()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_531af0
        public_5c0238 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_5298e0
        public_5c0243 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_5298c0
        public_5c024e : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_5298c0
        public_5c0259 : nop
        mov eax, offset public_5fa25c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0230)
        ASM_EXPORT_ENTRY_FIRST(0x5c0238, public_5c0238)
        ASM_EXPORT_ENTRY(0x5c0243, public_5c0243)
        ASM_EXPORT_ENTRY(0x5c024e, public_5c024e)
        ASM_EXPORT_ENTRY_LAST(0x5c0259, public_5c0259)
    }
}

#undef public_5c0238
#undef public_5c0243
#undef public_5c024e
#undef public_5c0259

#pragma init_seg(compiler)
extern "C" void const* const public_5c0238 = __AsmFindLabelExport(&internal_5c0230, 0x5c0238);
extern "C" void const* const public_5c0243 = __AsmFindLabelExport(&internal_5c0230, 0x5c0243);
extern "C" void const* const public_5c024e = __AsmFindLabelExport(&internal_5c0230, 0x5c024e);
extern "C" void const* const public_5c0259 = __AsmFindLabelExport(&internal_5c0230, 0x5c0259);
