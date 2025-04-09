#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41bd10);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_43abf0);
CLANG_FORWARD_PROC_SYMBOL(public_43c630);
CLANG_FORWARD_PROC_SYMBOL(public_449e60);

#define public_43ac25 _public_43ac25
#define public_43ac4c _public_43ac4c
#define public_43ac5b _public_43ac5b
#define public_43ac8d _public_43ac8d
#define public_43ac95 _public_43ac95
#define public_43aca1 _public_43aca1
#define public_43acc3 _public_43acc3
#define public_43acd2 _public_43acd2

PROC_DECLARE(0x43abf0, internal_43abf0, public_43abf0);
extern "C" NAKED register_t __cdecl internal_43abf0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+8]
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        lea esi, ds:[edi+0xC]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_432240
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [edi+0x10]
        je public_43ac25
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43ac4c
        public_43ac25 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x110
/*FIXUP push offset public_5caf30 @0x43ac35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x43ac3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        public_43ac4c : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_43ac5b
        push ebx
        mov ecx, eax
        call public_43c630
        public_43ac5b : nop
        mov eax, dword ptr ds : [ebx+8]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_41bd10
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x18]
        je public_43ac8d
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_43ac8d
        lea eax, ss:[esp+0xC]
        jmp public_43ac95
        public_43ac8d : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_43ac95 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x10]
        je public_43aca1
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43acc3
        public_43aca1 : nop
        push ecx
        push 0x110
/*FIXUP push offset public_5caf30 @0x43aca7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x43acb1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        public_43acc3 : nop
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_43acd2
        push ebx
        mov ecx, eax
        call public_449e60
        public_43acd2 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x43abf0)
    }
}

#undef public_43ac25
#undef public_43ac4c
#undef public_43ac5b
#undef public_43ac8d
#undef public_43ac95
#undef public_43aca1
#undef public_43acc3
#undef public_43acd2
