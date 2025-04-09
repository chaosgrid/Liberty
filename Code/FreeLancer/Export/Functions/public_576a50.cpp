#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576a50);
CLANG_FORWARD_PROC_SYMBOL(public_576ac0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_576a60 _public_576a60
#define public_576a9c _public_576a9c

PROC_DECLARE(0x576a50, internal_576a50, public_576a50);
extern "C" NAKED register_t __cdecl internal_576a50()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_67c228]
        push edi
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_576a9c
        push esi
        nop 
        public_576a60 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_576ac0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_67c22c]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [public_67c22c], ecx
        jne public_576a60
        mov ebx, dword ptr ds : [public_67c228]
        pop esi
        public_576a9c : nop
        push ebx
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_67c228], eax
        mov dword ptr ds : [public_67c22c], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x576a50)
    }
}

#undef public_576a60
#undef public_576a9c
