#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c33bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c33c00 _public_6c33c00
#define public_6c33c0f _public_6c33c0f
#define public_6c33c18 _public_6c33c18
#define public_6c33c3f _public_6c33c3f

PROC_DECLARE(0x6c33bf0, internal_6c33bf0, public_6c33bf0);
extern "C" NAKED register_t __cdecl internal_6c33bf0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x20]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6c33c0f
        mov edi, edi
        public_6c33c00 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6c33c00
        public_6c33c0f : nop
        mov ebx, dword ptr ds : [edi+0x20]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6c33c3f
        public_6c33c18 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6c34ea0
        mov ecx, dword ptr ds : [edi+0x24]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x24], ecx
        jne public_6c33c18
        public_6c33c3f : nop
        mov byte ptr ds : [edi+0x2C], 0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6c33bf0)
    }
}

#undef public_6c33c00
#undef public_6c33c0f
#undef public_6c33c18
#undef public_6c33c3f
