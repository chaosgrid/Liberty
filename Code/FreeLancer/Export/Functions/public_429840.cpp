#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429840);

#define public_42984f _public_42984f
#define public_429866 _public_429866
#define public_4298a0 _public_4298a0
#define public_4298a2 _public_4298a2

PROC_DECLARE(0x429840, internal_429840, public_429840);
extern "C" NAKED register_t __cdecl internal_429840()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dl, byte ptr ds : [esi+0xC]
        test dl, 1
        je public_42984f
        xor al, al
        pop esi
        ret 
        public_42984f : nop
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        push edi
        je public_4298a0
        mov eax, dword ptr ds : [public_5c6d44]
        cmp dword ptr ds : [eax], 0
        jne public_429866
        test dl, 4
        jne public_4298a0
        public_429866 : nop
        xor al, al
        test dl, 8
        je public_4298a2
        test dl, 4
        je public_4298a2
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        cmp eax, 0xFFFFFFFF
        je public_4298a0
        mov eax, dword ptr ds : [public_5c6d44]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB0]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x78]
        mov ecx, dword ptr ds : [esi+0x14]
        add ecx, eax
        cmp ecx, edi
        pop edi
        setb al
        pop esi
        ret 
        public_4298a0 : nop
        mov al, 1
        public_4298a2 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x429840)
    }
}

#undef public_42984f
#undef public_429866
#undef public_4298a0
#undef public_4298a2
