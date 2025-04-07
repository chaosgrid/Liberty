#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b210);
CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_620c070);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624997b _public_624997b
#define public_6249983 _public_6249983
#define public_624998e _public_624998e
#define public_6249999 _public_6249999
#define public_62499a1 _public_62499a1
#define public_62499ac _public_62499ac

PROC_DECLARE(0x6249970, internal_6249970, public_6249970);
/* CHUNK of public_6230a00 */
extern "C" NAKED register_t __cdecl internal_6249970()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624997b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620c070
        public_6249983 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x5C
        jmp public_620b300
        public_624998e : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x7C
        jmp public_620b300
        public_6249999 : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_620b260
        public_62499a1 : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 0x4C
        jmp public_620b210
        public_62499ac : nop
        mov eax, offset public_6252998
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249970)
        ASM_EXPORT_ENTRY_FIRST(0x624997b, public_624997b)
        ASM_EXPORT_ENTRY(0x6249983, public_6249983)
        ASM_EXPORT_ENTRY(0x624998e, public_624998e)
        ASM_EXPORT_ENTRY(0x6249999, public_6249999)
        ASM_EXPORT_ENTRY(0x62499a1, public_62499a1)
        ASM_EXPORT_ENTRY_LAST(0x62499ac, public_62499ac)
    }
}

#undef public_624997b
#undef public_6249983
#undef public_624998e
#undef public_6249999
#undef public_62499a1
#undef public_62499ac

#pragma init_seg(compiler)
extern "C" void const* const public_624997b = __AsmFindLabelExport(&internal_6249970, 0x624997b);
extern "C" void const* const public_6249983 = __AsmFindLabelExport(&internal_6249970, 0x6249983);
extern "C" void const* const public_624998e = __AsmFindLabelExport(&internal_6249970, 0x624998e);
extern "C" void const* const public_6249999 = __AsmFindLabelExport(&internal_6249970, 0x6249999);
extern "C" void const* const public_62499a1 = __AsmFindLabelExport(&internal_6249970, 0x62499a1);
extern "C" void const* const public_62499ac = __AsmFindLabelExport(&internal_6249970, 0x62499ac);
