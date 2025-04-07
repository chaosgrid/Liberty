#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414310);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41aadc _public_41aadc
#define public_41aae8 _public_41aae8
#define public_41aaf3 _public_41aaf3
#define public_41aaff _public_41aaff
#define public_41ab0a _public_41ab0a

PROC_DECLARE(0x41aad0, internal_41aad0, public_41aad0);
/* CHUNK of public_416580 */
extern "C" NAKED register_t __cdecl internal_41aad0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x844]
        jmp dword ptr ds : [public_41b09c]
        public_41aadc : nop
        lea ecx, ss:[ebp-0x828]
        jmp dword ptr ds : [public_41b030]
        public_41aae8 : nop
        lea ecx, ss:[ebp-0x848]
        jmp public_414310
        public_41aaf3 : nop
        lea ecx, ss:[ebp-0x820]
        jmp dword ptr ds : [public_41b038]
        public_41aaff : nop
        lea ecx, ss:[ebp-0x848]
        jmp public_414310
        public_41ab0a : nop
        mov eax, offset public_41fc34
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41aad0)
        ASM_EXPORT_ENTRY_FIRST(0x41aadc, public_41aadc)
        ASM_EXPORT_ENTRY(0x41aae8, public_41aae8)
        ASM_EXPORT_ENTRY(0x41aaf3, public_41aaf3)
        ASM_EXPORT_ENTRY(0x41aaff, public_41aaff)
        ASM_EXPORT_ENTRY_LAST(0x41ab0a, public_41ab0a)
    }
}

#undef public_41aadc
#undef public_41aae8
#undef public_41aaf3
#undef public_41aaff
#undef public_41ab0a

#pragma init_seg(compiler)
extern "C" void const* const public_41aadc = __AsmFindLabelExport(&internal_41aad0, 0x41aadc);
extern "C" void const* const public_41aae8 = __AsmFindLabelExport(&internal_41aad0, 0x41aae8);
extern "C" void const* const public_41aaf3 = __AsmFindLabelExport(&internal_41aad0, 0x41aaf3);
extern "C" void const* const public_41aaff = __AsmFindLabelExport(&internal_41aad0, 0x41aaff);
extern "C" void const* const public_41ab0a = __AsmFindLabelExport(&internal_41aad0, 0x41ab0a);
