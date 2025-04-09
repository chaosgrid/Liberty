#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_4d7400);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be159 _public_5be159
#define public_5be164 _public_5be164
#define public_5be16c _public_5be16c
#define public_5be177 _public_5be177
#define public_5be185 _public_5be185
#define public_5be193 _public_5be193
#define public_5be1a1 _public_5be1a1
#define public_5be1af _public_5be1af

PROC_DECLARE(0x5be150, internal_5be150, public_5be150);
/* CHUNK of public_4d62d0 */
extern "C" NAKED register_t __cdecl internal_5be150()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0xC]
        jmp dword ptr ds : [public_5c62a4]
        public_5be159 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x28
        jmp public_5154f0
        public_5be164 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_4c8630
        public_5be16c : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x38
        jmp public_59fa50
        public_5be177 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x364
        jmp public_4d7400
        public_5be185 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x390
        jmp public_4d7400
        public_5be193 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x3BC
        jmp public_4d7400
        public_5be1a1 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x3E8
        jmp public_4d7400
        public_5be1af : nop
        mov eax, offset public_5f8520
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be150)
        ASM_EXPORT_ENTRY_FIRST(0x5be159, public_5be159)
        ASM_EXPORT_ENTRY(0x5be164, public_5be164)
        ASM_EXPORT_ENTRY(0x5be16c, public_5be16c)
        ASM_EXPORT_ENTRY(0x5be177, public_5be177)
        ASM_EXPORT_ENTRY(0x5be185, public_5be185)
        ASM_EXPORT_ENTRY(0x5be193, public_5be193)
        ASM_EXPORT_ENTRY(0x5be1a1, public_5be1a1)
        ASM_EXPORT_ENTRY_LAST(0x5be1af, public_5be1af)
    }
}

#undef public_5be159
#undef public_5be164
#undef public_5be16c
#undef public_5be177
#undef public_5be185
#undef public_5be193
#undef public_5be1a1
#undef public_5be1af

#pragma init_seg(compiler)
extern "C" void const* const public_5be159 = __AsmFindLabelExport(&internal_5be150, 0x5be159);
extern "C" void const* const public_5be164 = __AsmFindLabelExport(&internal_5be150, 0x5be164);
extern "C" void const* const public_5be16c = __AsmFindLabelExport(&internal_5be150, 0x5be16c);
extern "C" void const* const public_5be177 = __AsmFindLabelExport(&internal_5be150, 0x5be177);
extern "C" void const* const public_5be185 = __AsmFindLabelExport(&internal_5be150, 0x5be185);
extern "C" void const* const public_5be193 = __AsmFindLabelExport(&internal_5be150, 0x5be193);
extern "C" void const* const public_5be1a1 = __AsmFindLabelExport(&internal_5be150, 0x5be1a1);
extern "C" void const* const public_5be1af = __AsmFindLabelExport(&internal_5be150, 0x5be1af);
