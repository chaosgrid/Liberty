#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6afa0);

#define public_6f6afc0 _public_6f6afc0
#define public_6f6afdd _public_6f6afdd

PROC_DECLARE(0x6f6afa0, internal_6f6afa0, public_6f6afa0);
extern "C" NAKED register_t __cdecl internal_6f6afa0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x30]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea ebx, ds:[edi-0x20]
        lea eax, ss:[esp+0x18]
        push ebx
        push eax
        call ebp
        add esp, 8
        test al, al
        je public_6f6afdd
        mov edi, edi
        public_6f6afc0 : nop
        mov esi, ebx
        mov ecx, 8
        rep movsd
        mov edi, ebx
        sub ebx, 0x20
        lea ecx, ss:[esp+0x18]
        push ebx
        push ecx
        call ebp
        add esp, 8
        test al, al
        jne public_6f6afc0
        public_6f6afdd : nop
        mov ecx, 8
        lea esi, ss:[esp+0x18]
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f6afa0)
    }
}

#undef public_6f6afc0
#undef public_6f6afdd
