#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45e3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb85b _public_5bb85b
#define public_5bb863 _public_5bb863
#define public_5bb871 _public_5bb871
#define public_5bb880 _public_5bb880
#define public_5bb88f _public_5bb88f
#define public_5bb89e _public_5bb89e
#define public_5bb8ad _public_5bb8ad

PROC_DECLARE(0x5bb850, internal_5bb850, public_5bb850);
/* CHUNK of public_46be00 */
extern "C" NAKED register_t __cdecl internal_5bb850()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bb85b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_57bbf0
        public_5bb863 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x53C
        jmp public_45e3e0
        public_5bb871 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x56C
        jmp dword ptr ds : [public_5c62c4]
        public_5bb880 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x578
        jmp dword ptr ds : [public_5c62c4]
        public_5bb88f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x584
        jmp dword ptr ds : [public_5c62c4]
        public_5bb89e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x590
        jmp dword ptr ds : [public_5c62c4]
        public_5bb8ad : nop
        mov eax, offset public_5f5b48
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb850)
        ASM_EXPORT_ENTRY_FIRST(0x5bb85b, public_5bb85b)
        ASM_EXPORT_ENTRY(0x5bb863, public_5bb863)
        ASM_EXPORT_ENTRY(0x5bb871, public_5bb871)
        ASM_EXPORT_ENTRY(0x5bb880, public_5bb880)
        ASM_EXPORT_ENTRY(0x5bb88f, public_5bb88f)
        ASM_EXPORT_ENTRY(0x5bb89e, public_5bb89e)
        ASM_EXPORT_ENTRY_LAST(0x5bb8ad, public_5bb8ad)
    }
}

#undef public_5bb85b
#undef public_5bb863
#undef public_5bb871
#undef public_5bb880
#undef public_5bb88f
#undef public_5bb89e
#undef public_5bb8ad

#pragma init_seg(compiler)
extern "C" void const* const public_5bb85b = __AsmFindLabelExport(&internal_5bb850, 0x5bb85b);
extern "C" void const* const public_5bb863 = __AsmFindLabelExport(&internal_5bb850, 0x5bb863);
extern "C" void const* const public_5bb871 = __AsmFindLabelExport(&internal_5bb850, 0x5bb871);
extern "C" void const* const public_5bb880 = __AsmFindLabelExport(&internal_5bb850, 0x5bb880);
extern "C" void const* const public_5bb88f = __AsmFindLabelExport(&internal_5bb850, 0x5bb88f);
extern "C" void const* const public_5bb89e = __AsmFindLabelExport(&internal_5bb850, 0x5bb89e);
extern "C" void const* const public_5bb8ad = __AsmFindLabelExport(&internal_5bb850, 0x5bb8ad);
