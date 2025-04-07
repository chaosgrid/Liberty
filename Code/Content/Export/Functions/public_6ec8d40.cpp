#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f33ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f40);

#define public_6ec8d72 _public_6ec8d72
#define public_6ec8dab _public_6ec8dab
#define public_6ec8dbd _public_6ec8dbd

PROC_DECLARE(0x6ec8d40, internal_6ec8d40, public_6ec8d40);
extern "C" NAKED register_t __cdecl internal_6ec8d40()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push edi
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f15710
        mov edi, eax
        test edi, edi
        je public_6ec8dbd
        mov eax, dword ptr ds : [esi+0x40]
        sub eax, 0
        je public_6ec8dab
        dec eax
        je public_6ec8d72
        dec eax
        jne public_6ec8dbd
        mov ecx, edi
        call public_6f33f40
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 
        public_6ec8d72 : nop
        lea ecx, ds:[esi+0x50]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        call public_6f15b90
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+8], eax
        je public_6ec8dbd
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x88]
        add esi, 0x84
        lea eax, ss:[esp+8]
        mov ecx, edi
        push edx
        push esi
        push eax
        call public_6f33ee0
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 
        public_6ec8dab : nop
        lea ecx, ds:[esi+0x84]
        push ecx
        add esi, 0x44
        push esi
        mov ecx, edi
        call public_6f33ea0
        public_6ec8dbd : nop
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ec8d40)
    }
}

#undef public_6ec8d72
#undef public_6ec8dab
#undef public_6ec8dbd
