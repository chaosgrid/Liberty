#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_439b50);
CLANG_FORWARD_PROC_SYMBOL(public_43a080);
CLANG_FORWARD_PROC_SYMBOL(public_43b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_442130);
CLANG_FORWARD_PROC_SYMBOL(public_45b380);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_43b437 _public_43b437
#define public_43b46b _public_43b46b
#define public_43b478 _public_43b478
#define public_43b496 _public_43b496
#define public_43b4d2 _public_43b4d2
#define public_43b4d6 _public_43b4d6
#define public_43b500 _public_43b500
#define public_43b526 _public_43b526
#define public_43b533 _public_43b533
#define public_43b551 _public_43b551
#define public_43b560 _public_43b560

PROC_DECLARE(0x43b3e0, internal_43b3e0, public_43b3e0);
extern "C" NAKED register_t __cdecl internal_43b3e0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0x34]
        test edi, 0x3FFFFFFF
        mov dword ptr ss : [esp+0xC], edi
        je public_43b560
        push ebx
        push ebp
        mov ebp, dword ptr ds : [esi+0x38]
        xor ebx, ebx
        test ebp, 0x3FFFFFFF
        je public_43b4d6
        call public_45b380
        mov edi, dword ptr ds : [esi+0x38]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x18], edi
        call public_432240
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x10]
        je public_43b437
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43b46b
        public_43b437 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x20]
        call public_411c50
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
        push edx
        push 0x110
/*FIXUP push offset public_5caf30 @0x43b459*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
/*FIXUP push offset public_5caefc @0x43b45e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        public_43b46b : nop
        dec dword ptr ds : [eax+0xC]
        jne public_43b478
        push edi
        mov ecx, esi
        call public_43a080
        public_43b478 : nop
        cmp byte ptr ds : [esi+0x5A], bl
        jne public_43b496
        mov ecx, dword ptr ds : [public_67ecd0]
        cmp ecx, ebx
        je public_43b496
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebp
        call dword ptr ds : [edx+0x98]
/*FIXUP public_43b496 : nop
        push offset public_5caf68 @0x43b496*/
  FIXUP public_43b496 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf68
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        call public_59da10
        mov edi, eax
        add esp, 4
        cmp edi, ebx
        je public_43b4d2
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+8]
        test eax, eax
        je public_43b4d2
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ebx
        push 0x4B
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        public_43b4d2 : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_43b4d6 : nop
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x1C], edi
        call public_432240
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0x24]
        je public_43b500
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43b526
        lea ebx, ds:[ebx]
        public_43b500 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push 0x100
/*FIXUP push offset public_5caf30 @0x43b50a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caf78 @0x43b514*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        public_43b526 : nop
        dec dword ptr ds : [eax+8]
        jne public_43b533
        push edi
        mov ecx, esi
        call public_439b50
        public_43b533 : nop
        cmp byte ptr ds : [esi+0x5A], bl
        jne public_43b551
        mov ecx, dword ptr ds : [public_67ecd0]
        cmp ecx, ebx
        je public_43b551
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+0x90]
        public_43b551 : nop
        pop ebp
        mov dword ptr ds : [esi+0x34], ebx
        pop ebx
        pop edi
        pop esi
        add esp, 0xC
        jmp public_442130
        public_43b560 : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x43b3e0)
    }
}

#undef public_43b437
#undef public_43b46b
#undef public_43b478
#undef public_43b496
#undef public_43b4d2
#undef public_43b4d6
#undef public_43b500
#undef public_43b526
#undef public_43b533
#undef public_43b551
#undef public_43b560
