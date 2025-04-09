#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4a5ca0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4a5ea0 _public_4a5ea0
#define public_4a5ec7 _public_4a5ec7
#define public_4a5edd _public_4a5edd
#define public_4a5f2a _public_4a5f2a

PROC_DECLARE(0x4a5e50, internal_4a5e50, public_4a5e50);
extern "C" NAKED register_t __cdecl internal_4a5e50()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        call public_42d680
        mov edx, dword ptr ds : [esi+0x34C]
        test edx, edx
        je public_4a5f2a
        fmul dword ptr ds : [public_5d440c]
        mov ecx, dword ptr ds : [esi+0x354]
        push edi
        mov edi, dword ptr ds : [esi+0x348]
        fadd dword ptr ds : [esi+0x350]
        fst dword ptr ss : [esp+8]
        fstp dword ptr ds : [esi+0x350]
        fild dword ptr ds : [edi+ecx*4]
        fld dword ptr ss : [esp+8]
        fcomp 
        fnstsw ax
        test ah, 1
        jne public_4a5edd
        lea ebx, ds:[ebx]
        public_4a5ea0 : nop
        fld dword ptr ds : [esi+0x350]
        lea eax, ds:[ecx+1]
        cmp eax, edx
        fsub st, st(1)
        mov dword ptr ds : [esi+0x354], eax
        fstp dword ptr ds : [esi+0x350]
        fstp st(0)
        jl public_4a5ec7
        mov dword ptr ds : [esi+0x354], 0
        public_4a5ec7 : nop
        mov ecx, dword ptr ds : [esi+0x354]
        fild dword ptr ds : [edi+ecx*4]
        fcom dword ptr ds : [esi+0x350]
        fnstsw ax
        test ah, 0x41
        jnp public_4a5ea0
        public_4a5edd : nop
        fstp st(0)
        sub esp, 8
        fld dword ptr ds : [esi+0x350]
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        mov ecx, dword ptr ds : [esi+0x354]
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call public_4a5ca0
        pop edi
        mov ecx, esi
        pop esi
        add esp, 4
        jmp public_5a17b0
        public_4a5f2a : nop
        mov ecx, esi
        fstp st(0)
        pop esi
        add esp, 4
        jmp public_5a17b0
        UNREACHABLE_TRAP(0x4a5e50)
    }
}

#undef public_4a5ea0
#undef public_4a5ec7
#undef public_4a5edd
#undef public_4a5f2a
