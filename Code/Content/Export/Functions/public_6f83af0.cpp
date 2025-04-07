#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2a00);
CLANG_FORWARD_PROC_SYMBOL(public_6efc2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6efc7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6efc7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0bb80);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f27940);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f832b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f83ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f83f10);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb098c);

#define public_6f83b37 _public_6f83b37
#define public_6f83c53 _public_6f83c53
#define public_6f83c80 _public_6f83c80
#define public_6f83d00 _public_6f83d00
#define public_6f83d37 _public_6f83d37
#define public_6f83d39 _public_6f83d39
#define public_6f83e1e _public_6f83e1e
#define public_6f83e3a _public_6f83e3a
#define public_6f83e9a _public_6f83e9a

PROC_DECLARE(0x6f83af0, internal_6f83af0, public_6f83af0);
extern "C" NAKED register_t __cdecl internal_6f83af0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb098c @0x6f83af8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb098c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x100
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xB4]
        push eax
        call dword ptr ds : [public_6fb33cc]
        mov al, byte ptr ss : [esp+0x118]
        add esp, 4
        test al, al
        je public_6f83b37
        push 1
        mov ecx, ebp
        call public_6efc2d0
        jmp public_6f83e9a
        public_6f83b37 : nop
        mov eax, dword ptr ss : [ebp+0x88]
        push ebx
        push edi
        lea ecx, ss:[esp+0xC4]
        push ecx
        lea edx, ss:[esp+0xB0]
        push edx
        xor edi, edi
        push eax
        mov dword ptr ss : [ebp+0x9C], edi
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        lea ecx, ss:[ebp+0x28]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6efc7d0
        fld qword ptr ds : [public_6fb7b40]
        fcos 
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x114], edi
        mov dword ptr ss : [esp+0x50], edi
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [esp+0x5C], 0x3F800000
        mov dword ptr ss : [esp+0x60], edi
        mov dword ptr ss : [esp+0x68], edi
        fld qword ptr ds : [public_6fb7b40]
        fsin 
        fld st(1)
        fstp dword ptr ss : [esp+0x4C]
        fst dword ptr ss : [esp+0x54]
        fchs 
        fstp dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0x6C]
        call public_6efc7a0
        lea edx, ss:[esp+0x2B]
        push edx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0xAC], edi
        mov dword ptr ss : [esp+0xA8], edi
        mov dword ptr ss : [esp+0xA4], edi
        call public_6f93460
        mov dword ptr ss : [esp+0x14], edi
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x114], 2
        call public_6f28e10
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        call public_6f24870
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        push 0x41C80000
        call public_6f27940
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x114], 1
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x34]
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], edx
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x3C]
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+0x38]
        xor ebx, ebx
        cmp eax, edi
        jle public_6f83e1e
        push esi
        public_6f83c53 : nop
        lea ecx, ss:[esp+0x7C]
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x18], 0
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x24]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6f83d39
        nop 
        lea esp, ss:[esp]
        public_6f83c80 : nop
        fld dword ptr ss : [esp+0x14]
        push edi
        fadd dword ptr ds : [eax+0x14]
        lea edx, ss:[esp+0x7C]
        push edx
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x24]
        cmp eax, esi
        jne public_6f83c80
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6f83d39
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x74]
        push eax
        fmul dword ptr ds : [public_6fb4448]
        lea ecx, ss:[esp+0x24]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], 0
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        call public_6f1df30
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x24]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f83d39
        nop 
        public_6f83d00 : nop
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [ecx+0x14]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jnp public_6f83d37
        push edi
        lea ecx, ss:[esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x24]
        cmp ecx, esi
        jne public_6f83d00
        jmp public_6f83d39
        public_6f83d37 : nop
        mov esi, ecx
        public_6f83d39 : nop
        lea eax, ds:[esi+8]
        push eax
        lea edx, ss:[esp+0xCC]
        push edx
        lea eax, ss:[esp+0xC4]
        push eax
        call public_6f83ec0
        lea ecx, ss:[esp+0xC8]
        push ecx
        lea edx, ss:[esp+0xC0]
        push edx
        lea eax, ss:[esp+0x58]
        push eax
        call public_6f0bb80
        mov ecx, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x64]
        add esp, 0x18
        mov dword ptr ss : [esp+0xA4], ecx
        push edi
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0xB0], edx
        mov dword ptr ss : [esp+0xB4], eax
        mov dword ptr ss : [esp+0x24], esi
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
        mov edx, dword ptr ss : [esp+0x2C]
        dec edx
        lea eax, ss:[esp+0xCC]
        push eax
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x30], edx
        push ecx
        lea edx, ss:[esp+0xF8]
        push edx
        call public_6f83f10
        add esp, 0x10
        push 0
        push 0
        lea eax, ss:[esp+0x3C]
        push eax
        mov ecx, 9
        lea esi, ss:[esp+0xF8]
        lea edi, ss:[esp+0x8C]
        rep movsd
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0x90]
        push ecx
        mov ecx, ebp
        call public_6f832b0
        mov eax, dword ptr ss : [ebp+0x38]
        inc ebx
        xor edi, edi
        cmp ebx, eax
        jl public_6f83c53
        pop esi
        public_6f83e1e : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, edi
        mov dword ptr ss : [ebp+0x38], edi
        mov byte ptr ss : [esp+0x114], 1
        je public_6f83e3a
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], edi
        public_6f83e3a : nop
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x114], 3
        call public_6ed2a00
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x114], 0
        call public_6f15350
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x118], 0xFFFFFFFF
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        call public_6fa8fe0
        add esp, 4
        pop edi
        pop ebx
        public_6f83e9a : nop
        mov ecx, dword ptr ss : [esp+0x104]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10C
        ret 4
        UNREACHABLE_TRAP(0x6f83af0)
    }
}

#undef public_6f83b37
#undef public_6f83c53
#undef public_6f83c80
#undef public_6f83d00
#undef public_6f83d37
#undef public_6f83d39
#undef public_6f83e1e
#undef public_6f83e3a
#undef public_6f83e9a
