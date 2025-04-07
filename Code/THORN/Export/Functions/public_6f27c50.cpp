#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f27c10);
CLANG_FORWARD_PROC_SYMBOL(public_6f27c50);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b250);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b440);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f27c92 _public_6f27c92
#define public_6f27c98 _public_6f27c98
#define public_6f27cbf _public_6f27cbf
#define public_6f27cc1 _public_6f27cc1
#define public_6f27cce _public_6f27cce
#define public_6f27cf9 _public_6f27cf9
#define public_6f27cff _public_6f27cff
#define public_6f27d26 _public_6f27d26
#define public_6f27d28 _public_6f27d28
#define public_6f27d33 _public_6f27d33
#define public_6f27d5e _public_6f27d5e
#define public_6f27d64 _public_6f27d64
#define public_6f27d80 _public_6f27d80
#define public_6f27db6 _public_6f27db6
#define public_6f27dbb _public_6f27dbb
#define public_6f27e30 _public_6f27e30
#define public_6f27e5a _public_6f27e5a
#define public_6f27e72 _public_6f27e72
#define public_6f27e75 _public_6f27e75
#define public_6f27ea0 _public_6f27ea0
#define public_6f27ea6 _public_6f27ea6
#define public_6f27ec9 _public_6f27ec9
#define public_6f27ef4 _public_6f27ef4
#define public_6f27efa _public_6f27efa
#define public_6f27f1e _public_6f27f1e
#define public_6f27f49 _public_6f27f49
#define public_6f27f4f _public_6f27f4f
#define public_6f27f73 _public_6f27f73
#define public_6f27f9e _public_6f27f9e
#define public_6f27fa4 _public_6f27fa4
#define public_6f27fc8 _public_6f27fc8
#define public_6f27fd5 _public_6f27fd5

