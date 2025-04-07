#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf4f00);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c840);

#define public_6d0c857 _public_6d0c857
#define public_6d0c8be _public_6d0c8be
#define public_6d0c8c1 _public_6d0c8c1

PROC_DECLARE(0x6d0c840, internal_6d0c840, public_6d0c840);
extern "C" NAKED register_t __cdecl internal_6d0c840()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, 0x3FFFFFFF
        mov esi, ecx
        jne public_6d0c857
        pop edi
        xor eax, eax
        pop esi
        ret 4
        public_6d0c857 : nop
        push ebx
        push edi
        lea ecx, ds:[esi+0x34]
        xor ebx, ebx
        call public_6cf4f00
        test eax, eax
        jne public_6d0c8be
        push edi
        lea ecx, ds:[esi+0x48]
        call public_6cf4f00
        test eax, eax
        jne public_6d0c8be
        push edi
        lea ecx, ds:[esi+0x70]
        call public_6cf4f00
        test eax, eax
        jne public_6d0c8be
        push edi
        lea ecx, ds:[esi+0x98]
        call public_6cf4f00
        test eax, eax
        jne public_6d0c8be
        push edi
        lea ecx, ds:[esi+0xAC]
        call public_6cf4f00
        test eax, eax
        jne public_6d0c8be
        push edi
        lea ecx, ds:[esi+0xC0]
        call public_6cf4f00
        test eax, eax
        jne public_6d0c8be
        push edi
        lea ecx, ds:[esi+0x5C]
        call public_6cf4f00
        test eax, eax
        je public_6d0c8c1
        public_6d0c8be : nop
        mov ebx, dword ptr ds : [eax+8]
        public_6d0c8c1 : nop
        mov eax, ebx
        pop ebx
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d0c840)
    }
}

#undef public_6d0c857
#undef public_6d0c8be
#undef public_6d0c8c1
