#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352480);
CLANG_FORWARD_PROC_SYMBOL(public_6361530);

#define public_63619f1 _public_63619f1

PROC_DECLARE(0x63619c0, internal_63619c0, public_63619c0);
extern "C" NAKED register_t __cdecl internal_63619c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
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
        jne public_63619f1
        test eax, eax
        je public_63619f1
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx]
        public_63619f1 : nop
        ret 4
        UNREACHABLE_TRAP(0x63619c0)
    }
}

#undef public_63619f1
