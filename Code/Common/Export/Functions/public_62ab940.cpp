#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a1600);

#define public_62ab981 _public_62ab981
#define public_62ab987 _public_62ab987

PROC_DECLARE(0x62ab940, internal_62ab940, public_62ab940);
extern "C" NAKED register_t __cdecl internal_62ab940()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp edi, eax
        je public_62ab981
        push edi
        lea ecx, ds:[esi+0xE4]
        call public_629b3a0
        cmp ax, word ptr ds : [public_63a4aa4]
        mov dword ptr ss : [esp+0xC], eax
        jne public_62ab987
        push edi
        lea ecx, ds:[esi+0x144]
        call public_62a1600
        cmp ax, word ptr ds : [public_63a4aa4]
        mov dword ptr ss : [esp+0xC], eax
        jne public_62ab987
        public_62ab981 : nop
        mov ax, word ptr ds : [public_63a4aa6]
        public_62ab987 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62ab940)
    }
}

#undef public_62ab981
#undef public_62ab987
