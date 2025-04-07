#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43500);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d43510 _public_6d43510
#define public_6d43542 _public_6d43542

PROC_DECLARE(0x6d43500, internal_6d43500, public_6d43500);
extern "C" NAKED register_t __cdecl internal_6d43500()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d8f638]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_6d43542
        nop 
        public_6d43510 : nop
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
        mov ecx, dword ptr ds : [public_6d8f63c]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6d8f63c], ecx
        jne public_6d43510
        mov eax, dword ptr ds : [public_6d8f638]
        public_6d43542 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6d8f638], eax
        mov dword ptr ds : [public_6d8f63c], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d43500)
    }
}

#undef public_6d43510
#undef public_6d43542
