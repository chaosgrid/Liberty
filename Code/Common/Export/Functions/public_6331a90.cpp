#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6331a90);
CLANG_FORWARD_PROC_SYMBOL(public_63322f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6331aa0 _public_6331aa0
#define public_6331ad0 _public_6331ad0

PROC_DECLARE(0x6331a90, internal_6331a90, public_6331a90);
extern "C" NAKED register_t __cdecl internal_6331a90()
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
        je public_6331ad0
        push esi
        public_6331aa0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_63322f0
        push esi
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6331aa0
        pop esi
        public_6331ad0 : nop
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
        UNREACHABLE_TRAP(0x6331a90)
    }
}

#undef public_6331aa0
#undef public_6331ad0
