#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f48770);

#define public_6f48790 _public_6f48790
#define public_6f4879b _public_6f4879b
#define public_6f487a8 _public_6f487a8
#define public_6f487b3 _public_6f487b3

PROC_DECLARE(0x6f48770, internal_6f48770, public_6f48770);
extern "C" NAKED register_t __cdecl internal_6f48770()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xF0]
        mov ecx, dword ptr ds : [ecx+0xF4]
        push ebx
        push esi
        xor al, al
        cmp edx, ecx
        push edi
        je public_6f487b3
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x10]
        lea ecx, ds:[ecx]
        public_6f48790 : nop
        cmp dword ptr ds : [edx], edi
        jne public_6f4879b
        mov ebx, dword ptr ds : [edx+4]
        cmp ebx, dword ptr ds : [esi]
        je public_6f487a8
        public_6f4879b : nop
        add edx, 0x10
        cmp edx, ecx
        jne public_6f48790
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6f487a8 : nop
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov al, 1
        public_6f487b3 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f48770)
    }
}

#undef public_6f48790
#undef public_6f4879b
#undef public_6f487a8
#undef public_6f487b3
