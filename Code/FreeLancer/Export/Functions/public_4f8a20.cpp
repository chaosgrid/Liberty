#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d740);
CLANG_FORWARD_PROC_SYMBOL(public_4f7af0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7db0);
CLANG_FORWARD_PROC_SYMBOL(public_4f8360);
CLANG_FORWARD_PROC_SYMBOL(public_4f8a20);
CLANG_FORWARD_PROC_SYMBOL(public_4fd560);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4f8a3d _public_4f8a3d
#define public_4f8a4f _public_4f8a4f
#define public_4f8a7e _public_4f8a7e
#define public_4f8a92 _public_4f8a92
#define public_4f8aab _public_4f8aab
#define public_4f8ae9 _public_4f8ae9
#define public_4f8b04 _public_4f8b04
#define public_4f8b23 _public_4f8b23
#define public_4f8b6d _public_4f8b6d
#define public_4f8b83 _public_4f8b83
#define public_4f8b86 _public_4f8b86
#define public_4f8bcc _public_4f8bcc

PROC_DECLARE(0x4f8a20, internal_4f8a20, public_4f8a20);
extern "C" NAKED register_t __cdecl internal_4f8a20()
{
    __asm
    {
        sub esp, 0x60
        push ebp
        push 0x26
        mov ebp, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        jne public_4f8a3d
        xor al, al
        pop ebp
        add esp, 0x60
        ret 8
        public_4f8a3d : nop
        call public_42d740
        test al, al
        je public_4f8a4f
        mov al, 1
        pop ebp
        add esp, 0x60
        ret 8
        public_4f8a4f : nop
        mov cl, byte ptr ss : [ebp+0x7C]
        test cl, 0x10
        je public_4f8a92
        fld dword ptr ss : [ebp+0x78]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4f8a7e
        fld dword ptr ss : [ebp+0x78]
        fsub dword ptr ss : [esp+0x68]
        fst dword ptr ss : [ebp+0x78]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jnp public_4f8a92
        public_4f8a7e : nop
        test cl, 4
        je public_4f8aab
        mov eax, dword ptr ss : [ebp+0x6C]
        mov ecx, dword ptr ds : [eax]
        push 4
        push eax
        call dword ptr ds : [ecx+0x2C]
        test al, al
        je public_4f8aab
        public_4f8a92 : nop
        mov ecx, ebp
        call public_4f7af0
        call public_4f7db0
        or byte ptr ss : [ebp+8], 2
        xor al, al
        pop ebp
        add esp, 0x60
        ret 8
        public_4f8aab : nop
        mov eax, dword ptr ss : [ebp+0x5C]
        push eax
        call public_4fd560
        add esp, 4
        test eax, eax
        jne public_4f8ae9
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5d9d14 @0x4f8ac1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9d14
        push 0x4C8
/*FIXUP push offset public_5d9b48 @0x4f8acb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9b48
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x4f8ad5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor al, al
        pop ebp
        add esp, 0x60
        ret 8
        public_4f8ae9 : nop
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        push ebx
        mov bl, 1
        jne public_4f8b04
        test byte ptr ss : [ebp+0x7C], bl
        jne public_4f8b04
        xor bl, bl
        mov al, bl
        pop ebx
        pop ebp
        add esp, 0x60
        ret 8
        public_4f8b04 : nop
        mov ecx, ebp
        call public_4f8360
        test al, al
        jne public_4f8b23
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+4]
        xor bl, bl
        mov al, bl
        pop ebx
        pop ebp
        add esp, 0x60
        ret 8
        public_4f8b23 : nop
        mov eax, dword ptr ss : [ebp+0x6C]
        test eax, eax
        je public_4f8bcc
        mov eax, dword ptr ss : [ebp+0x44]
        test eax, eax
        push esi
        push edi
        je public_4f8b83
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f8b83
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f8b83
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4f8b6d
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f8b6d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x10]
        push edx
        push esi
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea esi, ss:[esp+0x40]
        jmp public_4f8b86
        public_4f8b83 : nop
        lea esi, ss:[ebp+0x10]
        public_4f8b86 : nop
        mov eax, dword ptr ss : [ebp]
        lea edi, ss:[esp+0x10]
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x80]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [ebp+0x6C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0
        push eax
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [ebp+0x6C]
        mov edx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ss : [esp+0x74]
        mov ebp, dword ptr ss : [ebp+0x6C]
        mov eax, dword ptr ss : [ebp]
        push ecx
        push ebp
        call dword ptr ds : [eax+0x20]
        pop edi
        pop esi
        public_4f8bcc : nop
        mov al, bl
        pop ebx
        pop ebp
        add esp, 0x60
        ret 8
        UNREACHABLE_TRAP(0x4f8a20)
    }
}

#undef public_4f8a3d
#undef public_4f8a4f
#undef public_4f8a7e
#undef public_4f8a92
#undef public_4f8aab
#undef public_4f8ae9
#undef public_4f8b04
#undef public_4f8b23
#undef public_4f8b6d
#undef public_4f8b83
#undef public_4f8b86
#undef public_4f8bcc
