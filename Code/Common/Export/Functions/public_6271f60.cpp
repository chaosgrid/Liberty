#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6271f74 _public_6271f74
#define public_6271f9f _public_6271f9f
#define public_6271fa1 _public_6271fa1
#define public_6271fa7 _public_6271fa7

PROC_DECLARE(0x6271f60, internal_6271f60, public_6271f60);
extern "C" NAKED register_t __cdecl internal_6271f60()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6271fa7
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6271fa7
        public_6271f74 : nop
        mov cx, word ptr ds : [esi+8]
        cmp cx, word ptr ds : [eax+8]
        je public_6271f9f
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+8], eax
        jmp public_6271fa1
        public_6271f9f : nop
        mov esi, eax
        public_6271fa1 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        jne public_6271f74
        public_6271fa7 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6271f60)
    }
}

#undef public_6271f74
#undef public_6271f9f
#undef public_6271fa1
#undef public_6271fa7
