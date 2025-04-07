#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fadefb _public_6fadefb
#define public_6fadf06 _public_6fadf06
#define public_6fadf11 _public_6fadf11
#define public_6fadf1c _public_6fadf1c
#define public_6fadf27 _public_6fadf27

PROC_DECLARE(0x6fadef0, internal_6fadef0, public_6fadef0);
/* CHUNK of public_6f22b00 */
extern "C" NAKED register_t __cdecl internal_6fadef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x11C]
        jmp public_6ed2c20
        public_6fadefb : nop
        mov ecx, dword ptr ss : [ebp-0x12C]
        jmp public_6ed2c20
        public_6fadf06 : nop
        mov ecx, dword ptr ss : [ebp-0x124]
        jmp public_6ed2c20
        public_6fadf11 : nop
        lea ecx, ss:[ebp-0x11C]
        jmp public_6ed2c20
        public_6fadf1c : nop
        lea ecx, ss:[ebp-0x94]
        jmp public_6ed2c20
        public_6fadf27 : nop
        mov eax, offset public_6fc2ebc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fadef0)
        ASM_EXPORT_ENTRY_FIRST(0x6fadefb, public_6fadefb)
        ASM_EXPORT_ENTRY(0x6fadf06, public_6fadf06)
        ASM_EXPORT_ENTRY(0x6fadf11, public_6fadf11)
        ASM_EXPORT_ENTRY(0x6fadf1c, public_6fadf1c)
        ASM_EXPORT_ENTRY_LAST(0x6fadf27, public_6fadf27)
    }
}

#undef public_6fadefb
#undef public_6fadf06
#undef public_6fadf11
#undef public_6fadf1c
#undef public_6fadf27

#pragma init_seg(compiler)
extern "C" void const* const public_6fadefb = __AsmFindLabelExport(&internal_6fadef0, 0x6fadefb);
extern "C" void const* const public_6fadf06 = __AsmFindLabelExport(&internal_6fadef0, 0x6fadf06);
extern "C" void const* const public_6fadf11 = __AsmFindLabelExport(&internal_6fadef0, 0x6fadf11);
extern "C" void const* const public_6fadf1c = __AsmFindLabelExport(&internal_6fadef0, 0x6fadf1c);
extern "C" void const* const public_6fadf27 = __AsmFindLabelExport(&internal_6fadef0, 0x6fadf27);
