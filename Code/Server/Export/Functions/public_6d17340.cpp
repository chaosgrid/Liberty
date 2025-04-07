#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ed10);

#define public_6d17390 _public_6d17390
#define public_6d173c2 _public_6d173c2
#define public_6d173d8 _public_6d173d8

PROC_DECLARE(0x6d17340, internal_6d17340, public_6d17340);
extern "C" NAKED register_t __cdecl internal_6d17340()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        jbe public_6d173d8
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, ecx
        jae public_6d173d8
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6d173d8
        call dword ptr ds : [public_6d641c0]
        test al, al
        mov eax, dword ptr ds : [public_6d90260]
        jne public_6d17390
        mov edx, esi
        imul edx, 0x418
        mov ecx, dword ptr ds : [edx+eax-0x24]
        test ecx, ecx
        je public_6d173d8
        public_6d17390 : nop
        imul esi, 0x418
        lea ecx, ds:[esi+eax-0x418]
        test dword ptr ds : [ecx+0x3EC], 0x3FFFFFFF
        je public_6d173d8
        fld dword ptr ss : [esp+8]
        fcomp qword ptr ds : [public_6d65538]
        fnstsw ax
        test ah, 5
        jp public_6d173c2
        mov dword ptr ss : [esp+8], 0
        public_6d173c2 : nop
        mov eax, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr ss : [esp+8], 1
        mov dword ptr ss : [esp+4], eax
        jmp public_6d4ed10
        public_6d173d8 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d17340)
    }
}

#undef public_6d17390
#undef public_6d173c2
#undef public_6d173d8
