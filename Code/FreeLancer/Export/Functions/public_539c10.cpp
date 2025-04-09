#include "FreeLancer-PCH.h"


#define public_539c3a _public_539c3a

PROC_DECLARE(0x539c10, internal_539c10, public_539c10);
extern "C" NAKED register_t __cdecl internal_539c10()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x44]
        push ebx
        mov bl, byte ptr ss : [esp+8]
        mov dl, al
        xor dl, bl
        and dl, 1
        xor dl, al
        mov byte ptr ds : [ecx+0x44], dl
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        pop ebx
        je public_539c3a
        mov dword ptr ss : [esp+4], 0
        jmp dword ptr ds : [public_5c65c4]
        public_539c3a : nop
        ret 4
        UNREACHABLE_TRAP(0x539c10)
    }
}

#undef public_539c3a
