#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271d00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6271d10 _public_6271d10
#define public_6271d37 _public_6271d37

PROC_DECLARE(0x6271d00, internal_6271d00, public_6271d00);
extern "C" NAKED register_t __cdecl internal_6271d00()
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
        je public_6271d37
        mov edi, edi
        public_6271d10 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6271d10
        public_6271d37 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6271d00)
    }
}

#undef public_6271d10
#undef public_6271d37
