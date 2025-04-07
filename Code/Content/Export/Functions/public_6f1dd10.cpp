#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3710);
CLANG_FORWARD_PROC_SYMBOL(public_6f1dd10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f1dd20 _public_6f1dd20
#define public_6f1dd50 _public_6f1dd50

PROC_DECLARE(0x6f1dd10, internal_6f1dd10, public_6f1dd10);
extern "C" NAKED register_t __cdecl internal_6f1dd10()
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
        je public_6f1dd50
        push esi
        public_6f1dd20 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6ed3710
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6f1dd20
        pop esi
        public_6f1dd50 : nop
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
        UNREACHABLE_TRAP(0x6f1dd10)
    }
}

#undef public_6f1dd20
#undef public_6f1dd50
