#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6626f20);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6626f30 _public_6626f30
#define public_6626f54 _public_6626f54
#define public_6626f69 _public_6626f69

PROC_DECLARE(0x6626f20, internal_6626f20, public_6626f20);
extern "C" NAKED register_t __cdecl internal_6626f20()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push ebp
        push edi
        mov ebp, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6626f69
        push esi
        public_6626f30 : nop
        mov esi, edi
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6626f54
        push eax
        call dword ptr ds : [public_662902c]
        add esp, 4
        public_6626f54 : nop
        push esi
        call public_66281d0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6626f30
        pop esi
        public_6626f69 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_66281d0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop edi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6626f20)
    }
}

#undef public_6626f30
#undef public_6626f54
#undef public_6626f69
