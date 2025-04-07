#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5afd0);

#define public_6d5afe5 _public_6d5afe5
#define public_6d5aff4 _public_6d5aff4
#define public_6d5b000 _public_6d5b000
#define public_6d5b00a _public_6d5b00a
#define public_6d5b02c _public_6d5b02c
#define public_6d5b033 _public_6d5b033

PROC_DECLARE(0x6d5afd0, internal_6d5afd0, public_6d5afd0);
extern "C" NAKED register_t __cdecl internal_6d5afd0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [edi+8], ebx
        jae public_6d5afe5
        call dword ptr ds : [public_6d64b04]
        public_6d5afe5 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x18]
        sub eax, ebx
        cmp eax, esi
        jae public_6d5aff4
        mov esi, eax
        public_6d5aff4 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        cmp esi, ebp
        mov ecx, esi
        jb public_6d5b000
        mov ecx, ebp
        public_6d5b000 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6d5b00a
        lea eax, ds:[eax+ebx*2]
        public_6d5b00a : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push eax
        call dword ptr ds : [public_6d64cb0]
        add esp, 0xC
        test eax, eax
        jne public_6d5b033
        cmp esi, ebp
        jae public_6d5b02c
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x10
        public_6d5b02c : nop
        xor eax, eax
        cmp esi, ebp
        setne al
        public_6d5b033 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6d5afd0)
    }
}

#undef public_6d5afe5
#undef public_6d5aff4
#undef public_6d5b000
#undef public_6d5b00a
#undef public_6d5b02c
#undef public_6d5b033
