#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d85ad0 _public_6d85ad0
#define public_6d85ae8 _public_6d85ae8
#define public_6d85b37 _public_6d85b37
#define public_6d85b50 _public_6d85b50
#define public_6d85b5d _public_6d85b5d

PROC_DECLARE(0x6d85ac0, internal_6d85ac0, public_6d85ac0);
extern "C" NAKED register_t __cdecl internal_6d85ac0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6d85b5d
        push ebp
        push edi
        public_6d85ad0 : nop
        mov edi, dword ptr ds : [esi+0xC]
        add edi, 4
        dec eax
        test eax, eax
        mov dword ptr ds : [esi+0xC], edi
        mov ecx, edi
        mov dword ptr ds : [esi+0x2C], eax
        je public_6d85ae8
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d85b50
        public_6d85ae8 : nop
        mov eax, dword ptr ds : [esi+0x10]
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [eax]
        push edx
        call public_6db1dc2
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        lea ebp, ds:[esi+4]
        jne public_6d85b37
        xor eax, eax
        mov dword ptr ss : [ebp], eax
        xor ecx, ecx
        mov dword ptr ss : [ebp+4], ecx
        xor edx, edx
        mov dword ptr ss : [ebp+8], edx
        xor edi, edi
        mov dword ptr ss : [ebp+0xC], edi
        lea ebp, ds:[esi+0x14]
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], edx
        push eax
        mov dword ptr ss : [ebp+0xC], edi
        call public_6db1dc2
        add esp, 4
        jmp public_6d85b50
        public_6d85b37 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp], ecx
        lea edx, ds:[ecx+0x1000]
        mov dword ptr ss : [ebp+4], edx
        mov edi, ecx
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], eax
        public_6d85b50 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        jne public_6d85ad0
        pop edi
        pop ebp
        public_6d85b5d : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d85ac0)
    }
}

#undef public_6d85ad0
#undef public_6d85ae8
#undef public_6d85b37
#undef public_6d85b50
#undef public_6d85b5d
