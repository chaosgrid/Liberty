#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2a70);

#define public_62d2ab3 _public_62d2ab3
#define public_62d2ac1 _public_62d2ac1

PROC_DECLARE(0x62d2a70, internal_62d2a70, public_62d2a70);
extern "C" NAKED register_t __cdecl internal_62d2a70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax+0x1434]
        test edx, edx
        je public_62d2ac1
        cmp dword ptr ds : [ecx+0xC0], 0xE
        jne public_62d2ac1
        mov ecx, dword ptr ds : [ecx+0x110]
        test ecx, ecx
        je public_62d2ab3
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call dword ptr ds : [eax+8]
        mov al, 1
        ret 0x14
        public_62d2ab3 : nop
        mov ecx, dword ptr ds : [eax+0x1580]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        public_62d2ac1 : nop
        xor al, al
        ret 0x14
        UNREACHABLE_TRAP(0x62d2a70)
    }
}

#undef public_62d2ab3
#undef public_62d2ac1
