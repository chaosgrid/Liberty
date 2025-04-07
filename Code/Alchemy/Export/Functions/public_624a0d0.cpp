#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208530);
CLANG_FORWARD_PROC_SYMBOL(public_6208550);
CLANG_FORWARD_PROC_SYMBOL(public_620b210);
CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620c070);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a0db _public_624a0db
#define public_624a0e3 _public_624a0e3
#define public_624a0ee _public_624a0ee
#define public_624a0f9 _public_624a0f9
#define public_624a104 _public_624a104
#define public_624a10f _public_624a10f
#define public_624a11a _public_624a11a
#define public_624a128 _public_624a128
#define public_624a130 _public_624a130
#define public_624a13b _public_624a13b

PROC_DECLARE(0x624a0d0, internal_624a0d0, public_624a0d0);
/* CHUNK of public_62399b0 */
extern "C" NAKED register_t __cdecl internal_624a0d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a0db : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620c070
        public_624a0e3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x6C
        jmp public_6208530
        public_624a0ee : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x70
        jmp public_6208550
        public_624a0f9 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x74
        jmp public_6208530
        public_624a104 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x78
        jmp public_6208530
        public_624a10f : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x7C
        jmp public_6208530
        public_624a11a : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x80
        jmp public_6208530
        public_624a128 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620b260
        public_624a130 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_620b210
        public_624a13b : nop
        mov eax, offset public_625318c
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a0d0)
        ASM_EXPORT_ENTRY_FIRST(0x624a0db, public_624a0db)
        ASM_EXPORT_ENTRY(0x624a0e3, public_624a0e3)
        ASM_EXPORT_ENTRY(0x624a0ee, public_624a0ee)
        ASM_EXPORT_ENTRY(0x624a0f9, public_624a0f9)
        ASM_EXPORT_ENTRY(0x624a104, public_624a104)
        ASM_EXPORT_ENTRY(0x624a10f, public_624a10f)
        ASM_EXPORT_ENTRY(0x624a11a, public_624a11a)
        ASM_EXPORT_ENTRY(0x624a128, public_624a128)
        ASM_EXPORT_ENTRY(0x624a130, public_624a130)
        ASM_EXPORT_ENTRY_LAST(0x624a13b, public_624a13b)
    }
}

#undef public_624a0db
#undef public_624a0e3
#undef public_624a0ee
#undef public_624a0f9
#undef public_624a104
#undef public_624a10f
#undef public_624a11a
#undef public_624a128
#undef public_624a130
#undef public_624a13b

#pragma init_seg(compiler)
extern "C" void const* const public_624a0db = __AsmFindLabelExport(&internal_624a0d0, 0x624a0db);
extern "C" void const* const public_624a0e3 = __AsmFindLabelExport(&internal_624a0d0, 0x624a0e3);
extern "C" void const* const public_624a0ee = __AsmFindLabelExport(&internal_624a0d0, 0x624a0ee);
extern "C" void const* const public_624a0f9 = __AsmFindLabelExport(&internal_624a0d0, 0x624a0f9);
extern "C" void const* const public_624a104 = __AsmFindLabelExport(&internal_624a0d0, 0x624a104);
extern "C" void const* const public_624a10f = __AsmFindLabelExport(&internal_624a0d0, 0x624a10f);
extern "C" void const* const public_624a11a = __AsmFindLabelExport(&internal_624a0d0, 0x624a11a);
extern "C" void const* const public_624a128 = __AsmFindLabelExport(&internal_624a0d0, 0x624a128);
extern "C" void const* const public_624a130 = __AsmFindLabelExport(&internal_624a0d0, 0x624a130);
extern "C" void const* const public_624a13b = __AsmFindLabelExport(&internal_624a0d0, 0x624a13b);
