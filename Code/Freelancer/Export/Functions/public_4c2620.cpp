#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c2620);

#define public_4c264e _public_4c264e
#define public_4c2665 _public_4c2665

PROC_DECLARE(0x4c2620, internal_4c2620, public_4c2620);
extern "C" NAKED register_t __cdecl internal_4c2620()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x414]
        cmp al, 1
        mov eax, dword ptr ds : [ecx]
        push 0
        jne public_4c264e
        push 0x759
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov byte ptr ss : [esp+8], 0
        mov byte ptr ss : [esp+9], 0xFF
        jmp public_4c2665
        public_4c264e : nop
        push 0x75A
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov byte ptr ss : [esp+8], 0xFF
        mov byte ptr ss : [esp+9], 0
        public_4c2665 : nop
        mov ecx, dword ptr ds : [esi+0x414]
        mov byte ptr ss : [esp+0xB], 0xC0
        mov byte ptr ss : [esp+0xA], 0
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x348], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4c2620)
    }
}

#undef public_4c264e
#undef public_4c2665
