#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422190);

#define public_4221ca _public_4221ca
#define public_4221cc _public_4221cc

PROC_DECLARE(0x422190, internal_422190, public_422190);
extern "C" NAKED register_t __cdecl internal_422190()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov dword ptr ds : [public_6648c8], eax
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [public_6648cc]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 0x17
        push eax
        call dword ptr ds : [edx+0xF0]
        mov al, byte ptr ds : [public_6648c4]
        mov edx, dword ptr ds : [public_5c6de0]
        test al, al
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        je public_4221ca
        push 1
        jmp public_4221cc
        public_4221ca : nop
        push 0
        public_4221cc : nop
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [public_6648c8]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        ret 
        UNREACHABLE_TRAP(0x422190)
    }
}

#undef public_4221ca
#undef public_4221cc
