#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bbd70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62bbd85 _public_62bbd85
#define public_62bbd94 _public_62bbd94
#define public_62bbd9b _public_62bbd9b
#define public_62bbda7 _public_62bbda7
#define public_62bbdb5 _public_62bbdb5

PROC_DECLARE(0x62bbd70, internal_62bbd70, public_62bbd70);
extern "C" NAKED register_t __cdecl internal_62bbd70()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+0xC]
        push edi
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_639dce0
        je public_62bbd9b
        public_62bbd85 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62bbd94
        push eax
        call public_6391d5a
        add esp, 4
        public_62bbd94 : nop
        add edi, 4
        cmp edi, ebx
        jne public_62bbd85
        public_62bbd9b : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, edx
        cmp eax, edx
        je public_62bbdb5
        public_62bbda7 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_62bbda7
        public_62bbdb5 : nop
        mov dword ptr ds : [esi+0xC], ecx
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_6391d5a
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62bbd70)
    }
}

#undef public_62bbd85
#undef public_62bbd94
#undef public_62bbd9b
#undef public_62bbda7
#undef public_62bbdb5
