#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cdfc0);

#define public_4cdff7 _public_4cdff7

PROC_DECLARE(0x4cdfc0, internal_4cdfc0, public_4cdfc0);
extern "C" NAKED register_t __cdecl internal_4cdfc0()
{
    __asm
    {
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_4cdff7
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ds : [eax+0x94]
        push esi
        mov esi, dword ptr ds : [eax+0x84]
        mov esi, dword ptr ds : [eax+esi*4+0x40]
        push esi
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0xFC]
        pop esi
        public_4cdff7 : nop
        ret 4
        UNREACHABLE_TRAP(0x4cdfc0)
    }
}

#undef public_4cdff7
