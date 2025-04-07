#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c2690);

#define public_4c26be _public_4c26be
#define public_4c26d5 _public_4c26d5

PROC_DECLARE(0x4c2690, internal_4c2690, public_4c2690);
extern "C" NAKED register_t __cdecl internal_4c2690()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x410]
        cmp al, 1
        mov eax, dword ptr ds : [ecx]
        push 0
        jne public_4c26be
        push 0x759
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov byte ptr ss : [esp+8], 0
        mov byte ptr ss : [esp+9], 0xFF
        jmp public_4c26d5
        public_4c26be : nop
        push 0x75A
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov byte ptr ss : [esp+8], 0xFF
        mov byte ptr ss : [esp+9], 0
        public_4c26d5 : nop
        mov ecx, dword ptr ds : [esi+0x410]
        mov byte ptr ss : [esp+0xB], 0xC0
        mov byte ptr ss : [esp+0xA], 0
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x348], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4c2690)
    }
}

#undef public_4c26be
#undef public_4c26d5
