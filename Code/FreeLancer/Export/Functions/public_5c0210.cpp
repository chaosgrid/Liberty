#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5298e0);
CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0218 _public_5c0218
#define public_5c0223 _public_5c0223

PROC_DECLARE(0x5c0210, internal_5c0210, public_5c0210);
/* CHUNK of public_527b80 */
extern "C" NAKED register_t __cdecl internal_5c0210()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_531af0
        public_5c0218 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_5298e0
        public_5c0223 : nop
        mov eax, offset public_5fa220
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0210)
        ASM_EXPORT_ENTRY_FIRST(0x5c0218, public_5c0218)
        ASM_EXPORT_ENTRY_LAST(0x5c0223, public_5c0223)
    }
}

#undef public_5c0218
#undef public_5c0223

#pragma init_seg(compiler)
extern "C" void const* const public_5c0218 = __AsmFindLabelExport(&internal_5c0210, 0x5c0218);
extern "C" void const* const public_5c0223 = __AsmFindLabelExport(&internal_5c0210, 0x5c0223);
