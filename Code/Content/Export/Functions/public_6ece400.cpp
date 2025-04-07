#include "Content-PCH.h"


#define public_6ece41f _public_6ece41f

PROC_DECLARE(0x6ece400, internal_6ece400, public_6ece400);
extern "C" NAKED register_t __cdecl internal_6ece400()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6ece41f
        mov al, byte ptr ds : [ecx+8]
        test al, al
        jne public_6ece41f
        mov ax, word ptr ss : [esp+0xC]
        mov word ptr ds : [ecx+0xA], ax
        mov byte ptr ds : [ecx+8], 1
        public_6ece41f : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ece400)
    }
}

#undef public_6ece41f
