#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4569b0);

#define public_4576e5 _public_4576e5

PROC_DECLARE(0x4576c0, internal_4576c0, public_4576c0);
extern "C" NAKED register_t __cdecl internal_4576c0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi+0x72]
        fstp dword ptr ds : [esi+0x84]
        test al, al
        je public_4576e5
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        mov ecx, offset public_66d2d0
        call public_4569b0
        public_4576e5 : nop
        mov edx, dword ptr ds : [esi-4]
        lea ecx, ds:[esi-4]
        call dword ptr ds : [edx+0x54]
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4576c0)
    }
}

#undef public_4576e5
