#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428ba0);

#define public_428bbd _public_428bbd

PROC_DECLARE(0x428ba0, internal_428ba0, public_428ba0);
extern "C" NAKED register_t __cdecl internal_428ba0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_667cb0]
        test eax, eax
        je public_428bbd
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [public_667cb0]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        mov al, 1
        ret 
        public_428bbd : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x428ba0)
    }
}

#undef public_428bbd
