#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6311a90);
CLANG_FORWARD_PROC_SYMBOL(public_6311ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6311fc0);
CLANG_FORWARD_PROC_SYMBOL(public_63123a0);
CLANG_FORWARD_PROC_SYMBOL(public_6312630);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6311ae1 _public_6311ae1
#define public_6311b13 _public_6311b13
#define public_6311b35 _public_6311b35
#define public_6311b40 _public_6311b40
#define public_6311b63 _public_6311b63

PROC_DECLARE(0x6311ab0, internal_6311ab0, public_6311ab0);
extern "C" NAKED register_t __cdecl internal_6311ab0()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [public_63fd2ac]
        mov edx, dword ptr ds : [public_63fd2b8]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6311b35
        mov edx, eax
        cmp eax, edx
        jne public_6311b35
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_63fd2b0]
        cmp edi, eax
        mov esi, edi
        je public_6311b13
        public_6311ae1 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_63fd2a8
        call public_63123a0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6311a90
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [public_63fd2b0]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6311ae1
        mov ecx, dword ptr ds : [public_63fd2ac]
        public_6311b13 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_63fd2ac]
        mov dword ptr ds : [public_63fd2b8], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_63fd2ac]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_6311b35 : nop
        cmp eax, ecx
        je public_6311b63
        lea esp, ss:[esp]
        public_6311b40 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_6312630
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_63fd2a8
        call public_6311fc0
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_6311b40
        public_6311b63 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6311ab0)
    }
}

#undef public_6311ae1
#undef public_6311b13
#undef public_6311b35
#undef public_6311b40
#undef public_6311b63
