#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac30a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3220);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3450);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3500);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8200);

#define public_6ac8231 _public_6ac8231
#define public_6ac823a _public_6ac823a
#define public_6ac82ba _public_6ac82ba

PROC_DECLARE(0x6ac8200, internal_6ac8200, public_6ac8200);
extern "C" NAKED register_t __cdecl internal_6ac8200()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov eax, dword ptr ds : [esi+8]
        cmp eax, 1
        je public_6ac823a
        cmp eax, 1
        jle public_6ac8231
        cmp eax, 3
        jg public_6ac8231
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        call public_6ac3450
        test eax, eax
        je public_6ac82ba
        public_6ac8231 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        public_6ac823a : nop
        lea edi, ss:[ebp+0x104]
        push esi
        push edi
        push 0x1B
        call public_6ac3220
        test eax, eax
        je public_6ac8231
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        push ebx
        push edi
        call public_6ac3490
        test eax, eax
        je public_6ac8231
        push esi
        push edi
        push ebx
        push edi
        call public_6ac3490
        test eax, eax
        je public_6ac8231
        push esi
        push edi
        push ebx
        push edi
        call public_6ac3490
        test eax, eax
        je public_6ac8231
        mov eax, dword ptr ss : [esp+0x14]
        lea ebx, ss:[ebp+4]
        push esi
        push ebx
        push eax
        push eax
        call public_6ac30a0
        test eax, eax
        je public_6ac8231
        push esi
        push ebx
        push ebx
        push ebx
        call public_6ac3490
        test eax, eax
        je public_6ac8231
        mov ecx, dword ptr ss : [esp+0x14]
        push esi
        push ebx
        push edi
        push ebx
        push ecx
        call public_6ac3500
        test eax, eax
        je public_6ac8231
        push esi
        push ebx
        call public_6ac3450
        test eax, eax
        jne public_6ac8231
        public_6ac82ba : nop
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        lea edx, ss:[ebp+4]
        push 1
        push edx
        push eax
        mov dword ptr ss : [ebp], esi
        call public_6ac3140
        test eax, eax
        je public_6ac8231
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        add ebp, 0x104
        push 1
        push ebp
        push ecx
        call public_6ac3140
        test eax, eax
        je public_6ac8231
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ac8200)
    }
}

#undef public_6ac8231
#undef public_6ac823a
#undef public_6ac82ba
