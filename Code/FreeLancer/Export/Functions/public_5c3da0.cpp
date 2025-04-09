#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_579620);
CLANG_FORWARD_PROC_SYMBOL(public_57b260);
CLANG_FORWARD_PROC_SYMBOL(public_57bb30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3da8 _public_5c3da8
#define public_5c3db0 _public_5c3db0
#define public_5c3dbe _public_5c3dbe
#define public_5c3dcc _public_5c3dcc
#define public_5c3ddb _public_5c3ddb
#define public_5c3dea _public_5c3dea
#define public_5c3df9 _public_5c3df9
#define public_5c3e07 _public_5c3e07
#define public_5c3e12 _public_5c3e12

PROC_DECLARE(0x5c3da0, internal_5c3da0, public_5c3da0);
/* CHUNK of public_57b8d0 */
extern "C" NAKED register_t __cdecl internal_5c3da0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_579620
        public_5c3da8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_57b260
        public_5c3db0 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x498
        jmp public_576010
        public_5c3dbe : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C4
        jmp public_4de730
        public_5c3dcc : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4DC
        jmp dword ptr ds : [public_5c62c4]
        public_5c3ddb : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4E8
        jmp dword ptr ds : [public_5c62c4]
        public_5c3dea : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4FC
        jmp dword ptr ds : [public_5c62c4]
        public_5c3df9 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x514
        jmp public_57bb30
        public_5c3e07 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c3e12 : nop
        mov eax, offset public_5fdac8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3da0)
        ASM_EXPORT_ENTRY_FIRST(0x5c3da8, public_5c3da8)
        ASM_EXPORT_ENTRY(0x5c3db0, public_5c3db0)
        ASM_EXPORT_ENTRY(0x5c3dbe, public_5c3dbe)
        ASM_EXPORT_ENTRY(0x5c3dcc, public_5c3dcc)
        ASM_EXPORT_ENTRY(0x5c3ddb, public_5c3ddb)
        ASM_EXPORT_ENTRY(0x5c3dea, public_5c3dea)
        ASM_EXPORT_ENTRY(0x5c3df9, public_5c3df9)
        ASM_EXPORT_ENTRY(0x5c3e07, public_5c3e07)
        ASM_EXPORT_ENTRY_LAST(0x5c3e12, public_5c3e12)
    }
}

#undef public_5c3da8
#undef public_5c3db0
#undef public_5c3dbe
#undef public_5c3dcc
#undef public_5c3ddb
#undef public_5c3dea
#undef public_5c3df9
#undef public_5c3e07
#undef public_5c3e12

#pragma init_seg(compiler)
extern "C" void const* const public_5c3da8 = __AsmFindLabelExport(&internal_5c3da0, 0x5c3da8);
extern "C" void const* const public_5c3db0 = __AsmFindLabelExport(&internal_5c3da0, 0x5c3db0);
extern "C" void const* const public_5c3dbe = __AsmFindLabelExport(&internal_5c3da0, 0x5c3dbe);
extern "C" void const* const public_5c3dcc = __AsmFindLabelExport(&internal_5c3da0, 0x5c3dcc);
extern "C" void const* const public_5c3ddb = __AsmFindLabelExport(&internal_5c3da0, 0x5c3ddb);
extern "C" void const* const public_5c3dea = __AsmFindLabelExport(&internal_5c3da0, 0x5c3dea);
extern "C" void const* const public_5c3df9 = __AsmFindLabelExport(&internal_5c3da0, 0x5c3df9);
extern "C" void const* const public_5c3e07 = __AsmFindLabelExport(&internal_5c3da0, 0x5c3e07);
extern "C" void const* const public_5c3e12 = __AsmFindLabelExport(&internal_5c3da0, 0x5c3e12);
