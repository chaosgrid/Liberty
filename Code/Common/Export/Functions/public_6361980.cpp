#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352480);
CLANG_FORWARD_PROC_SYMBOL(public_6361530);

#define public_63619b1 _public_63619b1

PROC_DECLARE(0x6361980, internal_6361980, public_6361980);
extern "C" NAKED register_t __cdecl internal_6361980()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov ecx, esi
        call public_6361530
        push eax
        push edi
        mov ecx, esi
        call public_6352480
        mov ecx, dword ptr ds : [eax+8]
        dec ecx
        pop edi
        mov dword ptr ds : [eax+8], ecx
        pop esi
        jne public_63619b1
        test eax, eax
        je public_63619b1
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx]
        public_63619b1 : nop
        ret 4
        UNREACHABLE_TRAP(0x6361980)
    }
}

#undef public_63619b1
