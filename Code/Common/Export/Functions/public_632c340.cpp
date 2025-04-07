#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63272c0);
CLANG_FORWARD_PROC_SYMBOL(public_632c340);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_632c350 _public_632c350
#define public_632c380 _public_632c380

PROC_DECLARE(0x632c340, internal_632c340, public_632c340);
extern "C" NAKED register_t __cdecl internal_632c340()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_632c380
        push esi
        public_632c350 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_63272c0
        push esi
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+0xC]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_632c350
        pop esi
        public_632c380 : nop
        mov ecx, dword ptr ds : [ebx+8]
        push ecx
        call public_6391d5a
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x632c340)
    }
}

#undef public_632c350
#undef public_632c380
