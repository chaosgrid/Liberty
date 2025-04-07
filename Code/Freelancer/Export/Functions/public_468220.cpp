#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_5a13c0);

#define public_468244 _public_468244

PROC_DECLARE(0x468220, internal_468220, public_468220);
extern "C" NAKED register_t __cdecl internal_468220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x26
        mov edx, dword ptr ss : [esp+8]
        push esi
        jne public_468244
        cmp edx, dword ptr ds : [ecx+0x3CC]
        jne public_468244
        call public_45a460
        mov eax, 1
        pop esi
        ret 0xC
        public_468244 : nop
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        push edx
        push eax
        call public_5a13c0
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x468220)
    }
}

#undef public_468244
