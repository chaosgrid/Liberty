#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d868e0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d868f7 _public_6d868f7
#define public_6d86920 _public_6d86920
#define public_6d86932 _public_6d86932

PROC_DECLARE(0x6d868e0, internal_6d868e0, public_6d868e0);
extern "C" NAKED register_t __cdecl internal_6d868e0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        lea eax, ds:[ebp*4]
        test eax, eax
        push edi
        mov esi, ecx
        jge public_6d868f7
        xor eax, eax
        public_6d868f7 : nop
        push eax
        call public_6db1f8a
        mov ecx, dword ptr ds : [esi+0x10]
        mov edi, eax
        mov eax, ebp
        shr eax, 2
        lea ebx, ds:[edi+eax*4]
        mov eax, dword ptr ds : [esi+0x20]
        add eax, 4
        add esp, 4
        cmp ecx, eax
        mov edx, ebx
        je public_6d86932
        lea esp, ss:[esp]
        public_6d86920 : nop
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebp
        add ecx, 4
        add edx, 4
        cmp ecx, eax
        jne public_6d86920
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d86932 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        push ecx
        call public_6db1dc2
        add esp, 4
        mov dword ptr ds : [esi+0x24], edi
        pop edi
        mov dword ptr ds : [esi+0x28], ebp
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d868e0)
    }
}

#undef public_6d868f7
#undef public_6d86920
#undef public_6d86932
