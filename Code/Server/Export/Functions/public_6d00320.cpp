#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00320);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d00330 _public_6d00330
#define public_6d00362 _public_6d00362

PROC_DECLARE(0x6d00320, internal_6d00320, public_6d00320);
extern "C" NAKED register_t __cdecl internal_6d00320()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d8d8d8]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_6d00362
        nop 
        public_6d00330 : nop
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
        mov ecx, dword ptr ds : [public_6d8d8dc]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6d8d8dc], ecx
        jne public_6d00330
        mov eax, dword ptr ds : [public_6d8d8d8]
        public_6d00362 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6d8d8d8], eax
        mov dword ptr ds : [public_6d8d8dc], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d00320)
    }
}

#undef public_6d00330
#undef public_6d00362
