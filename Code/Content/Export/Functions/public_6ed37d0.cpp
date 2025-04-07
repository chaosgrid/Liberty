#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed37d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3830);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed37e0 _public_6ed37e0
#define public_6ed3810 _public_6ed3810

PROC_DECLARE(0x6ed37d0, internal_6ed37d0, public_6ed37d0);
extern "C" NAKED register_t __cdecl internal_6ed37d0()
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
        je public_6ed3810
        push esi
        public_6ed37e0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6ed3830
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6ed37e0
        pop esi
        public_6ed3810 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ed37d0)
    }
}

#undef public_6ed37e0
#undef public_6ed3810
