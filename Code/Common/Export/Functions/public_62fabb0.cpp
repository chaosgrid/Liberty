#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_62fabb0);
CLANG_FORWARD_PROC_SYMBOL(public_62fcd70);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62fabd0 _public_62fabd0
#define public_62fabe0 _public_62fabe0
#define public_62fabec _public_62fabec
#define public_62fac22 _public_62fac22
#define public_62fac2a _public_62fac2a
#define public_62fac42 _public_62fac42
#define public_62fac70 _public_62fac70
#define public_62fac9a _public_62fac9a
#define public_62facbc _public_62facbc
#define public_62facc0 _public_62facc0
#define public_62face3 _public_62face3

PROC_DECLARE(0x62fabb0, internal_62fabb0, public_62fabb0);
extern "C" NAKED register_t __cdecl internal_62fabb0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [public_63fcaec]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        push esi
        push edi
        mov dword ptr ss : [esp+8], ecx
        je public_62fac42
        push ebx
        push ebp
        or ebp, 0xFFFFFFFF
        lea esp, ss:[esp]
        public_62fabd0 : nop
        mov esi, dword ptr ds : [ecx+0x10]
        xor edi, edi
        test esi, esi
        je public_62fac2a
        cmp dword ptr ds : [esi+0x40], ebp
        je public_62fac22
        mov edi, edi
        public_62fabe0 : nop
        dec dword ptr ds : [esi+0x3C]
        jne public_62fabec
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        public_62fabec : nop
        mov eax, dword ptr ds : [esi+0x40]
        inc edi
        cmp eax, ebp
        jne public_62fabe0
        test edi, edi
        je public_62fac22
        push edi
        lea ecx, ds:[esi+8]
        mov ebx, 0x100002
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x3C4
/*FIXUP push offset public_63a123c @0x62fac12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a2178 @0x62fac17*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2178
        push ebx
        call dword ptr ds : [ecx]
        add esp, 0x18
        public_62fac22 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        public_62fac2a : nop
        lea ecx, ss:[esp+0x10]
        call public_63429f0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_63fcaec]
        cmp ecx, eax
        jne public_62fabd0
        pop ebp
        pop ebx
        public_62fac42 : nop
        mov edx, dword ptr ds : [public_63fcaf8]
        test edx, edx
        mov ecx, dword ptr ds : [eax]
        mov edi, eax
        mov dword ptr ss : [esp+0xC], ecx
        je public_62facbc
        mov edx, ecx
        cmp ecx, edx
        jne public_62facbc
        mov edi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_63fcaf0]
        cmp edi, ecx
        mov esi, edi
        je public_62fac9a
        lea esp, ss:[esp]
        public_62fac70 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_63fcae8
        call public_62fcd70
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov ecx, dword ptr ds : [public_63fcaf0]
        add esp, 4
        cmp esi, ecx
        mov edi, esi
        jne public_62fac70
        mov eax, dword ptr ds : [public_63fcaec]
        public_62fac9a : nop
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [public_63fcaec]
        mov dword ptr ds : [public_63fcaf8], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_63fcaec]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 0xC
        ret 
        public_62facbc : nop
        cmp ecx, eax
        je public_62face3
        public_62facc0 : nop
        mov esi, ecx
        lea ecx, ss:[esp+0xC]
        call public_63429f0
        push esi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_63fcae8
        call public_62be400
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, edi
        jne public_62facc0
        public_62face3 : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62fabb0)
    }
}

#undef public_62fabd0
#undef public_62fabe0
#undef public_62fabec
#undef public_62fac22
#undef public_62fac2a
#undef public_62fac42
#undef public_62fac70
#undef public_62fac9a
#undef public_62facbc
#undef public_62facc0
#undef public_62face3
