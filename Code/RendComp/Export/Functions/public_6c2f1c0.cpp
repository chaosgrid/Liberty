#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2f230);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2f1d6 _public_6c2f1d6
#define public_6c2f206 _public_6c2f206
#define public_6c2f222 _public_6c2f222

PROC_DECLARE(0x6c2f1c0, internal_6c2f1c0, public_6c2f1c0);
extern "C" NAKED register_t __cdecl internal_6c2f1c0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        je public_6c2f222
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6c2f206
        push esi
        public_6c2f1d6 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6c2f230
        push esi
        call public_6c34ea0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6c2f1d6
        pop esi
        public_6c2f206 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6c34ea0
        xor eax, eax
        push ebx
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        call public_6c34ea0
        add esp, 8
        pop edi
        pop ebp
        public_6c2f222 : nop
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6c2f1c0)
    }
}

#undef public_6c2f1d6
#undef public_6c2f206
#undef public_6c2f222
