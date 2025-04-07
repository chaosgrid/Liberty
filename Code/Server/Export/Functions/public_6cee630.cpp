#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee630);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b160);

#define public_6cee644 _public_6cee644
#define public_6cee646 _public_6cee646

PROC_DECLARE(0x6cee630, internal_6cee630, public_6cee630);
extern "C" NAKED register_t __cdecl internal_6cee630()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_6cee644
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 3
        cmp al, 3
        je public_6cee646
        public_6cee644 : nop
        xor ecx, ecx
        public_6cee646 : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx+0x98]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0x28]
        push eax
        push esi
        call public_6d0b160
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x15C]
        mov al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6cee630)
    }
}

#undef public_6cee644
#undef public_6cee646
