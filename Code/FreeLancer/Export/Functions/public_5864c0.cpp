#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a13c0);

#define public_5864d7 _public_5864d7
#define public_5864e6 _public_5864e6

PROC_DECLARE(0x5864c0, internal_5864c0, public_5864c0);
extern "C" NAKED register_t __cdecl internal_5864c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x19
        je public_5864e6
        cmp eax, 0x4C
        je public_5864d7
        mov dword ptr ss : [esp+4], eax
        jmp public_5a13c0
        public_5864d7 : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x51C], eax
        xor eax, eax
        ret 0xC
        public_5864e6 : nop
        cmp word ptr ss : [esp+8], 0
        mov al, byte ptr ds : [ecx+0x518]
        setne dl
        shl dl, 3
        xor dl, al
        and dl, 8
        xor dl, al
        mov byte ptr ds : [ecx+0x518], dl
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x5864c0)
    }
}

#undef public_5864d7
#undef public_5864e6
