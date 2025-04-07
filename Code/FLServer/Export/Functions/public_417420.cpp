#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417420);

#define public_41743c _public_41743c
#define public_417477 _public_417477
#define public_417480 _public_417480
#define public_417487 _public_417487
#define public_417490 _public_417490
#define public_41749a _public_41749a
#define public_4174a8 _public_4174a8
#define public_4174b1 _public_4174b1

PROC_DECLARE(0x417420, internal_417420, public_417420);
extern "C" NAKED register_t __cdecl internal_417420()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        test ebx, ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        je public_41743c
        cmp ebp, 1
        jge public_41743c
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_41743c : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, eax
        shr eax, 4
        and esi, 0xF
        inc eax
        push 0
        movzx eax, ax
        push eax
        push 6
        push edi
        call dword ptr ds : [public_41b13c]
        test eax, eax
        je public_417477
        push eax
        push edi
        call dword ptr ds : [public_41b140]
        test eax, eax
        je public_417477
        push eax
        call dword ptr ds : [public_41b144]
        test eax, eax
        jne public_417487
        public_417477 : nop
        test ebx, ebx
        je public_417480
        mov word ptr ds : [ebx], 0
        public_417480 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_417487 : nop
        test esi, esi
        jbe public_41749a
        nop 
        lea esp, ss:[esp]
        public_417490 : nop
        dec esi
        movzx ecx, word ptr ds : [eax]
        lea eax, ds:[eax+ecx*2+2]
        jne public_417490
        public_41749a : nop
        test ebx, ebx
        movzx ecx, word ptr ds : [eax]
        jne public_4174a8
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        ret 
        public_4174a8 : nop
        lea esi, ss:[ebp-1]
        cmp esi, ecx
        jb public_4174b1
        mov esi, ecx
        public_4174b1 : nop
        push esi
        add eax, 2
        push eax
        push ebx
        call dword ptr ds : [public_41b990]
        add esp, 0xC
        pop edi
        mov word ptr ds : [ebx+esi*2], 0
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x417420)
    }
}

#undef public_41743c
#undef public_417477
#undef public_417480
#undef public_417487
#undef public_417490
#undef public_41749a
#undef public_4174a8
#undef public_4174b1
