#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a33c0);
CLANG_FORWARD_PROC_SYMBOL(public_62a33d0);
CLANG_FORWARD_PROC_SYMBOL(public_62a33e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a66b0);
CLANG_FORWARD_PROC_SYMBOL(public_62c8690);
CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d76b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d88c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d88e0);
CLANG_FORWARD_PROC_SYMBOL(public_62d8910);
CLANG_FORWARD_PROC_SYMBOL(public_62d8920);
CLANG_FORWARD_PROC_SYMBOL(public_62d8930);
CLANG_FORWARD_PROC_SYMBOL(public_62d8940);
CLANG_FORWARD_PROC_SYMBOL(public_62d8950);
CLANG_FORWARD_PROC_SYMBOL(public_62d8960);
CLANG_FORWARD_PROC_SYMBOL(public_62d93b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d93c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d9480);
CLANG_FORWARD_PROC_SYMBOL(public_62d9490);
CLANG_FORWARD_PROC_SYMBOL(public_62d94a0);
CLANG_FORWARD_PROC_SYMBOL(public_63275d0);
CLANG_FORWARD_PROC_SYMBOL(public_63275f0);

#define public_62c8293 _public_62c8293
#define public_62c8295 _public_62c8295
#define public_62c82af _public_62c82af
#define public_62c82b1 _public_62c82b1
#define public_62c8308 _public_62c8308
#define public_62c843b _public_62c843b
#define public_62c8487 _public_62c8487
#define public_62c84a2 _public_62c84a2
#define public_62c84a7 _public_62c84a7
#define public_62c85ce _public_62c85ce

