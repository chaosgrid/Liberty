#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a1c30);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_62fae00);
CLANG_FORWARD_PROC_SYMBOL(public_62fce70);
CLANG_FORWARD_PROC_SYMBOL(public_62fceb0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);

#define public_62fae20 _public_62fae20
#define public_62fae30 _public_62fae30
#define public_62fae3c _public_62fae3c
#define public_62fae72 _public_62fae72
#define public_62fae7a _public_62fae7a
#define public_62fae90 _public_62fae90
#define public_62faea0 _public_62faea0
#define public_62faeb0 _public_62faeb0
#define public_62faebc _public_62faebc
#define public_62faef2 _public_62faef2
#define public_62faefa _public_62faefa
#define public_62faf14 _public_62faf14
#define public_62faf8d _public_62faf8d
#define public_62faf91 _public_62faf91
#define public_62fafb8 _public_62fafb8
#define public_62fb035 _public_62fb035
#define public_62fb040 _public_62fb040
#define public_62fb067 _public_62fb067

PROC_DECLARE(0x62fae00, internal_62fae00, public_62fae00);
extern "C" NAKED register_t __cdecl internal_62fae00()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ds : [public_63fca9c]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        or ebp, 0xFFFFFFFF
        cmp ecx, eax
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        je public_62fae90
        lea esp, ss:[esp]
        public_62fae20 : nop
        mov esi, dword ptr ds : [ecx+0x10]
        xor edi, edi
        test esi, esi
        je public_62fae7a
        cmp dword ptr ds : [esi+0x40], ebp
        je public_62fae72
        mov edi, edi
        public_62fae30 : nop
        dec dword ptr ds : [esi+0x3C]
        jne public_62fae3c
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        public_62fae3c : nop
        mov eax, dword ptr ds : [esi+0x40]
        inc edi
        cmp eax, ebp
        jne public_62fae30
        test edi, edi
        je public_62fae72
        push edi
        lea ecx, ds:[esi+8]
        mov ebx, 0x100002
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x12A8
/*FIXUP push offset public_63a123c @0x62fae62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a2218 @0x62fae67*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2218
        push ebx
        call dword ptr ds : [ecx]
        add esp, 0x18
        public_62fae72 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        public_62fae7a : nop
        lea ecx, ss:[esp+0x14]
        call public_63429f0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_63fca9c]
        cmp ecx, eax
        jne public_62fae20
        public_62fae90 : nop
        mov edx, dword ptr ds : [public_63fca88]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x18], ecx
        je public_62faf14
        public_62faea0 : nop
        mov esi, dword ptr ds : [ecx+0x10]
        xor edi, edi
        test esi, esi
        je public_62faefa
        cmp dword ptr ds : [esi+0x40], ebp
        je public_62faef2
        mov edi, edi
        public_62faeb0 : nop
        dec dword ptr ds : [esi+0x3C]
        jne public_62faebc
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        public_62faebc : nop
        mov eax, dword ptr ds : [esi+0x40]
        inc edi
        cmp eax, ebp
        jne public_62faeb0
        test edi, edi
        je public_62faef2
        push edi
        lea ecx, ds:[esi+8]
        mov ebx, 0x100002
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x12BC
/*FIXUP push offset public_63a123c @0x62faee2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a21c8 @0x62faee7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a21c8
        push ebx
        call dword ptr ds : [ecx]
        add esp, 0x18
        public_62faef2 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        public_62faefa : nop
        lea ecx, ss:[esp+0x18]
        call public_63429f0
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [public_63fca88]
        jne public_62faea0
        mov eax, dword ptr ds : [public_63fca9c]
        public_62faf14 : nop
        mov ecx, dword ptr ds : [public_63fcaa8]
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        xor edi, edi
        cmp ecx, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_62faf8d
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, offset public_63fca98
        call public_632c410
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ecx]
        jne public_62faf8d
        mov ecx, dword ptr ds : [public_63fca9c]
        cmp esi, ecx
        jne public_62faf8d
        mov ecx, dword ptr ds : [ecx+4]
        push ecx
        mov ecx, offset public_63fca98
        call public_62fce70
        mov eax, dword ptr ds : [public_63fcaa0]
        mov edx, dword ptr ds : [public_63fca9c]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [public_63fca9c]
        mov dword ptr ds : [public_63fcaa8], edi
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_63fca9c]
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, offset public_63fca98
        mov dword ptr ds : [eax+8], eax
        call public_632c410
        jmp public_62fafb8
        public_62faf8d : nop
        cmp eax, esi
        je public_62fafb8
        public_62faf91 : nop
        push edi
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_62a1c30
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, offset public_63fca98
        call public_62be400
        cmp dword ptr ss : [esp+0x10], esi
        jne public_62faf91
        public_62fafb8 : nop
        mov esi, dword ptr ds : [public_63fca88]
        cmp dword ptr ds : [public_63fca94], edi
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], ecx
        je public_62fb035
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, offset public_63fca84
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_62fb035
        mov eax, dword ptr ds : [public_63fca88]
        cmp esi, eax
        jne public_62fb035
        mov eax, dword ptr ds : [eax+4]
        push eax
        mov ecx, offset public_63fca84
        call public_62fceb0
        mov ecx, dword ptr ds : [public_63fca88]
        mov edx, dword ptr ds : [public_63fca8c]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [public_63fca88]
        mov dword ptr ds : [public_63fca94], edi
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_63fca88]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, offset public_63fca84
        call public_632c410
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        public_62fb035 : nop
        cmp ecx, esi
        je public_62fb067
        lea esp, ss:[esp]
        public_62fb040 : nop
        push edi
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_62a1c30
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, offset public_63fca84
        call public_62be400
        cmp dword ptr ss : [esp+0x10], esi
        jne public_62fb040
        public_62fb067 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62fae00)
    }
}

#undef public_62fae20
#undef public_62fae30
#undef public_62fae3c
#undef public_62fae72
#undef public_62fae7a
#undef public_62fae90
#undef public_62faea0
#undef public_62faeb0
#undef public_62faebc
#undef public_62faef2
#undef public_62faefa
#undef public_62faf14
#undef public_62faf8d
#undef public_62faf91
#undef public_62fafb8
#undef public_62fb035
#undef public_62fb040
#undef public_62fb067
