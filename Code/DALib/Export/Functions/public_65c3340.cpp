#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c2500);
CLANG_FORWARD_PROC_SYMBOL(public_65c3340);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

#define public_65c3350 _public_65c3350
#define public_65c3380 _public_65c3380

PROC_DECLARE(0x65c3340, internal_65c3340, public_65c3340);
extern "C" NAKED register_t __cdecl internal_65c3340()
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
        je public_65c3380
        push esi
        public_65c3350 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_65c2500
        push esi
        call public_65c6a60
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_65c3350
        pop esi
        public_65c3380 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_65c6a60
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65c3340)
    }
}

#undef public_65c3350
#undef public_65c3380
