#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40810);

#define public_6d40828 _public_6d40828
#define public_6d4083f _public_6d4083f

PROC_DECLARE(0x6d40810, internal_6d40810, public_6d40810);
extern "C" NAKED register_t __cdecl internal_6d40810()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        cmp esi, ebp
        push edi
        je public_6d4083f
        mov edi, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ss : [esp+0x20]
        public_6d40828 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        je public_6d4083f
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_6d40828
        public_6d4083f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d40810)
    }
}

#undef public_6d40828
#undef public_6d4083f
