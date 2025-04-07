#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43460);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d43470 _public_6d43470
#define public_6d434a2 _public_6d434a2

PROC_DECLARE(0x6d43460, internal_6d43460, public_6d43460);
extern "C" NAKED register_t __cdecl internal_6d43460()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d8f644]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_6d434a2
        nop 
        public_6d43470 : nop
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
        mov ecx, dword ptr ds : [public_6d8f648]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6d8f648], ecx
        jne public_6d43470
        mov eax, dword ptr ds : [public_6d8f644]
        public_6d434a2 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6d8f644], eax
        mov dword ptr ds : [public_6d8f648], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d43460)
    }
}

#undef public_6d43470
#undef public_6d434a2
