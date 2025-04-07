#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);

#define public_6f2791f _public_6f2791f

PROC_DECLARE(0x6f27900, internal_6f27900, public_6f27900);
extern "C" NAKED register_t __cdecl internal_6f27900()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x114]
        test eax, eax
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        jne public_6f2791f
        mov ecx, edi
        call public_6f57c80
        mov dword ptr ds : [esi+0x114], eax
        public_6f2791f : nop
        add esi, 0x10C
        push esi
        mov ecx, edi
        call public_6f57c60
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f27900)
    }
}

#undef public_6f2791f
