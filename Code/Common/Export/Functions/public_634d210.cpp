#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f80);
CLANG_FORWARD_PROC_SYMBOL(public_634d210);

#define public_634d21b _public_634d21b
#define public_634d22c _public_634d22c

PROC_DECLARE(0x634d210, internal_634d210, public_634d210);
extern "C" NAKED register_t __cdecl internal_634d210()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        xor ecx, ecx
        public_634d21b : nop
        mov edx, 1
        shl edx, cl
        cmp edx, eax
        je public_634d22c
        inc ecx
        cmp ecx, 0x20
        jl public_634d21b
        public_634d22c : nop
        push eax
        push 4
        call public_6343f80
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ds : [esi]
        shl eax, 1
        push eax
        push 4
        call public_6343f80
        mov ecx, dword ptr ds : [esi]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ds : [esi+4], eax
        add esp, 0x10
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0x10], 0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634d210)
    }
}

#undef public_634d21b
#undef public_634d22c
