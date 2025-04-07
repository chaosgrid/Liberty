#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31110);
CLANG_FORWARD_PROC_SYMBOL(public_6c31150);

#define public_6c2d8b1 _public_6c2d8b1
#define public_6c2d8dc _public_6c2d8dc

PROC_DECLARE(0x6c2d860, internal_6c2d860, public_6c2d860);
extern "C" NAKED register_t __cdecl internal_6c2d860()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        push esi
        je public_6c2d8dc
        test ecx, ecx
        je public_6c2d8dc
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        je public_6c2d8dc
        mov eax, dword ptr ss : [esp+0x14]
        sub eax, 0
        je public_6c2d8b1
        sub eax, 2
        je public_6c2d8b1
        dec eax
        jne public_6c2d8dc
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, eax
        and edx, 0xFFF
        cmp edx, 3
        jne public_6c2d8dc
        test ah, 0x40
        je public_6c2d8dc
        mov esi, dword ptr ss : [esp+0x20]
        test esi, esi
        je public_6c2d8dc
        call public_6c31150
        mov dword ptr ds : [esi], eax
        mov al, 1
        pop esi
        ret 0x20
        public_6c2d8b1 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, eax
        and edx, 0xFFF
        cmp edx, 3
        jne public_6c2d8dc
        test ah, 0x40
        je public_6c2d8dc
        mov esi, dword ptr ss : [esp+0x20]
        test esi, esi
        je public_6c2d8dc
        call public_6c31110
        mov dword ptr ds : [esi], eax
        mov al, 1
        pop esi
        ret 0x20
        public_6c2d8dc : nop
        xor al, al
        pop esi
        ret 0x20
        UNREACHABLE_TRAP(0x6c2d860)
    }
}

#undef public_6c2d8b1
#undef public_6c2d8dc
