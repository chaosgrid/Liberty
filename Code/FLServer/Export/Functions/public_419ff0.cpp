#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40c380);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419ffc _public_419ffc
#define public_41a007 _public_41a007
#define public_41a013 _public_41a013
#define public_41a01f _public_41a01f

PROC_DECLARE(0x419ff0, internal_419ff0, public_419ff0);
/* CHUNK of public_40bf70 */
extern "C" NAKED register_t __cdecl internal_419ff0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_41b068]
        public_419ffc : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40c380
        public_41a007 : nop
        mov ecx, dword ptr ss : [ebp-0x1588]
        jmp dword ptr ds : [public_41b880]
        public_41a013 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_41b880]
        public_41a01f : nop
        mov eax, offset public_41f168
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419ff0)
        ASM_EXPORT_ENTRY_FIRST(0x419ffc, public_419ffc)
        ASM_EXPORT_ENTRY(0x41a007, public_41a007)
        ASM_EXPORT_ENTRY(0x41a013, public_41a013)
        ASM_EXPORT_ENTRY_LAST(0x41a01f, public_41a01f)
    }
}

#undef public_419ffc
#undef public_41a007
#undef public_41a013
#undef public_41a01f

#pragma init_seg(compiler)
extern "C" void const* const public_419ffc = __AsmFindLabelExport(&internal_419ff0, 0x419ffc);
extern "C" void const* const public_41a007 = __AsmFindLabelExport(&internal_419ff0, 0x41a007);
extern "C" void const* const public_41a013 = __AsmFindLabelExport(&internal_419ff0, 0x41a013);
extern "C" void const* const public_41a01f = __AsmFindLabelExport(&internal_419ff0, 0x41a01f);
