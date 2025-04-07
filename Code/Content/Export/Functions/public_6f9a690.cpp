#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f9a6eb _public_6f9a6eb
#define public_6f9a6ed _public_6f9a6ed

PROC_DECLARE(0x6f9a690, internal_6f9a690, public_6f9a690);
extern "C" NAKED register_t __cdecl internal_6f9a690()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+0x10]
        push ebx
        xor ebx, ebx
        xor eax, eax
        cmp dl, bl
        je public_6f9a6ed
        push 0x1C
        call public_6fa912a
        add esp, 4
        cmp eax, ebx
        je public_6f9a6eb
        mov byte ptr ds : [eax+4], bl
        mov byte ptr ds : [eax+5], bl
        mov byte ptr ds : [eax+6], bl
        mov byte ptr ds : [eax+7], bl
        mov byte ptr ds : [eax+8], bl
        mov byte ptr ds : [eax+0xC], bl
        mov byte ptr ds : [eax+0xD], bl
        mov byte ptr ds : [eax+0xE], bl
        mov byte ptr ds : [eax+0xF], bl
        mov byte ptr ds : [eax+0x10], bl
        mov byte ptr ds : [eax+0x11], bl
        mov byte ptr ds : [eax+0x12], bl
        mov byte ptr ds : [eax+0x13], bl
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov byte ptr ds : [eax+0x16], bl
        mov byte ptr ds : [eax+0x17], bl
        mov byte ptr ds : [eax+0x18], bl
        mov byte ptr ds : [eax+0x19], bl
        mov dword ptr ds : [eax], offset public_6fbd164
        pop ebx
        ret 
        public_6f9a6eb : nop
        xor eax, eax
        public_6f9a6ed : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f9a690)
    }
}

#undef public_6f9a6eb
#undef public_6f9a6ed
