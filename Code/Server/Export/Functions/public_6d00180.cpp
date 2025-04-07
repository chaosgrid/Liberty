#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00180);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d00194 _public_6d00194
#define public_6d001c2 _public_6d001c2
#define public_6d001c4 _public_6d001c4
#define public_6d001c9 _public_6d001c9

PROC_DECLARE(0x6d00180, internal_6d00180, public_6d00180);
extern "C" NAKED register_t __cdecl internal_6d00180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d8d8e4]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_6d001c9
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_6d00194 : nop
        cmp dword ptr ds : [esi+8], ebx
        jne public_6d001c2
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
        mov eax, dword ptr ds : [public_6d8d8e8]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_6d8d8e8], eax
        jmp public_6d001c4
        public_6d001c2 : nop
        mov esi, dword ptr ds : [esi]
        public_6d001c4 : nop
        cmp esi, edi
        jne public_6d00194
        pop ebx
        public_6d001c9 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d00180)
    }
}

#undef public_6d00194
#undef public_6d001c2
#undef public_6d001c4
#undef public_6d001c9
