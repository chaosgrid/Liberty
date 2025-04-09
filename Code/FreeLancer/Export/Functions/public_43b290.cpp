#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_439590);
CLANG_FORWARD_PROC_SYMBOL(public_4397a0);
CLANG_FORWARD_PROC_SYMBOL(public_43b290);
CLANG_FORWARD_PROC_SYMBOL(public_43b6b0);
CLANG_FORWARD_PROC_SYMBOL(public_43bab0);

#define public_43b2c1 _public_43b2c1
#define public_43b2da _public_43b2da
#define public_43b303 _public_43b303
#define public_43b337 _public_43b337
#define public_43b36e _public_43b36e
#define public_43b391 _public_43b391
#define public_43b3b8 _public_43b3b8
#define public_43b3bd _public_43b3bd

PROC_DECLARE(0x43b290, internal_43b290, public_43b290);
extern "C" NAKED register_t __cdecl internal_43b290()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x5A]
        test al, al
        push edi
        mov dword ptr ds : [esi+0x34], ebx
        jne public_43b2c1
        mov ecx, dword ptr ds : [public_67ecd0]
        test ecx, ecx
        je public_43b2c1
        mov edx, dword ptr ds : [public_673344]
        mov eax, dword ptr ds : [ecx]
        push edx
        push ebx
        call dword ptr ds : [eax+0x8C]
        public_43b2c1 : nop
        push ebx
        mov ecx, esi
        call public_439590
        mov edi, eax
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jne public_43b2da
        push ebx
        mov ecx, esi
        call public_4397a0
        public_43b2da : nop
        inc dword ptr ds : [edi+8]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x14]
        lea edi, ds:[esi+0x20]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], ebx
        call public_432240
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0x24]
        je public_43b303
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43b337
        public_43b303 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x1C]
        call public_411c50
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
        push edx
        push 0x100
/*FIXUP push offset public_5caf30 @0x43b325*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
/*FIXUP push offset public_5caf78 @0x43b32a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        public_43b337 : nop
        mov edx, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [edx+0x48]
        test ebp, ebp
        jne public_43b3bd
        mov eax, dword ptr ds : [public_67ecd0]
        test eax, eax
        je public_43b36e
/*FIXUP push offset public_5cb068 @0x43b34a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb068
        push 0x405
/*FIXUP push offset public_5caf30 @0x43b354*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x43b35e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_43b36e : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], ebx
        call public_432240
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0x24]
        je public_43b391
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43b3b8
        public_43b391 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x100
/*FIXUP push offset public_5caf30 @0x43b3a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caf78 @0x43b3ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        public_43b3b8 : nop
        mov eax, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax+4]
        public_43b3bd : nop
        push ebp
        mov ecx, esi
        call public_43bab0
        push ebp
        mov ecx, esi
        call public_43b6b0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x43b290)
    }
}

#undef public_43b2c1
#undef public_43b2da
#undef public_43b303
#undef public_43b337
#undef public_43b36e
#undef public_43b391
#undef public_43b3b8
#undef public_43b3bd
