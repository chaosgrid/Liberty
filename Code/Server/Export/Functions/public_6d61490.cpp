#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0a080);
CLANG_FORWARD_PROC_SYMBOL(public_6d0a120);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6149e _public_6d6149e
#define public_6d614a9 _public_6d614a9
#define public_6d614b4 _public_6d614b4
#define public_6d614bf _public_6d614bf
#define public_6d614cb _public_6d614cb

PROC_DECLARE(0x6d61490, internal_6d61490, public_6d61490);
/* CHUNK of public_6d0a200 */
extern "C" NAKED register_t __cdecl internal_6d61490()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x134]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d6149e : nop
        lea ecx, ss:[ebp-0x120]
        jmp public_6d0a080
        public_6d614a9 : nop
        lea ecx, ss:[ebp-0x120]
        jmp public_6d0a120
        public_6d614b4 : nop
        lea ecx, ss:[ebp-0x120]
        jmp public_6d0a080
        public_6d614bf : nop
        lea ecx, ss:[ebp-0x84]
        jmp dword ptr ds : [public_6d64390]
        public_6d614cb : nop
        mov eax, offset public_6d720e0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61490)
        ASM_EXPORT_ENTRY_FIRST(0x6d6149e, public_6d6149e)
        ASM_EXPORT_ENTRY(0x6d614a9, public_6d614a9)
        ASM_EXPORT_ENTRY(0x6d614b4, public_6d614b4)
        ASM_EXPORT_ENTRY(0x6d614bf, public_6d614bf)
        ASM_EXPORT_ENTRY_LAST(0x6d614cb, public_6d614cb)
    }
}

#undef public_6d6149e
#undef public_6d614a9
#undef public_6d614b4
#undef public_6d614bf
#undef public_6d614cb

#pragma init_seg(compiler)
extern "C" void const* const public_6d6149e = __AsmFindLabelExport(&internal_6d61490, 0x6d6149e);
extern "C" void const* const public_6d614a9 = __AsmFindLabelExport(&internal_6d61490, 0x6d614a9);
extern "C" void const* const public_6d614b4 = __AsmFindLabelExport(&internal_6d61490, 0x6d614b4);
extern "C" void const* const public_6d614bf = __AsmFindLabelExport(&internal_6d61490, 0x6d614bf);
extern "C" void const* const public_6d614cb = __AsmFindLabelExport(&internal_6d61490, 0x6d614cb);
