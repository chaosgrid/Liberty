#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2a10);

#define public_62d2a2d _public_62d2a2d
#define public_62d2a55 _public_62d2a55
#define public_62d2a63 _public_62d2a63

PROC_DECLARE(0x62d2a10, internal_62d2a10, public_62d2a10);
extern "C" NAKED register_t __cdecl internal_62d2a10()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+0x1434]
        test eax, eax
        je public_62d2a63
        mov eax, dword ptr ds : [ecx+0xC0]
        cmp eax, 2
        je public_62d2a2d
        cmp eax, 7
        jne public_62d2a63
        public_62d2a2d : nop
        mov ecx, dword ptr ds : [ecx+0x110]
        test ecx, ecx
        je public_62d2a55
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call dword ptr ds : [eax+4]
        mov al, 1
        ret 0x10
        public_62d2a55 : nop
        mov ecx, dword ptr ds : [edx+0x1580]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        public_62d2a63 : nop
        xor al, al
        ret 0x10
        UNREACHABLE_TRAP(0x62d2a10)
    }
}

#undef public_62d2a2d
#undef public_62d2a55
#undef public_62d2a63
