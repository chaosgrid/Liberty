#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636d360);
CLANG_FORWARD_PROC_SYMBOL(public_636d510);

#define public_636d525 _public_636d525
#define public_636d53a _public_636d53a

PROC_DECLARE(0x636d510, internal_636d510, public_636d510);
extern "C" NAKED register_t __cdecl internal_636d510()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        xor edi, edi
        cmp word ptr ds : [esi+0xC], di
        mov ebp, ecx
        lea ebx, ds:[esi+0x10]
        jle public_636d53a
        public_636d525 : nop
        push ebx
        push esi
        mov ecx, ebp
        call public_636d360
        movsx eax, word ptr ds : [esi+0xC]
        inc edi
        add ebx, 0x10
        cmp edi, eax
        jl public_636d525
        public_636d53a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x636d510)
    }
}

#undef public_636d525
#undef public_636d53a
