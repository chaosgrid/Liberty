#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4abfb0);
CLANG_FORWARD_PROC_SYMBOL(public_4b0920);
CLANG_FORWARD_PROC_SYMBOL(public_4b1c00);
CLANG_FORWARD_PROC_SYMBOL(public_4b1d20);
CLANG_FORWARD_PROC_SYMBOL(public_4b1f30);
CLANG_FORWARD_PROC_SYMBOL(public_58a530);
CLANG_FORWARD_PROC_SYMBOL(public_5b3770);

#define public_4b1d42 _public_4b1d42
#define public_4b1d51 _public_4b1d51
#define public_4b1d72 _public_4b1d72
#define public_4b1d8e _public_4b1d8e
#define public_4b1d90 _public_4b1d90
#define public_4b1de6 _public_4b1de6
#define public_4b1e16 _public_4b1e16
#define public_4b1e27 _public_4b1e27
#define public_4b1e42 _public_4b1e42
#define public_4b1ee1 _public_4b1ee1
#define public_4b1ef9 _public_4b1ef9
#define public_4b1f02 _public_4b1f02
#define public_4b1f1d _public_4b1f1d

PROC_DECLARE(0x4b1d20, internal_4b1d20, public_4b1d20);
extern "C" NAKED register_t __cdecl internal_4b1d20()
{
    __asm
    {
        sub esp, 0x84
        push esi
        mov esi, dword ptr ss : [esp+0x8C]
        cmp esi, 0x534
        push edi
        mov edi, ecx
        jne public_4b1d42
        lea edx, ss:[esp+8]
        push edx
        push 1
        jmp public_4b1d51
        public_4b1d42 : nop
        cmp esi, 0x657
        jne public_4b1d72
        lea edx, ss:[esp+8]
        push edx
        push 8
        public_4b1d51 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_4b1f1d
        public_4b1d72 : nop
        fild dword ptr ss : [esp+0x94]
        push ebp
        fcomp qword ptr ds : [public_5c8b68]
        fnstsw ax
        test ah, 0x41
        jne public_4b1d8e
        mov ebp, 1
        jmp public_4b1d90
        public_4b1d8e : nop
        xor ebp, ebp
        public_4b1d90 : nop
        push esi
        mov dword ptr ss : [esp+0x9C], ebp
        call public_5b3770
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_4b1e42
        fild dword ptr ss : [esp+0x98]
        mov eax, dword ptr ds : [esi]
        fst dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        fstp dword ptr ds : [esi+0x10]
        mov ecx, esi
        call dword ptr ds : [eax]
        fld dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_4b1de6
        fld dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi]
        fst dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        fstp dword ptr ds : [esi+0x14]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        public_4b1de6 : nop
        mov al, byte ptr ds : [edi+0x32E]
        test al, al
        mov ecx, dword ptr ss : [esp+0x9C]
        mov esi, dword ptr ds : [edi+ecx*4+0x61C]
        jne public_4b1e42
        test ebp, ebp
        push 0x40
        je public_4b1e16
        mov eax, dword ptr ds : [public_67eca8]
        lea edx, ss:[esp+0x14]
        push edx
        push 0x65F
        push eax
        jmp public_4b1e27
        public_4b1e16 : nop
        mov edx, dword ptr ds : [public_67eca8]
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0x67A
        push edx
        public_4b1e27 : nop
        call public_4347e0
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
        push 0
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0x1D
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        public_4b1e42 : nop
        cmp dword ptr ss : [esp+0x94], 0x57E
        jne public_4b1f02
        mov eax, dword ptr ds : [edi+0x330]
        xor edx, edx
        mov dl, byte ptr ds : [edi+0x334]
        mov ecx, edi
        push edx
        push eax
        call public_4b1c00
        test al, al
        je public_4b1ef9
        push 0x40
        lea ecx, ss:[esp+0x14]
        push ecx
        mov byte ptr ds : [edi+0x84D], 1
        mov edx, dword ptr ds : [public_67eca8]
        push 0x778
        push edx
        call public_4347e0
        mov ecx, dword ptr ds : [edi+0x4E8]
        add esp, 0x10
        lea eax, ss:[esp+0x10]
        push eax
        call public_58a530
        mov edx, dword ptr ds : [public_67eca8]
        push 0x40
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0x779
        push edx
        call public_4347e0
        mov ecx, dword ptr ds : [edi+0x4EC]
        add esp, 0x10
        lea eax, ss:[esp+0x10]
        push eax
        call public_58a530
        mov ecx, edi
        call public_4abfb0
        lea esi, ds:[edi+0x5AC]
        mov ebp, 0xE
        public_4b1ee1 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x24
        call dword ptr ds : [edx+0xA8]
        add esi, 4
        dec ebp
        jne public_4b1ee1
        jmp public_4b1f02
        public_4b1ef9 : nop
        push 0xFFFFFFFF
        mov ecx, edi
        call public_4b0920
        public_4b1f02 : nop
        fild dword ptr ss : [esp+0x98]
        mov eax, dword ptr ss : [esp+0x94]
        push ecx
        mov ecx, edi
        fstp dword ptr ss : [esp]
        push eax
        call public_4b1f30
        pop ebp
        public_4b1f1d : nop
        pop edi
        pop esi
        add esp, 0x84
        ret 0xC
        UNREACHABLE_TRAP(0x4b1d20)
    }
}

#undef public_4b1d42
#undef public_4b1d51
#undef public_4b1d72
#undef public_4b1d8e
#undef public_4b1d90
#undef public_4b1de6
#undef public_4b1e16
#undef public_4b1e27
#undef public_4b1e42
#undef public_4b1ee1
#undef public_4b1ef9
#undef public_4b1f02
#undef public_4b1f1d
