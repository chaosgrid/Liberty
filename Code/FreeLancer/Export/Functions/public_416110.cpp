#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402790);
CLANG_FORWARD_PROC_SYMBOL(public_415ea0);
CLANG_FORWARD_PROC_SYMBOL(public_416110);
CLANG_FORWARD_PROC_SYMBOL(public_418c60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_416169 _public_416169
#define public_416171 _public_416171
#define public_416188 _public_416188
#define public_4162b3 _public_4162b3
#define public_4162d0 _public_4162d0
#define public_41634c _public_41634c
#define public_41635e _public_41635e
#define public_41637b _public_41637b
#define public_41637d _public_41637d
#define public_4163c0 _public_4163c0
#define public_4163cc _public_4163cc

PROC_DECLARE(0x416110, internal_416110, public_416110);
extern "C" NAKED register_t __cdecl internal_416110()
{
    __asm
    {
        sub esp, 0x110
        push ebx
        push ebp
        mov ebp, ecx
        fld dword ptr ss : [ebp+0xD0]
        xor ebx, ebx
        fcomp dword ptr ds : [public_5c7474]
        xor ecx, ecx
        push esi
        fnstsw ax
        test ah, 0x44
        jnp public_4163cc
/*FIXUP push offset public_610850 @0x416136*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610850
        lea eax, ss:[esp+0x10]
        lea esi, ss:[ebp+0x15C]
        push eax
        mov ecx, esi
        call public_418c60
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, esi
        je public_416169
        mov ecx, dword ptr ds : [public_610850]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_416169
        lea eax, ss:[esp+0xC]
        jmp public_416171
        public_416169 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_416171 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [ebp+0x160]
        je public_416188
        mov eax, dword ptr ds : [eax+0x10]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x110
        ret 
        public_416188 : nop
        fld dword ptr ss : [ebp+0xD0]
        mov eax, dword ptr ss : [ebp+0x118]
        fmul dword ptr ds : [public_5c8da4]
        mov edx, dword ptr ss : [ebp+0x11C]
        cmp eax, ebx
        push edi
        fadd qword ptr ds : [public_5c75e8]
        setne byte ptr ss : [esp+0x17]
        sub esp, 8
        mov dword ptr ss : [esp+0x3C], edx
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        mov ecx, 0x1B
        mov esi, offset public_5c8d38
        lea edi, ss:[esp+0x48]
        rep movsd
        push eax
        mov ecx, ebp
        call public_415ea0
        mov eax, dword ptr ss : [ebp]
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [public_610854]
        mov ecx, dword ptr ds : [public_610850]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ebx
        fild qword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], edx
        sub esp, 8
        fmul dword ptr ds : [public_5c8d30]
        mov dword ptr ss : [esp+0x28], ecx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [ebp+0xD0]
        fild dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        fstp st(0)
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        mov ecx, 0x1B
        mov esi, offset public_5c8d38
        lea edi, ss:[esp+0x48]
        rep movsd
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_415ea0
        mov eax, dword ptr ss : [ebp]
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        fild dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], 0
        fstp dword ptr ss : [esp+0x20]
        fild qword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        fdiv dword ptr ss : [esp+0x20]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        je public_4162b3
        mov dword ptr ss : [esp+0x2C], 1
        public_4162b3 : nop
        fld dword ptr ss : [esp+0x10]
        fsubr st, st(1)
        fabs 
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_41637d
        mov edi, edi
        public_4162d0 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+ebx]
        cmp eax, ecx
        ja public_41637d
        mov ecx, 0x1B
        mov esi, offset public_5c8d38
        lea edi, ss:[esp+0xB4]
        rep movsd
        mov esi, dword ptr ss : [esp+0x2C]
        add edx, esi
        add edx, ebx
        push edx
        mov ecx, ebp
        call public_415ea0
        mov eax, dword ptr ss : [ebp]
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0xB8]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        test esi, esi
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], 0
        fild qword ptr ss : [esp+0x24]
        fdiv dword ptr ss : [esp+0x20]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        jle public_41634c
        test ah, 0x41
        je public_41637b
        add ebx, esi
        jmp public_41635e
        public_41634c : nop
        add ebx, esi
        test ah, 0x41
        jnp public_41637b
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, ebx
        cmp ecx, 4
        jle public_41637b
        public_41635e : nop
        fld dword ptr ss : [esp+0x10]
        fsubr st, st(1)
        fabs 
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        je public_4162d0
        jmp public_41637d
        public_41637b : nop
        fstp st(0)
        public_41637d : nop
        mov edx, dword ptr ds : [public_610850]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[ebp+0x15C]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], 0
        call public_402790
        mov al, byte ptr ss : [esp+0x17]
        test al, al
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+0x10], ebx
        pop edi
        je public_4163c0
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        mov ecx, ebp
        call public_415ea0
        public_4163c0 : nop
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x110
        ret 
        public_4163cc : nop
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x110
        ret 
        UNREACHABLE_TRAP(0x416110)
    }
}

#undef public_416169
#undef public_416171
#undef public_416188
#undef public_4162b3
#undef public_4162d0
#undef public_41634c
#undef public_41635e
#undef public_41637b
#undef public_41637d
#undef public_4163c0
#undef public_4163cc
