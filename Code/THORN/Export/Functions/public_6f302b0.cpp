#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f302b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31010);
CLANG_FORWARD_PROC_SYMBOL(public_6f31600);
CLANG_FORWARD_PROC_SYMBOL(public_6f31a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f31aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33160);
CLANG_FORWARD_PROC_SYMBOL(public_6f331b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33df0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f302c4 _public_6f302c4
#define public_6f302cc _public_6f302cc
#define public_6f302e0 _public_6f302e0
#define public_6f302f8 _public_6f302f8
#define public_6f302fc _public_6f302fc
#define public_6f30327 _public_6f30327
#define public_6f3032c _public_6f3032c
#define public_6f30334 _public_6f30334
#define public_6f3033a _public_6f3033a
#define public_6f3033f _public_6f3033f
#define public_6f3034a _public_6f3034a
#define public_6f30369 _public_6f30369
#define public_6f30370 _public_6f30370
#define public_6f3038c _public_6f3038c
#define public_6f303f6 _public_6f303f6
#define public_6f3043a _public_6f3043a
#define public_6f30463 _public_6f30463

PROC_DECLARE(0x6f302b0, internal_6f302b0, public_6f302b0);
extern "C" NAKED register_t __cdecl internal_6f302b0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        push edi
        jne public_6f302c4
        xor ecx, ecx
        jmp public_6f302cc
        public_6f302c4 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 4
        public_6f302cc : nop
        xor ebx, ebx
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], ebx
        jle public_6f30334
        lea edi, ds:[edx+4]
        lea esp, ss:[esp]
        public_6f302e0 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [ebp+4]
        fcomp dword ptr ds : [edi]
        fnstsw ax
        test ah, 0x41
        jnp public_6f302f8
        inc ebx
        add edi, 0x10
        cmp ebx, ecx
        jl public_6f302e0
        public_6f302f8 : nop
        mov dword ptr ss : [esp+0x14], ebx
        public_6f302fc : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edi, ebx
        sub ecx, eax
        shl edi, 4
        sar ecx, 4
        add edi, edx
        cmp ecx, 1
        jae public_6f303f6
        test edx, edx
        je public_6f30327
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp ecx, 1
        ja public_6f3032c
        public_6f30327 : nop
        mov ecx, 1
        public_6f3032c : nop
        test edx, edx
        jne public_6f3033a
        xor eax, eax
        jmp public_6f3033f
        public_6f30334 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        jmp public_6f302fc
        public_6f3033a : nop
        sub eax, edx
        sar eax, 4
        public_6f3033f : nop
        lea ebx, ds:[eax+ecx]
        test ebx, ebx
        mov eax, ebx
        jge public_6f3034a
        xor eax, eax
        public_6f3034a : nop
        shl eax, 4
        push eax
        call public_6f57e9c
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_6f3038c
        jmp public_6f30370
        public_6f30369 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ds:[ecx]
        public_6f30370 : nop
        push eax
        push ebp
        call public_6f33df0
        mov eax, dword ptr ss : [esp+0x18]
        add eax, 0x10
        add esp, 8
        add ebp, 0x10
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f30369
        public_6f3038c : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push 1
        push ebp
        mov ecx, esi
        call public_6f31aa0
        mov eax, dword ptr ds : [esi+8]
        add ebp, 0x10
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6f31a60
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6f31600
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6f57e26
        mov edi, dword ptr ss : [esp+0x1C]
        shl ebx, 4
        add ebx, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], ebx
        call public_6f31010
        mov ecx, dword ptr ss : [esp+0x14]
        inc eax
        shl eax, 4
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        lea eax, ds:[ecx+1]
        pop ebx
        add esp, 0xC
        ret 4
        public_6f303f6 : nop
        mov edx, eax
        sub edx, edi
        sar edx, 4
        cmp edx, 1
        jae public_6f3043a
        lea ecx, ds:[edi+0x10]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_6f31a60
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        sub edx, edi
        sar edx, 4
        push ebp
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6f31aa0
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_6f33160
        add esp, 0xC
        jmp public_6f30463
        public_6f3043a : nop
        push eax
        push eax
        add eax, 0xFFFFFFF0
        push eax
        mov ecx, esi
        call public_6f31a60
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFF0
        push eax
        push edi
        call public_6f331b0
        push ebp
        lea eax, ds:[edi+0x10]
        push eax
        push edi
        call public_6f33160
        add esp, 0x18
        public_6f30463 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x10
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        lea eax, ds:[ebx+1]
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6f302b0)
    }
}

#undef public_6f302c4
#undef public_6f302cc
#undef public_6f302e0
#undef public_6f302f8
#undef public_6f302fc
#undef public_6f30327
#undef public_6f3032c
#undef public_6f30334
#undef public_6f3033a
#undef public_6f3033f
#undef public_6f3034a
#undef public_6f30369
#undef public_6f30370
#undef public_6f3038c
#undef public_6f303f6
#undef public_6f3043a
#undef public_6f30463
