#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54c420);
CLANG_FORWARD_PROC_SYMBOL(public_54cfb0);
CLANG_FORWARD_PROC_SYMBOL(public_54d410);

#define public_54d439 _public_54d439
#define public_54d4a0 _public_54d4a0
#define public_54d4cc _public_54d4cc

PROC_DECLARE(0x54d410, internal_54d410, public_54d410);
extern "C" NAKED register_t __cdecl internal_54d410()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x7C]
        test al, al
        push edi
        jne public_54d439
        mov ecx, dword ptr ds : [esi+0x80]
        inc ecx
        mov eax, ecx
        cmp eax, 1
        mov dword ptr ds : [esi+0x80], ecx
        jle public_54d439
        mov ecx, esi
        call public_54cfb0
        public_54d439 : nop
        fld dword ptr ds : [esi+0x54]
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        test ah, 5
        jnp public_54d4cc
        fld dword ptr ds : [esi+0x64]
        mov eax, dword ptr ds : [esi+0x6C]
        fld dword ptr ds : [esi+0x68]
        mov ecx, dword ptr ds : [esi+0x70]
        fld st(1)
        mov dword ptr ss : [esp+0xC], eax
        fmul st, st(2)
        mov eax, dword ptr ds : [esi+0x44]
        mov dword ptr ss : [esp+8], ecx
        xor edi, edi
        test eax, eax
        fstp dword ptr ss : [esp+0x14]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+8]
        jle public_54d4cc
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        xor ebx, ebx
        mov edi, edi
        public_54d4a0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0x3C]
        push edx
        push ebp
        add ecx, ebx
        call public_54c420
        mov eax, dword ptr ds : [esi+0x44]
        inc edi
        add ebx, 0x3C
        cmp edi, eax
        jl public_54d4a0
        pop ebp
        pop ebx
        public_54d4cc : nop
        pop edi
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x54d410)
    }
}

#undef public_54d439
#undef public_54d4a0
#undef public_54d4cc
