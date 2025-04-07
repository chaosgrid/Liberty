#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_435fe0 _public_435fe0
#define public_436010 _public_436010

PROC_DECLARE(0x435fd0, internal_435fd0, public_435fd0);
extern "C" NAKED register_t __cdecl internal_435fd0()
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
        je public_436010
        push esi
        public_435fe0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_4dd9a0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_435fe0
        pop esi
        public_436010 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_5b7e1d
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x435fd0)
    }
}

#undef public_435fe0
#undef public_436010
