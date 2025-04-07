#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d571a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d571b3 _public_6d571b3
#define public_6d571e0 _public_6d571e0
#define public_6d571e2 _public_6d571e2
#define public_6d571e7 _public_6d571e7

PROC_DECLARE(0x6d571a0, internal_6d571a0, public_6d571a0);
extern "C" NAKED register_t __cdecl internal_6d571a0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6d571e7
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d571b3 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, dword ptr ss : [ebp]
        jne public_6d571e0
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        jmp public_6d571e2
        public_6d571e0 : nop
        mov esi, dword ptr ds : [esi]
        public_6d571e2 : nop
        cmp esi, ebx
        jne public_6d571b3
        pop ebp
        public_6d571e7 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d571a0)
    }
}

#undef public_6d571b3
#undef public_6d571e0
#undef public_6d571e2
#undef public_6d571e7