PROC_DECLARE(0x62c8260, internal_62c8260, public_62c8260);
extern "C" NAKED register_t __cdecl internal_62c8260()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call public_62d20d0
        push 3
        xor ebx, ebx
        push 1
        mov ecx, esi
        mov dword ptr ds : [esi+0x2C], ebx
        call public_62d21d0
        mov dword ptr ds : [esi+0x2B0], ebx
        mov eax, dword ptr ds : [esi+0x2A0]
        cmp eax, ebx
        je public_62c8293
        add eax, 0xFFFFFFF8
        jmp public_62c8295
        public_62c8293 : nop
        xor eax, eax
        public_62c8295 : nop
        lea edi, ds:[esi+0x30]
        push eax
        mov ecx, edi
        call public_62d88e0
        mov eax, dword ptr ds : [esi+0x2A0]
        cmp eax, ebx
        je public_62c82af
        add eax, 0xFFFFFFF8
        jmp public_62c82b1
        public_62c82af : nop
        xor eax, eax
        public_62c82b1 : nop
        lea ebx, ds:[esi+0x110]
        push eax
        mov ecx, ebx
        call public_62d88e0
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62c8308
        mov ecx, dword ptr ds : [esi+0x14]
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x4C]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov ecx, edi
        call public_62d9490
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, ebx
        call public_62a33e0
        public_62c8308 : nop
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edx+0x1598]
        push eax
        mov ecx, edi
        call public_62a66b0
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx+0x159C]
        push edx
        mov ecx, edi
        call public_62a33e0
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x15A0]
        push ecx
        mov ecx, edi
        call public_62d88b0
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edx+0x15A4]
        push eax
        mov ecx, edi
        call public_62a33c0
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx+0x15A8]
        push edx
        mov ecx, edi
        call public_63275d0
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x15AC]
        push ecx
        mov ecx, edi
        call public_63275f0
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edx+0x15B0]
        push eax
        mov ecx, edi
        call public_62a33d0
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x15B4]
        mov dword ptr ds : [esi+0x2A8], ecx
        mov edx, dword ptr ds : [eax+0x15DC]
        mov dword ptr ds : [esi+0x2AC], edx
        mov eax, dword ptr ds : [eax+0x15BC]
        push eax
        mov ecx, edi
        call public_62d8910
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx+0x15B8]
        push edx
        mov ecx, edi
        call public_62d8930
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x15C0]
        push ecx
        mov ecx, edi
        call public_62d8940
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edx+0x15C4]
        push eax
        mov ecx, edi
        call public_62d8950
        mov ecx, dword ptr ds : [esi+0x24]
        xor edx, edx
        mov dl, byte ptr ds : [ecx+0x15C8]
        mov ecx, edi
        push edx
        call public_62d8960
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x15D8]
        mov edx, dword ptr ds : [eax+0x15D4]
        push ecx
        mov ecx, dword ptr ds : [eax+0x15D0]
        push edx
        mov edx, dword ptr ds : [eax+0x15CC]
        push ecx
        push edx
        lea ecx, ds:[esi+0x44]
        call public_62d76b0
        mov ecx, esi
        call public_62c8690
        mov ebp, eax
        push ebp
        mov ecx, edi
        call public_62d8920
        cmp ebp, 2
        jne public_62c843b
        fld qword ptr ds : [public_639f8e0]
        fcos 
        fchs 
        fstp dword ptr ds : [esi+0x2B8]
        public_62c843b : nop
        mov eax, dword ptr ds : [esi+0x24]
        fld dword ptr ds : [eax+0x1608]
        mov ebp, dword ptr ds : [public_6399308]
        fadd dword ptr ds : [eax+0x1604]
        fadd dword ptr ds : [eax+0x160C]
        fstp dword ptr ss : [esp+0x14]
        call ebp
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_63997d0]
        fcom dword ptr ds : [ecx+0x160C]
        fnstsw ax
        test ah, 5
        jp public_62c8487
        fstp st(0)
        mov eax, 2
        jmp public_62c84a7
        public_62c8487 : nop
        fld dword ptr ds : [ecx+0x1608]
        fadd dword ptr ds : [ecx+0x160C]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62c84a2
        xor eax, eax
        jmp public_62c84a7
        public_62c84a2 : nop
        mov eax, 1
        public_62c84a7 : nop
        push eax
        mov ecx, ebx
        call public_63275d0
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x1610]
        push ecx
        mov ecx, ebx
        call public_62a33d0
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edx+0x1614]
        push eax
        mov ecx, ebx
        call public_62d93b0
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx+0x1600]
        push edx
        mov ecx, ebx
        call public_62d9490
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x15FC]
        push ecx
        mov ecx, ebx
        call public_62d94a0
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edx+0x15E0]
        push eax
        mov ecx, ebx
        call public_62d9480
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x15F8]
        mov edx, dword ptr ds : [eax+0x15F4]
        push ecx
        mov ecx, dword ptr ds : [eax+0x15F0]
        push edx
        mov edx, dword ptr ds : [eax+0x15EC]
        push ecx
        push edx
        lea ecx, ds:[esi+0x124]
        call public_62d76b0
        mov eax, dword ptr ds : [esi+0x24]
        fld dword ptr ds : [eax+0x15E4]
        fmul dword ptr ds : [eax+0x15E8]
        fstp dword ptr ss : [esp+0x10]
        call ebp
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x24]
        push ecx
        mov ecx, ebx
        fmul dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_63997d0]
        fld dword ptr ds : [eax+0x15E4]
        fsub st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_62d93c0
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62c85ce
        mov esi, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x1580]
        mov eax, dword ptr ds : [ecx]
        add esi, 0x14FC
        call dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x18]
        fld dword ptr ds : [eax+0x20]
        push ecx
        fstp dword ptr ss : [esp+0x30]
        fxch 
        mov ecx, edi
        fchs 
        fstp dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x30]
        fchs 
        fstp dword ptr ss : [esp+0x24]
        call public_62d88c0
        public_62c85ce : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x62c8260)
    }
}

#undef public_62c8293
#undef public_62c8295
#undef public_62c82af
#undef public_62c82b1
#undef public_62c8308
#undef public_62c843b
#undef public_62c8487
#undef public_62c84a2
#undef public_62c84a7
#undef public_62c85ce
