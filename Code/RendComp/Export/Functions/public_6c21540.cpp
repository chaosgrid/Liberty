#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c24d00);

#define public_6c2154d _public_6c2154d
#define public_6c21552 _public_6c21552
#define public_6c21579 _public_6c21579
#define public_6c21584 _public_6c21584
#define public_6c21595 _public_6c21595

PROC_DECLARE(0x6c21540, internal_6c21540, public_6c21540);
extern "C" NAKED register_t __cdecl internal_6c21540()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6c2154d
        test ecx, ecx
        jne public_6c21552
        public_6c2154d : nop
        xor al, al
        ret 0x20
        public_6c21552 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call public_6c24d00
        test eax, eax
        jge public_6c21579
        xor al, al
        ret 0x20
        public_6c21579 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6c21584
        or eax, 0xFFFFFFFF
        public_6c21584 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        jne public_6c21595
        or eax, 0xFFFFFFFF
        public_6c21595 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], eax
        mov al, 1
        ret 0x20
        UNREACHABLE_TRAP(0x6c21540)
    }
}

#undef public_6c2154d
#undef public_6c21552
#undef public_6c21579
#undef public_6c21584
#undef public_6c21595
