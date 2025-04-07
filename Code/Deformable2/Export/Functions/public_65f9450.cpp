#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9450);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f9461 _public_65f9461
#define public_65f947e _public_65f947e

PROC_DECLARE(0x65f9450, internal_65f9450, public_65f9450);
extern "C" NAKED register_t __cdecl internal_65f9450()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_65f947e
        push edi
        xor edi, edi
        public_65f9461 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6600bb0
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        add esi, 0x10
        add esp, 4
        cmp esi, ebx
        jne public_65f9461
        pop edi
        public_65f947e : nop
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65f9450)
    }
}

#undef public_65f9461
#undef public_65f947e