PROC_DECLARE(0x6f27c50, internal_6f27c50, public_6f27c50);
extern "C" NAKED register_t __cdecl internal_6f27c50()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ds : [public_6f5e1b8]
        push edi
        push ebx
        mov dword ptr ss : [esp+0x10], 0
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f27c92
        push ebx
        call public_6f4b900
        push esi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f27c98
        public_6f27c92 : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f27c98 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f27cce
        push esi
        call public_6f4b540
        fcomp qword ptr ds : [public_6f5a228]
        add esp, 4
        fnstsw ax
        test ah, 0x44
        jnp public_6f27cbf
        mov al, 1
        jmp public_6f27cc1
        public_6f27cbf : nop
        xor al, al
        public_6f27cc1 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov byte ptr ds : [ecx], al
        mov dword ptr ss : [esp+0xC], 1
        public_6f27cce : nop
        mov esi, dword ptr ds : [public_6f5e1bc]
        push ebx
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f27cf9
        push ebx
        call public_6f4b900
        push esi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f27cff
        public_6f27cf9 : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f27cff : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f27d33
        push esi
        call public_6f4b540
        fcomp qword ptr ds : [public_6f5a228]
        add esp, 4
        fnstsw ax
        test ah, 0x44
        jnp public_6f27d26
        mov al, 1
        jmp public_6f27d28
        public_6f27d26 : nop
        xor al, al
        public_6f27d28 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov byte ptr ds : [edx+1], al
        or dword ptr ss : [esp+0xC], 2
        public_6f27d33 : nop
        mov esi, dword ptr ds : [public_6f5e1c0]
        push ebx
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f27d5e
        push ebx
        call public_6f4b900
        push esi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov edi, eax
        jmp public_6f27d64
        public_6f27d5e : nop
        mov edi, dword ptr ds : [public_6f61de8]
        public_6f27d64 : nop
        push edi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f27e72
        mov esi, 1
        lea ebx, ds:[ebx]
        public_6f27d80 : nop
        push edi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f27db6
        push edi
        call public_6f4b900
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], 0
        fild qword ptr ss : [esp+0x1C]
        push ecx
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        call public_6f4b250
        jmp public_6f27dbb
        public_6f27db6 : nop
        mov eax, dword ptr ds : [public_6f61de8]
        public_6f27dbb : nop
        push eax
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f27e5a
        inc esi
        cmp esi, 3
        jbe public_6f27d80
        push 0x3F800000
        push edi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x24]
        push 0x40000000
        push edi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x2C]
        push 0x40400000
        push edi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        add esp, 0x24
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x30]
        call public_6f22d50
        fld dword ptr ss : [esp+0x2C]
        public_6f27e30 : nop
        fld dword ptr ss : [esp+0x24]
        call public_6f57f16
        fld dword ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+4], eax
        call public_6f57f16
        mov dword ptr ds : [edi+8], eax
        call public_6f57f16
        mov dword ptr ds : [edi+0xC], eax
        or dword ptr ss : [esp+0xC], 4
        jmp public_6f27e75
        public_6f27e5a : nop
        fld dword ptr ds : [public_6f5a1d4]
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        jmp public_6f27e30
        public_6f27e72 : nop
        mov edi, dword ptr ss : [ebp+0xC]
        public_6f27e75 : nop
        mov esi, dword ptr ds : [public_6f5e1c4]
        push ebx
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f27ea0
        push ebx
        call public_6f4b900
        push esi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f27ea6
        public_6f27ea0 : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f27ea6 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f27ec9
        push esi
        call public_6f4b540
        add esp, 4
        call public_6f57f16
        mov dword ptr ds : [edi+0x10], eax
        or dword ptr ss : [esp+0xC], 8
        public_6f27ec9 : nop
        mov esi, dword ptr ds : [public_6f5e1c8]
        push ebx
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f27ef4
        push ebx
        call public_6f4b900
        push esi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f27efa
        public_6f27ef4 : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f27efa : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f27f1e
        push esi
        call public_6f4b540
        fstp dword ptr ds : [edi+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 4
        or eax, 0x10
        mov dword ptr ss : [esp+0xC], eax
        public_6f27f1e : nop
        mov esi, dword ptr ds : [public_6f5e1cc]
        push ebx
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f27f49
        push ebx
        call public_6f4b900
        push esi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f27f4f
        public_6f27f49 : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f27f4f : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f27f73
        push esi
        call public_6f4b540
        fstp dword ptr ds : [edi+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 4
        or eax, 0x20
        mov dword ptr ss : [esp+0xC], eax
        public_6f27f73 : nop
        mov esi, dword ptr ds : [public_6f5e1d0]
        push ebx
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f27f9e
        push ebx
        call public_6f4b900
        push esi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f27fa4
        public_6f27f9e : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f27fa4 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f27fc8
        push esi
        call public_6f4b540
        fstp dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 4
        or eax, 0x40
        mov dword ptr ss : [esp+0xC], eax
        public_6f27fc8 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6f27fd5
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        public_6f27fd5 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f27c50)
    }
}

#undef public_6f27c92
#undef public_6f27c98
#undef public_6f27cbf
#undef public_6f27cc1
#undef public_6f27cce
#undef public_6f27cf9
#undef public_6f27cff
#undef public_6f27d26
#undef public_6f27d28
#undef public_6f27d33
#undef public_6f27d5e
#undef public_6f27d64
#undef public_6f27d80
#undef public_6f27db6
#undef public_6f27dbb
#undef public_6f27e30
#undef public_6f27e5a
#undef public_6f27e72
#undef public_6f27e75
#undef public_6f27ea0
#undef public_6f27ea6
#undef public_6f27ec9
#undef public_6f27ef4
#undef public_6f27efa
#undef public_6f27f1e
#undef public_6f27f49
#undef public_6f27f4f
#undef public_6f27f73
#undef public_6f27f9e
#undef public_6f27fa4
#undef public_6f27fc8
#undef public_6f27fd5
