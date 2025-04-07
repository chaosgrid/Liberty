#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434720);
CLANG_FORWARD_PROC_SYMBOL(public_57d980);

#define public_43474b _public_43474b
#define public_434782 _public_434782
#define public_43478b _public_43478b
#define public_434792 _public_434792
#define public_434796 _public_434796
#define public_4347a0 _public_4347a0
#define public_4347ae _public_4347ae
#define public_4347b7 _public_4347b7

PROC_DECLARE(0x434720, internal_434720, public_434720);
extern "C" NAKED register_t __cdecl internal_434720()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        lea eax, ss:[esp+0x14]
        push edi
        push eax
        call public_57d980
        mov ebx, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        add esp, 4
        test ebx, ebx
        mov esi, eax
        je public_43474b
        cmp ebp, 1
        jge public_43474b
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_43474b : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, ecx
        and ecx, 0xF
        shr eax, 4
        mov edi, ecx
        inc eax
        xor ecx, ecx
        mov cx, ax
        push 0
        push ecx
        push 6
        push esi
        call dword ptr ds : [public_5c6f7c]
        test eax, eax
        je public_434782
        push eax
        push esi
        call dword ptr ds : [public_5c6ee4]
        push eax
        call dword ptr ds : [public_5c6ee0]
        test eax, eax
        jne public_434792
        public_434782 : nop
        test ebx, ebx
        je public_43478b
        mov word ptr ds : [ebx], 0
        public_43478b : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_434792 : nop
        test edi, edi
        jbe public_4347a0
        public_434796 : nop
        dec edi
        movzx edx, word ptr ds : [eax]
        lea eax, ds:[eax+edx*2+2]
        jne public_434796
        public_4347a0 : nop
        test ebx, ebx
        movzx ecx, word ptr ds : [eax]
        jne public_4347ae
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        ret 
        public_4347ae : nop
        lea esi, ss:[ebp-1]
        cmp esi, ecx
        jb public_4347b7
        mov esi, ecx
        public_4347b7 : nop
        push esi
        add eax, 2
        push eax
        push ebx
        call dword ptr ds : [public_5c71c0]
        add esp, 0xC
        pop edi
        mov word ptr ds : [ebx+esi*2], 0
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x434720)
    }
}

#undef public_43474b
#undef public_434782
#undef public_43478b
#undef public_434792
#undef public_434796
#undef public_4347a0
#undef public_4347ae
#undef public_4347b7
