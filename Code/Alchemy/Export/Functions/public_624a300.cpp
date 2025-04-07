#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207470);
CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_621bcf0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a308 _public_624a308
#define public_624a313 _public_624a313
#define public_624a31e _public_624a31e
#define public_624a329 _public_624a329
#define public_624a331 _public_624a331
#define public_624a33c _public_624a33c
#define public_624a347 _public_624a347
#define public_624a34f _public_624a34f
#define public_624a35a _public_624a35a

PROC_DECLARE(0x624a300, internal_624a300, public_624a300);
/* CHUNK of public_623b820 */
extern "C" NAKED register_t __cdecl internal_624a300()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_621bcf0
        public_624a308 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x6C
        jmp public_62084b0
        public_624a313 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x70
        jmp public_62084b0
        public_624a31e : nop
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a329 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_6207470
        public_624a331 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a33c : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a347 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_6207470
        public_624a34f : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a35a : nop
        mov eax, offset public_62533c8
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a300)
        ASM_EXPORT_ENTRY_FIRST(0x624a308, public_624a308)
        ASM_EXPORT_ENTRY(0x624a313, public_624a313)
        ASM_EXPORT_ENTRY(0x624a31e, public_624a31e)
        ASM_EXPORT_ENTRY(0x624a329, public_624a329)
        ASM_EXPORT_ENTRY(0x624a331, public_624a331)
        ASM_EXPORT_ENTRY(0x624a33c, public_624a33c)
        ASM_EXPORT_ENTRY(0x624a347, public_624a347)
        ASM_EXPORT_ENTRY(0x624a34f, public_624a34f)
        ASM_EXPORT_ENTRY_LAST(0x624a35a, public_624a35a)
    }
}

#undef public_624a308
#undef public_624a313
#undef public_624a31e
#undef public_624a329
#undef public_624a331
#undef public_624a33c
#undef public_624a347
#undef public_624a34f
#undef public_624a35a

#pragma init_seg(compiler)
extern "C" void const* const public_624a308 = __AsmFindLabelExport(&internal_624a300, 0x624a308);
extern "C" void const* const public_624a313 = __AsmFindLabelExport(&internal_624a300, 0x624a313);
extern "C" void const* const public_624a31e = __AsmFindLabelExport(&internal_624a300, 0x624a31e);
extern "C" void const* const public_624a329 = __AsmFindLabelExport(&internal_624a300, 0x624a329);
extern "C" void const* const public_624a331 = __AsmFindLabelExport(&internal_624a300, 0x624a331);
extern "C" void const* const public_624a33c = __AsmFindLabelExport(&internal_624a300, 0x624a33c);
extern "C" void const* const public_624a347 = __AsmFindLabelExport(&internal_624a300, 0x624a347);
extern "C" void const* const public_624a34f = __AsmFindLabelExport(&internal_624a300, 0x624a34f);
extern "C" void const* const public_624a35a = __AsmFindLabelExport(&internal_624a300, 0x624a35a);
