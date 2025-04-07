#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f98c32 _public_6f98c32
#define public_6f98c3d _public_6f98c3d
#define public_6f98c3f _public_6f98c3f
#define public_6f98c60 _public_6f98c60
#define public_6f98c6b _public_6f98c6b

PROC_DECLARE(0x6f98c20, internal_6f98c20, public_6f98c20);
extern "C" NAKED register_t __cdecl internal_6f98c20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        push esi
        lea esi, ds:[ecx+8]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6f98c3d
        mov edx, dword ptr ss : [esp+8]
        public_6f98c32 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f98c3f
        add eax, 4
        cmp eax, ecx
        jne public_6f98c32
        public_6f98c3d : nop
        mov eax, ecx
        public_6f98c3f : nop
        cmp eax, ecx
        jne public_6f98c6b
        lea eax, ss:[esp+8]
        push eax
        push 1
        push ecx
        mov ecx, esi
        call public_6f937c0
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6f98c6b
        mov ecx, dword ptr ss : [esp+8]
        public_6f98c60 : nop
        cmp dword ptr ds : [eax], ecx
        je public_6f98c6b
        add eax, 4
        cmp eax, esi
        jne public_6f98c60
        public_6f98c6b : nop
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f98c20)
    }
}

#undef public_6f98c32
#undef public_6f98c3d
#undef public_6f98c3f
#undef public_6f98c60
#undef public_6f98c6b
