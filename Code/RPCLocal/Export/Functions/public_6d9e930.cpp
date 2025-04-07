#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9e930);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9e940 _public_6d9e940
#define public_6d9e967 _public_6d9e967

PROC_DECLARE(0x6d9e930, internal_6d9e930, public_6d9e930);
extern "C" NAKED register_t __cdecl internal_6d9e930()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x24]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6d9e967
        mov edi, edi
        public_6d9e940 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6db1dc2
        mov ecx, dword ptr ds : [edi+0x28]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x28], ecx
        jne public_6d9e940
        public_6d9e967 : nop
        mov eax, dword ptr ds : [edi+0x24]
        push eax
        call public_6db1dc2
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+0x24], eax
        mov dword ptr ds : [edi+0x28], eax
        mov ecx, edi
        pop edi
        pop esi
        pop ebx
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d9e930)
    }
}

#undef public_6d9e940
#undef public_6d9e967
