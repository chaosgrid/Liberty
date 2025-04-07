#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406880);
CLANG_FORWARD_PROC_SYMBOL(public_41c1a0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_42dcd0);
CLANG_FORWARD_PROC_SYMBOL(public_4f86c0);
CLANG_FORWARD_PROC_SYMBOL(public_4fd560);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4f86e7 _public_4f86e7
#define public_4f8715 _public_4f8715
#define public_4f8755 _public_4f8755
#define public_4f8798 _public_4f8798
#define public_4f87ae _public_4f87ae
#define public_4f87f7 _public_4f87f7
#define public_4f881b _public_4f881b
#define public_4f881e _public_4f881e
#define public_4f88ab _public_4f88ab
#define public_4f88eb _public_4f88eb
#define public_4f89a2 _public_4f89a2
#define public_4f89ef _public_4f89ef
#define public_4f89f1 _public_4f89f1
#define public_4f8a00 _public_4f8a00

PROC_DECLARE(0x4f86c0, internal_4f86c0, public_4f86c0);
extern "C" NAKED register_t __cdecl internal_4f86c0()
{
    __asm
    {
        sub esp, 0x84
        push ebx
        push ebp
        push esi
        push 0x26
        mov ebx, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        jne public_4f86e7
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x84
        ret 8
        public_4f86e7 : nop
        mov eax, dword ptr ds : [ebx+0x44]
        test eax, eax
        mov ebp, dword ptr ss : [esp+0x98]
        je public_4f88ab
        lea esi, ds:[eax-8]
        test esi, esi
        je public_4f88ab
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, 1
        je public_4f8715
        cmp eax, 2
        jne public_4f88ab
        public_4f8715 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_4f8755
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_4f8755
        fld dword ptr ds : [eax+0x140]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 1
        jne public_4f8755
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x84
        ret 8
        public_4f8755 : nop
        mov eax, dword ptr ds : [public_675244]
        test eax, eax
        je public_4f88ab
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0
        call dword ptr ds : [edx+0x18C]
        test eax, eax
        jne public_4f8798
        cmp dword ptr ds : [public_67524c], 2
        jne public_4f88ab
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x84
        ret 8
        public_4f8798 : nop
        cmp eax, dword ptr ds : [public_675244]
        je public_4f87ae
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x84
        ret 8
        public_4f87ae : nop
        mov eax, dword ptr ds : [ebx+0x44]
        test eax, eax
        push edi
        je public_4f881b
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f881b
        mov ecx, dword ptr ds : [ebx+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f881b
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        push 0
        lea ecx, ss:[esp+0x38]
        mov esi, eax
        call public_41c1a0
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4f87f7
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f87f7 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x10]
        push edx
        push esi
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x68]
        call public_406880
        lea esi, ss:[esp+0x64]
        jmp public_4f881e
        public_4f881b : nop
        lea esi, ds:[ebx+0x10]
        public_4f881e : nop
        lea edi, ss:[esp+0x34]
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], edx
        fsub dword ptr ss : [esp+0x18]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x68]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x64]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x18]
        pop edi
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fcomp dword ptr ds : [public_675248]
        fnstsw ax
        test ah, 0x41
        jne public_4f88ab
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x84
        ret 8
        public_4f88ab : nop
        fld dword ptr ds : [ebx+0xC]
        fcomp dword ptr ds : [public_6129c8]
        fnstsw ax
        test ah, 1
        jne public_4f8a00
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [edx+0x40]
        mov esi, eax
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4f88eb
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f88eb : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        push esi
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp]
        fchs 
        fst dword ptr ss : [esp+0x18]
        push ebp
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        call dword ptr ds : [eax+0x20]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 5
        jp public_4f8a00
        mov eax, dword ptr ds : [ebx+0x5C]
        push eax
        call public_4fd560
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x20]
        add esp, 4
        fld dword ptr ds : [eax+0x24]
        fsub dword ptr ds : [eax+0x20]
        fld dword ptr ds : [public_6129c8]
        fsubr qword ptr ds : [public_5c89b8]
        fmulp 
        fadd dword ptr ds : [eax+0x20]
        fxch 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_4f8a00
        push 0x40
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4f89a2
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+0x5C]
        lea esi, ds:[ebx+0x80]
        push esi
        push ecx
        push ebp
        push eax
        call public_42dcd0
        add esp, 0x10
        test al, al
        jne public_4f89a2
        mov al, byte ptr ds : [ebx+0x7C]
        mov dword ptr ds : [esi], 0
        pop esi
        pop ebp
        and al, 1
        pop ebx
        add esp, 0x84
        ret 8
        public_4f89a2 : nop
        fld dword ptr ss : [esp+0xC]
        fabs 
        fmul dword ptr ss : [ebp+0x80]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [ebp+0x88]
        faddp 
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        jp public_4f89ef
        fld dword ptr ss : [esp+0x10]
        fabs 
        fmul dword ptr ss : [ebp+0x90]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [ebp+0x94]
        faddp 
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        jp public_4f89ef
        mov ecx, 1
        jmp public_4f89f1
        public_4f89ef : nop
        xor ecx, ecx
        public_4f89f1 : nop
        mov al, byte ptr ds : [ebx+0x7C]
        mov dl, al
        xor dl, cl
        and dl, 1
        xor dl, al
        mov byte ptr ds : [ebx+0x7C], dl
        public_4f8a00 : nop
        mov al, byte ptr ds : [ebx+0x7C]
        pop esi
        pop ebp
        and al, 1
        pop ebx
        add esp, 0x84
        ret 8
        UNREACHABLE_TRAP(0x4f86c0)
    }
}

#undef public_4f86e7
#undef public_4f8715
#undef public_4f8755
#undef public_4f8798
#undef public_4f87ae
#undef public_4f87f7
#undef public_4f881b
#undef public_4f881e
#undef public_4f88ab
#undef public_4f88eb
#undef public_4f89a2
#undef public_4f89ef
#undef public_4f89f1
#undef public_4f8a00
