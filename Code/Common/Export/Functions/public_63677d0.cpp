#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6367130);
CLANG_FORWARD_PROC_SYMBOL(public_63677d0);

#define public_63677e4 _public_63677e4
#define public_63677f7 _public_63677f7

PROC_DECLARE(0x63677d0, internal_63677d0, public_63677d0);
extern "C" NAKED register_t __cdecl internal_63677d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[eax+1]
        cmp esi, dword ptr ds : [edi+0x3C]
        jge public_63677f7
        push ebx
        lea ebx, ds:[esi-1]
        public_63677e4 : nop
        push esi
        push ebx
        mov ecx, edi
        call public_6367130
        mov eax, dword ptr ds : [edi+0x3C]
        inc esi
        inc ebx
        cmp esi, eax
        jl public_63677e4
        pop ebx
        public_63677f7 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63677d0)
    }
}

#undef public_63677e4
#undef public_63677f7
