#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_586310);

#define public_584707 _public_584707

PROC_DECLARE(0x5846b0, internal_5846b0, public_5846b0);
extern "C" NAKED register_t __cdecl internal_5846b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push eax
        mov esi, ecx
        call public_586310
        mov edx, dword ptr ds : [public_67dca4]
        mov eax, dword ptr ds : [public_67dcac]
        mov ecx, dword ptr ds : [public_67dcb0]
        sub eax, edx
        sub ecx, dword ptr ds : [public_67dca8]
        mov edx, dword ptr ds : [esi+0x494]
        inc eax
        inc ecx
        test edx, edx
        jle public_584707
        cmp dword ptr ds : [esi+0x49C], eax
        jge public_584707
        mov eax, dword ptr ds : [esi+0x498]
        test eax, eax
        jle public_584707
        cmp dword ptr ds : [esi+0x4A0], ecx
        jge public_584707
        mov eax, 1
        pop esi
        ret 4
        public_584707 : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5846b0)
    }
}

#undef public_584707
