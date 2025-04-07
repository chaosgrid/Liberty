#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6efc950);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6efc960 _public_6efc960
#define public_6efc990 _public_6efc990

PROC_DECLARE(0x6efc950, internal_6efc950, public_6efc950);
extern "C" NAKED register_t __cdecl internal_6efc950()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+0x1C]
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6efc990
        push esi
        public_6efc960 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6eec8d0
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+0x20]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+0x20], ecx
        jne public_6efc960
        pop esi
        public_6efc990 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        push ecx
        call public_6fa8fe0
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+0x1C], eax
        mov dword ptr ds : [ebx+0x20], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6efc950)
    }
}

#undef public_6efc960
#undef public_6efc990
