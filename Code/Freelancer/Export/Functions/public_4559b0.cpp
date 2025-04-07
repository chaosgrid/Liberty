#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_44f9d0);
CLANG_FORWARD_PROC_SYMBOL(public_4559b0);

#define public_4559f8 _public_4559f8
#define public_455a0d _public_455a0d
#define public_455a39 _public_455a39
#define public_455a58 _public_455a58
#define public_455aa2 _public_455aa2
#define public_455abc _public_455abc
#define public_455ae6 _public_455ae6
#define public_455b04 _public_455b04

PROC_DECLARE(0x4559b0, internal_4559b0, public_4559b0);
extern "C" NAKED register_t __cdecl internal_4559b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push esi
        jne public_455a58
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi+0x105]
        test al, al
        push edi
        mov edi, dword ptr ds : [public_5c60d0]
        jne public_455a39
        mov byte ptr ds : [esi+0x105], 1
        mov byte ptr ds : [esi+0x106], 1
        call edi
        test al, al
        jne public_4559f8
        cmp dword ptr ds : [esi+0xC8], 3
        jne public_4559f8
        mov eax, dword ptr ds : [public_673348]
        test eax, eax
        jne public_455a39
        public_4559f8 : nop
        call edi
        test al, al
        jne public_455a0d
        cmp dword ptr ds : [esi+0xC8], 3
        jne public_455a0d
        mov dword ptr ds : [public_673350], esi
        public_455a0d : nop
        mov edx, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        push edx
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x106]
        push edx
        mov edx, dword ptr ds : [esi+0xD0]
        push edx
        mov edx, dword ptr ds : [esi+0xCC]
        push edx
        call dword ptr ds : [eax+0xAC]
        public_455a39 : nop
        call edi
        test al, al
        pop edi
        jne public_455aa2
        cmp dword ptr ds : [esi+0xC8], 3
        jne public_455aa2
        mov eax, dword ptr ds : [public_673348]
        test eax, eax
        je public_455b04
        jmp public_455aa2
        public_455a58 : nop
        cmp eax, 1
        jne public_455b04
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi+0x105]
        test al, al
        jne public_455aa2
        mov byte ptr ds : [esi+0x105], 1
        mov byte ptr ds : [esi+0x106], 0
        mov edx, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ds : [esi+0xD0]
        push 0
        push edx
        mov edx, dword ptr ds : [esi+0xCC]
        push edx
        call dword ptr ds : [eax+0xAC]
        public_455aa2 : nop
        mov al, byte ptr ds : [esi+0x104]
        test al, al
        je public_455b04
        mov ecx, dword ptr ds : [esi+0x108]
        test ecx, ecx
        je public_455abc
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_455abc : nop
        mov al, byte ptr ds : [esi+6]
        test al, al
        mov dword ptr ds : [esi+0x108], 0
        je public_455ae6
        push 0x40400000
        push 0x3F800000
        call public_41a0f0
        push 0
        call public_41dda0
        add esp, 0xC
        public_455ae6 : nop
        mov ecx, dword ptr ds : [esi+0xC0]
        mov edx, dword ptr ds : [esi+0xB4]
        shl ecx, 6
        mov ecx, dword ptr ds : [ecx+edx]
        call public_44f9d0
        mov byte ptr ds : [esi+0x104], 0
        public_455b04 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4559b0)
    }
}

#undef public_4559f8
#undef public_455a0d
#undef public_455a39
#undef public_455a58
#undef public_455aa2
#undef public_455abc
#undef public_455ae6
#undef public_455b04
