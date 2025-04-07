#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2a00);
CLANG_FORWARD_PROC_SYMBOL(public_6efba30);
CLANG_FORWARD_PROC_SYMBOL(public_6efc2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6efc7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6efc7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f243d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f26150);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac94c);

#define public_6efc423 _public_6efc423
#define public_6efc440 _public_6efc440
#define public_6efc47a _public_6efc47a
#define public_6efc47e _public_6efc47e
#define public_6efc4c5 _public_6efc4c5
#define public_6efc4fa _public_6efc4fa
#define public_6efc4fc _public_6efc4fc
#define public_6efc63b _public_6efc63b
#define public_6efc69a _public_6efc69a
#define public_6efc705 _public_6efc705
#define public_6efc721 _public_6efc721

PROC_DECLARE(0x6efc2d0, internal_6efc2d0, public_6efc2d0);
extern "C" NAKED register_t __cdecl internal_6efc2d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac94c @0x6efc2d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac94c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x158
        push ebp
        push esi
        mov ebp, ecx
        mov edx, dword ptr ss : [ebp+0x88]
        lea eax, ss:[esp+0x118]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        xor esi, esi
        push edx
        mov dword ptr ss : [ebp+0x9C], esi
        mov dword ptr ss : [ebp+0x34], esi
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        lea eax, ss:[ebp+0x28]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_6efc7d0
        fld qword ptr ds : [public_6fb7b40]
        fcos 
        lea ecx, ss:[esp+0xB8]
        mov dword ptr ss : [esp+0x168], esi
        mov dword ptr ss : [esp+0x60], esi
        mov dword ptr ss : [esp+0x68], esi
        mov dword ptr ss : [esp+0x6C], 0x3F800000
        mov dword ptr ss : [esp+0x70], esi
        mov dword ptr ss : [esp+0x78], esi
        fld qword ptr ds : [public_6fb7b40]
        fsin 
        fld st(1)
        fstp dword ptr ss : [esp+0x5C]
        fst dword ptr ss : [esp+0x64]
        fchs 
        fstp dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+0x7C]
        call public_6efc7a0
        lea ecx, ss:[esp+0x27]
        push ecx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0xE8], esi
        mov dword ptr ss : [esp+0xE4], esi
        mov dword ptr ss : [esp+0xE0], esi
        call public_6f93460
        mov dword ptr ss : [esp+0x10], esi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x168], 2
        call public_6f28e10
        lea edx, ss:[esp+0x10]
        push edx
        push 3
        call public_6f24870
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        push 0xBF800000
        push 0x43480000
        lea eax, ss:[ebp+0x84]
        push eax
        call public_6f26150
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx+0x166], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edx+0x164], 1
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x1C], eax
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x50]
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [ebp+0x38]
        mov dword ptr ss : [esp+0x34], esi
        cmp eax, esi
        jle public_6efc705
        push ebx
        push edi
        public_6efc423 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], eax
        je public_6efc47a
        lea esp, ss:[esp]
        public_6efc440 : nop
        fld dword ptr ss : [esp+0x1C]
        push esi
        fadd dword ptr ds : [eax+0x14]
        lea eax, ss:[esp+0x90]
        push eax
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x24]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x34]
        cmp eax, ecx
        jne public_6efc440
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jp public_6efc47e
        public_6efc47a : nop
        mov ebx, ecx
        jmp public_6efc4fc
        public_6efc47e : nop
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x88]
        push ecx
        fmul dword ptr ds : [public_6fb4448]
        lea ecx, ss:[esp+0x34]
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x20], 0
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        call public_6f1df30
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x34]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        je public_6efc4fa
        public_6efc4c5 : nop
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [ecx+0x14]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        jnp public_6efc47a
        push esi
        lea edx, ss:[esp+0x44]
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6f68e30
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x34]
        cmp ecx, eax
        jne public_6efc4c5
        public_6efc4fa : nop
        mov ebx, eax
        public_6efc4fc : nop
        lea ecx, ss:[esp+0x90]
        call public_6efc7a0
        lea ecx, ss:[esp+0xF0]
        mov dword ptr ss : [esp+0xBC], 0
        mov dword ptr ss : [esp+0xB8], 0
        mov dword ptr ss : [esp+0xB4], 0
        call public_6efc7a0
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x114], eax
        lea eax, ss:[esp+0x90]
        push eax
        mov dword ptr ss : [esp+0x11C], ecx
        lea eax, ss:[ebp+0x94]
        push eax
        mov dword ptr ss : [esp+0x124], edx
        mov ecx, 9
        lea esi, ss:[esp+0x128]
        lea edi, ss:[esp+0xF8]
        lea eax, ss:[ebp+0x90]
        rep movsd
        push eax
        lea ecx, ss:[esp+0xFC]
        push ecx
        call public_6f243d0
        mov ecx, dword ptr ss : [ebp+0x10]
        add esp, 0x10
        call public_6f478c0
        mov esi, eax
        test esi, esi
        je public_6efc63b
        mov eax, dword ptr ss : [ebp+0x98]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jle public_6efc63b
        mov eax, dword ptr ds : [esi+0x48]
        fild dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x13]
        push edx
        mov dword ptr ss : [esp+0x2C], eax
        fstp dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0xBC]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov byte ptr ss : [esp+0x23], 1
        call dword ptr ds : [public_6fb3488]
        mov al, byte ptr ss : [esp+0x23]
        add esp, 0x10
        test al, al
        jne public_6efc63b
        fild dword ptr ss : [ebp+0x98]
        mov esi, dword ptr ds : [esi+0x48]
        lea eax, ss:[esp+0xB4]
        push eax
        lea ecx, ss:[esp+0x2C]
        fst dword ptr ss : [esp+0x18]
        push ecx
        fstp dword ptr ss : [esp+0x4C]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0xA0]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        mov dword ptr ss : [esp+0x40], 3
        mov dword ptr ss : [esp+0x3C], esi
        call dword ptr ds : [public_6fb3484]
        add esp, 0x18
        public_6efc63b : nop
        mov ecx, 0xC
        lea esi, ss:[esp+0x90]
        lea edi, ss:[esp+0xC0]
        push 0
        lea eax, ss:[esp+0x4C]
        rep movsd
        push eax
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x2C], ebx
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [public_6fcf384]
        add esp, 4
        dec edx
        test eax, eax
        mov dword ptr ss : [esp+0x38], edx
        jne public_6efc69a
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf384], eax
        public_6efc69a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x120]
        push edx
        lea edx, ss:[esp+0x68]
        push edx
        lea edx, ss:[esp+0x14C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [ebp+0x8C]
        push eax
        push 0
        push 0
        mov ecx, 9
        lea esi, ss:[esp+0x150]
        lea edi, ss:[esp+0xCC]
        rep movsd
        push 0
        lea ecx, ss:[esp+0x5C]
        push ecx
        push 0xFFFFFFFF
        lea edx, ss:[esp+0xD8]
        push edx
        mov ecx, ebp
        call public_6efba30
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [ebp+0x38]
        inc eax
        xor esi, esi
        cmp eax, ecx
        mov dword ptr ss : [esp+0x3C], eax
        jl public_6efc423
        pop edi
        pop ebx
        public_6efc705 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, esi
        mov dword ptr ss : [ebp+0x38], esi
        mov byte ptr ss : [esp+0x168], 1
        je public_6efc721
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], esi
        public_6efc721 : nop
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x168], 3
        call public_6ed2a00
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x168], 0
        call public_6f15350
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x16C], 0xFFFFFFFF
        call public_6f1df30
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_6fa8370
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x164]
        add esp, 4
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x164
        ret 4
        UNREACHABLE_TRAP(0x6efc2d0)
    }
}

#undef public_6efc423
#undef public_6efc440
#undef public_6efc47a
#undef public_6efc47e
#undef public_6efc4c5
#undef public_6efc4fa
#undef public_6efc4fc
#undef public_6efc63b
#undef public_6efc69a
#undef public_6efc705
#undef public_6efc721
