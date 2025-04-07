#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b6d0);

#define public_6f4b671 _public_6f4b671

PROC_DECLARE(0x6f4b650, internal_6f4b650, public_6f4b650);
extern "C" NAKED register_t __cdecl internal_6f4b650()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        call public_6f1b6d0
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        je public_6f4b671
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax+4]
        public_6f4b671 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f4b650)
    }
}

#undef public_6f4b671
