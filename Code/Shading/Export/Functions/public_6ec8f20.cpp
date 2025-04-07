#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec8f40 _public_6ec8f40
#define public_6ec8f63 _public_6ec8f63
#define public_6ec8f73 _public_6ec8f73
#define public_6ec8f90 _public_6ec8f90

PROC_DECLARE(0x6ec8f20, internal_6ec8f20, public_6ec8f20);
extern "C" NAKED register_t __cdecl internal_6ec8f20()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+0x58]
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+4], eax
        je public_6ec8f90
        push ebx
        mov ebx, dword ptr ds : [public_6ed1054]
        push ebp
        push esi
        xor ebp, ebp
        mov edi, edi
        public_6ec8f40 : nop
        mov esi, edi
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebp
        je public_6ec8f63
        push eax
        call ebx
        add esp, 4
        mov dword ptr ds : [esi+0xC], ebp
        public_6ec8f63 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebp
        je public_6ec8f73
        push eax
        call ebx
        add esp, 4
        mov dword ptr ds : [esi+0x10], ebp
        public_6ec8f73 : nop
        push esi
        call public_6ed0c50
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x5C]
        add esp, 4
        dec ecx
        mov dword ptr ds : [eax+0x5C], ecx
        cmp edi, dword ptr ss : [esp+0x10]
        jne public_6ec8f40
        pop esi
        pop ebp
        pop ebx
        public_6ec8f90 : nop
        xor eax, eax
        pop edi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ec8f20)
    }
}

#undef public_6ec8f40
#undef public_6ec8f63
#undef public_6ec8f73
#undef public_6ec8f90
