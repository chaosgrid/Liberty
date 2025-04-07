#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403bd0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_403bed _public_403bed
#define public_403bf9 _public_403bf9

PROC_DECLARE(0x403bd0, internal_403bd0, public_403bd0);
/* CHUNK of public_402e80 */
extern "C" NAKED register_t __cdecl internal_403bd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_403bf9
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_403bed
        cmp cl, 0xFF
        je public_403bed
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_403bf9
        public_403bed : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_403bf9 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x403bd0)
        ASM_EXPORT_ENTRY_FIRST(0x403bed, public_403bed)
        ASM_EXPORT_ENTRY_LAST(0x403bf9, public_403bf9)
    }
}

#undef public_403bed
#undef public_403bf9

#pragma init_seg(compiler)
extern "C" void const* const public_403bed = __AsmFindLabelExport(&internal_403bd0, 0x403bed);
extern "C" void const* const public_403bf9 = __AsmFindLabelExport(&internal_403bd0, 0x403bf9);
