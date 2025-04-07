#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63320a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63320b0 _public_63320b0
#define public_63320dc _public_63320dc
#define public_63320f1 _public_63320f1

PROC_DECLARE(0x63320a0, internal_63320a0, public_63320a0);
extern "C" NAKED register_t __cdecl internal_63320a0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_63320f1
        push esi
        public_63320b0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_63320dc
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_63320dc : nop
        push esi
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_63320b0
        pop esi
        public_63320f1 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6391d5a
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63320a0)
    }
}

#undef public_63320b0
#undef public_63320dc
#undef public_63320f1
