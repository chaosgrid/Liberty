#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62022b0);
CLANG_FORWARD_PROC_SYMBOL(public_6222ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6229f50);
CLANG_FORWARD_PROC_SYMBOL(public_6229f70);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62491cb _public_62491cb
#define public_62491d6 _public_62491d6
#define public_62491e1 _public_62491e1
#define public_62491ec _public_62491ec
#define public_62491f8 _public_62491f8
#define public_6249204 _public_6249204

PROC_DECLARE(0x62491c0, internal_62491c0, public_62491c0);
/* CHUNK of public_6228b90 */
extern "C" NAKED register_t __cdecl internal_62491c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x278]
        jmp public_6222ec0
        public_62491cb : nop
        lea ecx, ss:[ebp-0x284]
        jmp public_6229f70
        public_62491d6 : nop
        lea ecx, ss:[ebp-0x288]
        jmp public_62022b0
        public_62491e1 : nop
        lea ecx, ss:[ebp-0x280]
        jmp public_6229f50
        public_62491ec : nop
        lea ecx, ss:[ebp-0x260]
        jmp dword ptr ds : [public_624b02c]
        public_62491f8 : nop
        lea ecx, ss:[ebp-0x260]
        jmp dword ptr ds : [public_624b02c]
        public_6249204 : nop
        mov eax, offset public_6252194
        jmp public_6246126
        UNREACHABLE_TRAP(0x62491c0)
        ASM_EXPORT_ENTRY_FIRST(0x62491cb, public_62491cb)
        ASM_EXPORT_ENTRY(0x62491d6, public_62491d6)
        ASM_EXPORT_ENTRY(0x62491e1, public_62491e1)
        ASM_EXPORT_ENTRY(0x62491ec, public_62491ec)
        ASM_EXPORT_ENTRY(0x62491f8, public_62491f8)
        ASM_EXPORT_ENTRY_LAST(0x6249204, public_6249204)
    }
}

#undef public_62491cb
#undef public_62491d6
#undef public_62491e1
#undef public_62491ec
#undef public_62491f8
#undef public_6249204

#pragma init_seg(compiler)
extern "C" void const* const public_62491cb = __AsmFindLabelExport(&internal_62491c0, 0x62491cb);
extern "C" void const* const public_62491d6 = __AsmFindLabelExport(&internal_62491c0, 0x62491d6);
extern "C" void const* const public_62491e1 = __AsmFindLabelExport(&internal_62491c0, 0x62491e1);
extern "C" void const* const public_62491ec = __AsmFindLabelExport(&internal_62491c0, 0x62491ec);
extern "C" void const* const public_62491f8 = __AsmFindLabelExport(&internal_62491c0, 0x62491f8);
extern "C" void const* const public_6249204 = __AsmFindLabelExport(&internal_62491c0, 0x6249204);
