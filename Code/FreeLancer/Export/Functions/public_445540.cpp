#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445540);

#define public_44556c _public_44556c

PROC_DECLARE(0x445540, internal_445540, public_445540);
extern "C" NAKED register_t __cdecl internal_445540()
{
    __asm
    {
        mov dl, byte ptr ss : [esp+4]
        xor eax, eax
        cmp dl, al
        mov byte ptr ds : [ecx+4], al
        je public_44556c
        mov dword ptr ds : [ecx+0x360], eax
        mov byte ptr ds : [ecx+0x368], al
        add ecx, 0x364
        push ecx
        call dword ptr ds : [public_5c60c8]
        add esp, 4
        ret 4
        public_44556c : nop
        mov dword ptr ds : [ecx+0x36C], 2
        ret 4
        UNREACHABLE_TRAP(0x445540)
    }
}

#undef public_44556c
