#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ed10);

#define public_6d4ed3c _public_6d4ed3c

PROC_DECLARE(0x6d4ed10, internal_6d4ed10, public_6d4ed10);
extern "C" NAKED register_t __cdecl internal_6d4ed10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x268], eax
        mov al, byte ptr ss : [esp+8]
        test al, al
        je public_6d4ed3c
        mov ecx, dword ptr ds : [ecx+0x348]
        mov eax, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x58]
        pop esi
        public_6d4ed3c : nop
        ret 8
        UNREACHABLE_TRAP(0x6d4ed10)
    }
}

#undef public_6d4ed3c
