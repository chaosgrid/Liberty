#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f867a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f867b4 _public_6f867b4
#define public_6f867db _public_6f867db

PROC_DECLARE(0x6f867a0, internal_6f867a0, public_6f867a0);
extern "C" NAKED register_t __cdecl internal_6f867a0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], offset public_6fbc7cc
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6f867db
        public_6f867b4 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+0xC]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0xC], ecx
        jne public_6f867b4
        public_6f867db : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f867a0)
    }
}

#undef public_6f867b4
#undef public_6f867db
