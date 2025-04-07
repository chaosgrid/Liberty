#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280b30);
CLANG_FORWARD_PROC_SYMBOL(public_629abd0);
CLANG_FORWARD_PROC_SYMBOL(public_629b110);
CLANG_FORWARD_PROC_SYMBOL(public_62a1230);
CLANG_FORWARD_PROC_SYMBOL(public_62a9190);
CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_PROC_SYMBOL(public_62b5980);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393888 _public_6393888
#define public_6393896 _public_6393896
#define public_639389e _public_639389e
#define public_63938ac _public_63938ac
#define public_63938ba _public_63938ba
#define public_63938c2 _public_63938c2
#define public_63938d0 _public_63938d0

PROC_DECLARE(0x6393880, internal_6393880, public_6393880);
/* CHUNK of public_629a860 */
extern "C" NAKED register_t __cdecl internal_6393880()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62af440
        public_6393888 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x9C
        jmp public_6280b30
        public_6393896 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62b5980
        public_639389e : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xE4
        jmp public_629b110
        public_63938ac : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x144
        jmp public_62a1230
        public_63938ba : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62a9190
        public_63938c2 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x1C0
        jmp public_629abd0
        public_63938d0 : nop
        mov eax, offset public_63acb30
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393880)
        ASM_EXPORT_ENTRY_FIRST(0x6393888, public_6393888)
        ASM_EXPORT_ENTRY(0x6393896, public_6393896)
        ASM_EXPORT_ENTRY(0x639389e, public_639389e)
        ASM_EXPORT_ENTRY(0x63938ac, public_63938ac)
        ASM_EXPORT_ENTRY(0x63938ba, public_63938ba)
        ASM_EXPORT_ENTRY(0x63938c2, public_63938c2)
        ASM_EXPORT_ENTRY_LAST(0x63938d0, public_63938d0)
    }
}

#undef public_6393888
#undef public_6393896
#undef public_639389e
#undef public_63938ac
#undef public_63938ba
#undef public_63938c2
#undef public_63938d0

#pragma init_seg(compiler)
extern "C" void const* const public_6393888 = __AsmFindLabelExport(&internal_6393880, 0x6393888);
extern "C" void const* const public_6393896 = __AsmFindLabelExport(&internal_6393880, 0x6393896);
extern "C" void const* const public_639389e = __AsmFindLabelExport(&internal_6393880, 0x639389e);
extern "C" void const* const public_63938ac = __AsmFindLabelExport(&internal_6393880, 0x63938ac);
extern "C" void const* const public_63938ba = __AsmFindLabelExport(&internal_6393880, 0x63938ba);
extern "C" void const* const public_63938c2 = __AsmFindLabelExport(&internal_6393880, 0x63938c2);
extern "C" void const* const public_63938d0 = __AsmFindLabelExport(&internal_6393880, 0x63938d0);
