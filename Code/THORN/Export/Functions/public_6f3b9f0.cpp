#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3ba0d _public_6f3ba0d
#define public_6f3ba16 _public_6f3ba16

PROC_DECLARE(0x6f3b9f0, internal_6f3b9f0, public_6f3b9f0);
/* CHUNK of public_6f38e20 */
extern "C" NAKED register_t __cdecl internal_6f3b9f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f3ba16
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6f3ba0d
        cmp cl, 0xFF
        je public_6f3ba0d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f3ba16
        public_6f3ba0d : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f3ba16 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3b9f0)
        ASM_EXPORT_ENTRY_FIRST(0x6f3ba0d, public_6f3ba0d)
        ASM_EXPORT_ENTRY_LAST(0x6f3ba16, public_6f3ba16)
    }
}

#undef public_6f3ba0d
#undef public_6f3ba16

#pragma init_seg(compiler)
extern "C" void const* const public_6f3ba0d = __AsmFindLabelExport(&internal_6f3b9f0, 0x6f3ba0d);
extern "C" void const* const public_6f3ba16 = __AsmFindLabelExport(&internal_6f3b9f0, 0x6f3ba16);
