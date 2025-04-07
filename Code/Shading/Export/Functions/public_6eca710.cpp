#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca710);

#define public_6eca720 _public_6eca720
#define public_6eca740 _public_6eca740

PROC_DECLARE(0x6eca710, internal_6eca710, public_6eca710);
extern "C" NAKED register_t __cdecl internal_6eca710()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [esi]
        cmp edx, esi
        je public_6eca740
        push ebx
        push edi
        lea esp, ss:[esp]
        public_6eca720 : nop
        mov eax, edx
        mov edi, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [edi], ebx
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], eax
        mov edi, dword ptr ds : [ecx+8]
        dec edi
        cmp edx, esi
        mov dword ptr ds : [ecx+8], edi
        jne public_6eca720
        pop edi
        pop ebx
        public_6eca740 : nop
        xor eax, eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eca710)
    }
}

#undef public_6eca720
#undef public_6eca740
