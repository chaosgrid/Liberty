#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2a00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed2a10 _public_6ed2a10
#define public_6ed2a1f _public_6ed2a1f
#define public_6ed2a28 _public_6ed2a28
#define public_6ed2a4f _public_6ed2a4f

PROC_DECLARE(0x6ed2a00, internal_6ed2a00, public_6ed2a00);
extern "C" NAKED register_t __cdecl internal_6ed2a00()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ed2a1f
        mov edi, edi
        public_6ed2a10 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_6ed2a10
        public_6ed2a1f : nop
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6ed2a4f
        public_6ed2a28 : nop
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
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6ed2a28
        public_6ed2a4f : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ed2a00)
    }
}

#undef public_6ed2a10
#undef public_6ed2a1f
#undef public_6ed2a28
#undef public_6ed2a4f
