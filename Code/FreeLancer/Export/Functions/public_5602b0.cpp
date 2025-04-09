#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5602b0);
CLANG_FORWARD_PROC_SYMBOL(public_592230);

#define public_5602d8 _public_5602d8

PROC_DECLARE(0x5602b0, internal_5602b0, public_5602b0);
extern "C" NAKED register_t __cdecl internal_5602b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, ds:[esi+0x8C]
        call public_592230
        test al, al
        je public_5602d8
        mov edx, dword ptr ds : [esi]
        push 0
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        mov al, 1
        pop esi
        ret 4
        public_5602d8 : nop
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5602b0)
    }
}

#undef public_5602d8
