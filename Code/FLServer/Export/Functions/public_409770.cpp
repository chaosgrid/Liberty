#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_418936);
CLANG_FORWARD_PROC_SYMBOL(public_41893c);
CLANG_FORWARD_PROC_SYMBOL(public_418942);
CLANG_FORWARD_PROC_SYMBOL(public_418c84);

#define public_4097ce _public_4097ce

PROC_DECLARE(0x409770, internal_409770, public_409770);
extern "C" NAKED register_t __cdecl internal_409770()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        call public_40cdc0
        mov eax, dword ptr ds : [esi+0x200]
        mov ecx, dword ptr ds : [public_41baf8]
        add eax, 4
        push eax
        call public_418942
        mov ecx, dword ptr ds : [esi+0x80]
        push 0
        push 0
        push 0xF0
        push ecx
        call dword ptr ds : [public_41bbe8]
        test eax, eax
        mov eax, dword ptr ds : [esi+0x200]
        mov dl, byte ptr ds : [eax+0x31]
        setne cl
        cmp dl, cl
        mov byte ptr ss : [esp+4], cl
        jne public_4097ce
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_41baf8]
        push edx
        add eax, 4
        push eax
        call public_41893c
        public_4097ce : nop
        mov eax, dword ptr ds : [esi+0x200]
        mov ecx, dword ptr ds : [public_41baf8]
        add eax, 4
        push eax
        call public_418936
        call public_40ce70
        push 2
        mov ecx, esi
        call public_418c84
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x409770)
    }
}

#undef public_4097ce
