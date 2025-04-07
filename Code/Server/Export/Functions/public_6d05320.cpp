#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d05320);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d05330 _public_6d05330
#define public_6d05357 _public_6d05357

PROC_DECLARE(0x6d05320, internal_6d05320, public_6d05320);
extern "C" NAKED register_t __cdecl internal_6d05320()
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
        je public_6d05357
        mov edi, edi
        public_6d05330 : nop
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
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6d05330
        public_6d05357 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d05320)
    }
}

#undef public_6d05330
#undef public_6d05357
