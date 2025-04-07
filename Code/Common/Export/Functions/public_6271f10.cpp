#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6271f24 _public_6271f24
#define public_6271f4f _public_6271f4f
#define public_6271f51 _public_6271f51
#define public_6271f57 _public_6271f57

PROC_DECLARE(0x6271f10, internal_6271f10, public_6271f10);
extern "C" NAKED register_t __cdecl internal_6271f10()
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
        je public_6271f57
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6271f57
        public_6271f24 : nop
        mov cx, word ptr ds : [esi+8]
        cmp cx, word ptr ds : [eax+8]
        jne public_6271f4f
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
        jmp public_6271f51
        public_6271f4f : nop
        mov esi, eax
        public_6271f51 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        jne public_6271f24
        public_6271f57 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6271f10)
    }
}

#undef public_6271f24
#undef public_6271f4f
#undef public_6271f51
#undef public_6271f57
