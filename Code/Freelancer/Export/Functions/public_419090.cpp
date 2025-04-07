#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419090);
CLANG_FORWARD_PROC_SYMBOL(public_419100);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4190a0 _public_4190a0
#define public_4190db _public_4190db

PROC_DECLARE(0x419090, internal_419090, public_419090);
extern "C" NAKED register_t __cdecl internal_419090()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6166a0]
        push ebx
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov ebx, eax
        je public_4190db
        push esi
        public_4190a0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_419100
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_6166a4]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [public_6166a4], ecx
        jne public_4190a0
        mov eax, dword ptr ds : [public_6166a0]
        pop esi
        public_4190db : nop
        push eax
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6166a0], eax
        mov dword ptr ds : [public_6166a4], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x419090)
    }
}

#undef public_4190a0
#undef public_4190db
