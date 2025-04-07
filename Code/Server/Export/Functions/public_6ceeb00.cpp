#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ceeb00);

#define public_6ceeb1f _public_6ceeb1f
#define public_6ceeb30 _public_6ceeb30

PROC_DECLARE(0x6ceeb00, internal_6ceeb00, public_6ceeb00);
extern "C" NAKED register_t __cdecl internal_6ceeb00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ax, word ptr ds : [edx+4]
        push esi
        mov esi, dword ptr ds : [public_6d6401c]
        cmp ax, word ptr ds : [esi]
        je public_6ceeb1f
        mov esi, dword ptr ds : [public_6d6402c]
        cmp ax, word ptr ds : [esi]
        jne public_6ceeb30
        public_6ceeb1f : nop
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+0x1B0]
        public_6ceeb30 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ceeb00)
    }
}

#undef public_6ceeb1f
#undef public_6ceeb30
