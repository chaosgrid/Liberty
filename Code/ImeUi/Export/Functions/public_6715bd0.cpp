#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6715bd0);
CLANG_FORWARD_PROC_SYMBOL(public_67169ca);

#define public_6715beb _public_6715beb
#define public_6715bed _public_6715bed
#define public_6715c31 _public_6715c31
#define public_6715c3d _public_6715c3d
#define public_6715c47 _public_6715c47
#define public_6715c77 _public_6715c77
#define public_6715ccb _public_6715ccb
#define public_6715ce3 _public_6715ce3
#define public_6715cf9 _public_6715cf9
#define public_6715cfd _public_6715cfd
#define public_6715d03 _public_6715d03
#define public_6715d09 _public_6715d09
#define public_6715d1c _public_6715d1c

PROC_DECLARE(0x6715bd0, internal_6715bd0, public_6715bd0);
extern "C" NAKED register_t __cdecl internal_6715bd0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_6719168]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        cmp eax, 1
        push edi
        je public_6715beb
        cmp ebp, 1
        je public_6715beb
        xor al, al
        jmp public_6715bed
        public_6715beb : nop
        mov al, 1
        public_6715bed : nop
        test al, al
        mov dword ptr ds : [public_6719168], ebp
        je public_6715d1c
        cmp dword ptr ds : [public_671916c], 0xFFFFFFFF
        jne public_6715c47
        cmp dword ptr ds : [public_671cf08], 2
        jne public_6715c3d
        cmp dword ptr ds : [public_671cefc], 5
        jb public_6715c3d
        mov eax, dword ptr ds : [public_671cf00]
        cmp eax, 1
        ja public_6715c31
        jne public_6715c3d
/*FIXUP push offset public_671cf0c @0x6715c22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671cf0c
        call dword ptr ds : [public_6717068]
        test eax, eax
        je public_6715c3d
        public_6715c31 : nop
        mov dword ptr ds : [public_671916c], 1
        jmp public_6715c47
        public_6715c3d : nop
        mov dword ptr ds : [public_671916c], 0
        public_6715c47 : nop
        mov eax, dword ptr ds : [public_671cf98]
        push eax
        call public_67169ca
        mov edi, dword ptr ds : [public_671710c]
        mov esi, eax
        test esi, esi
        je public_6715c77
        test ebp, ebp
        je public_6715c77
        mov eax, dword ptr ds : [public_671916c]
        test eax, eax
        je public_6715c77
        push 0
        push 0x22
        push 0x283
        push esi
        call edi
        public_6715c77 : nop
        push 0
        call dword ptr ds : [public_6717134]
        test eax, eax
        jl public_6715d09
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], 0
        push ecx
/*FIXUP push offset public_6717804 @0x6715c94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717804
        push 1
        push 0
/*FIXUP push offset public_6717494 @0x6715c9d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717494
        call dword ptr ds : [public_671712c]
        test eax, eax
        jl public_6715d03
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6715d03
        test ebp, ebp
        je public_6715ccb
        mov ecx, dword ptr ds : [public_671b7a8]
        test ecx, ecx
        je public_6715cfd
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        jmp public_6715cf9
        public_6715ccb : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        test eax, eax
        jl public_6715ce3
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [public_671b7a8], eax
        public_6715ce3 : nop
        mov eax, dword ptr ds : [public_671b7a8]
        test ah, 8
        jne public_6715cf9
        mov eax, dword ptr ss : [esp+0x14]
        push 8
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x28]
        public_6715cf9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_6715cfd : nop
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6715d03 : nop
        call dword ptr ds : [public_6717130]
        public_6715d09 : nop
        test esi, esi
        je public_6715d1c
        test ebp, ebp
        jne public_6715d1c
        push ebp
        push 0x21
        push 0x283
        push esi
        call edi
        public_6715d1c : nop
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6715bd0)
    }
}

#undef public_6715beb
#undef public_6715bed
#undef public_6715c31
#undef public_6715c3d
#undef public_6715c47
#undef public_6715c77
#undef public_6715ccb
#undef public_6715ce3
#undef public_6715cf9
#undef public_6715cfd
#undef public_6715d03
#undef public_6715d09
#undef public_6715d1c
