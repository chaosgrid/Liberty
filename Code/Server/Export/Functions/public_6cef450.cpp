#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cef450);

#define public_6cef460 _public_6cef460
#define public_6cef46b _public_6cef46b
#define public_6cef46d _public_6cef46d

PROC_DECLARE(0x6cef450, internal_6cef450, public_6cef450);
extern "C" NAKED register_t __cdecl internal_6cef450()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6cef46d
        mov edx, dword ptr ss : [esp+4]
        lea ecx, ds:[ecx]
        public_6cef460 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_6cef46b
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6cef460
        public_6cef46b : nop
        cmp eax, ecx
        public_6cef46d : nop
        setne al
        ret 4
        UNREACHABLE_TRAP(0x6cef450)
    }
}

#undef public_6cef460
#undef public_6cef46b
#undef public_6cef46d
