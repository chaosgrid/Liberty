#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a820);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_45a830 _public_45a830
#define public_45a86c _public_45a86c

PROC_DECLARE(0x45a820, internal_45a820, public_45a820);
extern "C" NAKED register_t __cdecl internal_45a820()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_66d33c]
        push edi
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_45a86c
        push esi
        nop 
        public_45a830 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_5154f0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_66d340]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [public_66d340], ecx
        jne public_45a830
        mov ebx, dword ptr ds : [public_66d33c]
        pop esi
        public_45a86c : nop
        push ebx
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_66d33c], eax
        mov dword ptr ds : [public_66d340], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x45a820)
    }
}

#undef public_45a830
#undef public_45a86c
