#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10003490);

#define public_100035c0 _public_100035c0

PROC_DECLARE(0x100035b0, internal_100035b0, public_100035b0);
extern "C" NAKED register_t __cdecl internal_100035b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, edx
        push esi
        lea esi, ds:[eax+1]
        lea ebx, ds:[ebx]
        public_100035c0 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        jne public_100035c0
        sub eax, esi
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push edx
        push eax
        call public_10003490
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x100035b0)
    }
}

#undef public_100035c0
