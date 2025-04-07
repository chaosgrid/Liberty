#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6333960 _public_6333960
#define public_6333970 _public_6333970
#define public_63339b2 _public_63339b2

PROC_DECLARE(0x6333950, internal_6333950, public_6333950);
extern "C" NAKED register_t __cdecl internal_6333950()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x2C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_63339b2
        push ebx
        mov edi, edi
        public_6333960 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6333970
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6333970 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        dec dword ptr ds : [edi+0x24]
        mov ebx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+0x30]
        add esp, 8
        dec ecx
        mov dword ptr ds : [edi+0x30], ecx
        cmp ebx, dword ptr ds : [edi+0x2C]
        mov esi, ebx
        jne public_6333960
        pop ebx
        public_63339b2 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6333950)
    }
}

#undef public_6333960
#undef public_6333970
#undef public_63339b2
