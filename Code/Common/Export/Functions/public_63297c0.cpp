#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_63297f4 _public_63297f4
#define public_6329806 _public_6329806

PROC_DECLARE(0x63297c0, internal_63297c0, public_63297c0);
extern "C" NAKED register_t __cdecl internal_63297c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, ecx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov al, byte ptr ds : [edi+4]
        test al, al
        je public_63297f4
        fld dword ptr ds : [edi+0xC]
        call public_6391dae
        mov dword ptr ds : [esi], eax
        public_63297f4 : nop
        mov al, byte ptr ds : [edi+5]
        test al, al
        je public_6329806
        fld dword ptr ds : [edi+8]
        call public_6391dae
        mov dword ptr ds : [esi+4], eax
        public_6329806 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x63297c0)
    }
}

#undef public_63297f4
#undef public_6329806
