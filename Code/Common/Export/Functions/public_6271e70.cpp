#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6271e83 _public_6271e83
#define public_6271eb2 _public_6271eb2
#define public_6271eb4 _public_6271eb4
#define public_6271eb9 _public_6271eb9

PROC_DECLARE(0x6271e70, internal_6271e70, public_6271e70);
extern "C" NAKED register_t __cdecl internal_6271e70()
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
        je public_6271eb9
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        public_6271e83 : nop
        mov ax, word ptr ds : [esi+8]
        cmp ax, word ptr ss : [ebp]
        jne public_6271eb2
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
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        jmp public_6271eb4
        public_6271eb2 : nop
        mov esi, dword ptr ds : [esi]
        public_6271eb4 : nop
        cmp esi, ebx
        jne public_6271e83
        pop ebp
        public_6271eb9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6271e70)
    }
}

#undef public_6271e83
#undef public_6271eb2
#undef public_6271eb4
#undef public_6271eb9
