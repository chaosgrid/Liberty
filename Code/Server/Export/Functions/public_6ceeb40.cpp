#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ceeb40);

#define public_6ceeb5f _public_6ceeb5f
#define public_6ceeb76 _public_6ceeb76

PROC_DECLARE(0x6ceeb40, internal_6ceeb40, public_6ceeb40);
extern "C" NAKED register_t __cdecl internal_6ceeb40()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ax, word ptr ds : [edx+8]
        push esi
        mov esi, dword ptr ds : [public_6d6401c]
        cmp ax, word ptr ds : [esi]
        je public_6ceeb5f
        mov esi, dword ptr ds : [public_6d6402c]
        cmp ax, word ptr ds : [esi]
        jne public_6ceeb76
        public_6ceeb5f : nop
        mov edx, dword ptr ds : [edx+4]
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [edx+0x80]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+0x1B0]
        public_6ceeb76 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ceeb40)
    }
}

#undef public_6ceeb5f
#undef public_6ceeb76
