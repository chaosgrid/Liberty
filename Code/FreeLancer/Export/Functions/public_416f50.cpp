#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415ea0);
CLANG_FORWARD_PROC_SYMBOL(public_416f50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_416ff2 _public_416ff2
#define public_417010 _public_417010
#define public_417087 _public_417087
#define public_417099 _public_417099
#define public_4170c6 _public_4170c6
#define public_4170c8 _public_4170c8

PROC_DECLARE(0x416f50, internal_416f50, public_416f50);
extern "C" NAKED register_t __cdecl internal_416f50()
{
    __asm
    {
        sub esp, 0x8C
        fild dword ptr ss : [esp+0x98]
        push ebx
        push ebp
        push esi
        fmul dword ptr ss : [esp+0x9C]
        push edi
        sub esp, 8
        mov ebx, ecx
        fadd qword ptr ds : [public_5c75e8]
        xor ebp, ebp
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        mov ecx, 0x1B
        mov esi, offset public_5c8d38
        lea edi, ss:[esp+0x30]
        rep movsd
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], eax
        call public_415ea0
        mov eax, dword ptr ds : [ebx]
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        fild dword ptr ss : [esp+0xA4]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ebp
        fstp dword ptr ss : [esp+0x14]
        fild qword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        fdiv dword ptr ss : [esp+0x14]
        fcom dword ptr ss : [esp+0xAC]
        fnstsw ax
        test ah, 0x41
        je public_416ff2
        mov dword ptr ss : [esp+0x18], 1
        public_416ff2 : nop
        fld dword ptr ss : [esp+0xAC]
        fsubr st, st(1)
        fabs 
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_4170c8
        public_417010 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ds:[edx+ebp]
        cmp eax, ecx
        ja public_4170c8
        mov ecx, 0x1B
        mov esi, offset public_5c8d38
        lea edi, ss:[esp+0x30]
        rep movsd
        mov esi, dword ptr ss : [esp+0x18]
        add edx, esi
        add edx, ebp
        push edx
        mov ecx, ebx
        call public_415ea0
        mov eax, dword ptr ds : [ebx]
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        test esi, esi
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], 0
        fild qword ptr ss : [esp+0x20]
        fdiv dword ptr ss : [esp+0x14]
        fcom dword ptr ss : [esp+0xAC]
        fnstsw ax
        jle public_417087
        test ah, 0x41
        je public_4170c6
        add ebp, esi
        jmp public_417099
        public_417087 : nop
        add ebp, esi
        test ah, 0x41
        jnp public_4170c6
        mov ecx, dword ptr ss : [esp+0x10]
        add ecx, ebp
        cmp ecx, 4
        jle public_4170c6
        public_417099 : nop
        fld dword ptr ss : [esp+0xAC]
        fsubr st, st(1)
        fabs 
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        je public_417010
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x8C
        ret 0x10
        public_4170c6 : nop
        fstp st(0)
        public_4170c8 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x8C
        ret 0x10
        UNREACHABLE_TRAP(0x416f50)
    }
}

#undef public_416ff2
#undef public_417010
#undef public_417087
#undef public_417099
#undef public_4170c6
#undef public_4170c8
