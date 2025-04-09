#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e990);
CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_536170);

#define public_536183 _public_536183
#define public_53619a _public_53619a
#define public_5361a1 _public_5361a1
#define public_5361b7 _public_5361b7
#define public_5361c7 _public_5361c7
#define public_5361d3 _public_5361d3

PROC_DECLARE(0x536170, internal_536170, public_536170);
extern "C" NAKED register_t __cdecl internal_536170()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        je public_5361d3
        mov eax, dword ptr ds : [edi+0x24]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_5361a1
        public_536183 : nop
        lea eax, ds:[esi+8]
        push eax
        call public_40f080
        add esp, 4
        test eax, eax
        je public_53619a
        mov ecx, eax
        call public_40e990
        public_53619a : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x24]
        jne public_536183
        public_5361a1 : nop
        mov esi, dword ptr ds : [edi+0x44]
        cmp esi, dword ptr ds : [edi+0x48]
        je public_5361d3
        push ebx
        mov ebx, dword ptr ds : [public_5c621c]
        push ebp
        mov ebp, dword ptr ds : [public_5c65c8]
        public_5361b7 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        call ebx
        add esp, 4
        test eax, eax
        je public_5361c7
        mov ecx, eax
        call ebp
        public_5361c7 : nop
        mov eax, dword ptr ds : [edi+0x48]
        add esi, 4
        cmp esi, eax
        jne public_5361b7
        pop ebp
        pop ebx
        public_5361d3 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x536170)
    }
}

#undef public_536183
#undef public_53619a
#undef public_5361a1
#undef public_5361b7
#undef public_5361c7
#undef public_5361d3
