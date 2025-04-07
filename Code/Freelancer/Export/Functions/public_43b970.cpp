#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_439610);
CLANG_FORWARD_PROC_SYMBOL(public_43a140);
CLANG_FORWARD_PROC_SYMBOL(public_43b970);
CLANG_FORWARD_PROC_SYMBOL(public_45b380);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43b9a8 _public_43b9a8
#define public_43b9ce _public_43b9ce
#define public_43b9fd _public_43b9fd
#define public_43ba0a _public_43ba0a
#define public_43ba24 _public_43ba24
#define public_43ba28 _public_43ba28
#define public_43ba4b _public_43ba4b
#define public_43ba87 _public_43ba87

PROC_DECLARE(0x43b970, internal_43b970, public_43b970);
extern "C" NAKED register_t __cdecl internal_43b970()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        call public_45b380
        mov ebp, dword ptr ds : [esi+0x38]
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x14], ebp
        call public_432240
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp eax, ecx
        je public_43b9a8
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43b9ce
        public_43b9a8 : nop
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        push 0x110
/*FIXUP push offset public_5caf30 @0x43b9b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x43b9bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        public_43b9ce : nop
        dec dword ptr ds : [eax+0xC]
        jne public_43ba28
        push edi
        push ebp
        mov ecx, esi
        call public_439610
        mov edi, eax
        cmp byte ptr ds : [esi+0x5A], bl
        jne public_43b9fd
        mov ecx, dword ptr ds : [public_67ecd0]
        cmp ecx, ebx
        je public_43b9fd
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        push ebp
        call dword ptr ds : [edx+0xA0]
        public_43b9fd : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, ebx
        je public_43ba0a
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_43ba0a : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp ebp, ebx
        mov dword ptr ds : [edi+8], ebx
        je public_43ba24
        mov ecx, ebp
        call public_43a140
        push ebp
        call public_5b7e1d
        add esp, 4
        public_43ba24 : nop
        mov dword ptr ds : [edi+4], ebx
        pop edi
        public_43ba28 : nop
        cmp byte ptr ds : [esi+0x5A], bl
        jne public_43ba4b
        mov ecx, dword ptr ds : [public_67ecd0]
        cmp ecx, ebx
        je public_43ba4b
        mov edx, dword ptr ds : [public_673344]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call dword ptr ds : [eax+0x98]
/*FIXUP public_43ba4b : nop
        push offset public_5caf68 @0x43ba4b*/
  FIXUP public_43ba4b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf68
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        call public_59da10
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_43ba87
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test eax, eax
        je public_43ba87
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ebx
        push 0x4B
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        public_43ba87 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x43b970)
    }
}

#undef public_43b9a8
#undef public_43b9ce
#undef public_43b9fd
#undef public_43ba0a
#undef public_43ba24
#undef public_43ba28
#undef public_43ba4b
#undef public_43ba87
