#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d29c0);

#define public_62d29fd _public_62d29fd
#define public_62d2a0b _public_62d2a0b

PROC_DECLARE(0x62d29c0, internal_62d29c0, public_62d29c0);
extern "C" NAKED register_t __cdecl internal_62d29c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax+0x1434]
        test edx, edx
        je public_62d2a0b
        cmp dword ptr ds : [ecx+0xC0], 0x11
        jne public_62d2a0b
        mov ecx, dword ptr ds : [ecx+0x110]
        test ecx, ecx
        je public_62d29fd
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call dword ptr ds : [eax]
        mov al, 1
        ret 0x10
        public_62d29fd : nop
        mov ecx, dword ptr ds : [eax+0x1580]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        public_62d2a0b : nop
        xor al, al
        ret 0x10
        UNREACHABLE_TRAP(0x62d29c0)
    }
}

#undef public_62d29fd
#undef public_62d2a0b
