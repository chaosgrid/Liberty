#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401b50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_401b62 _public_401b62
#define public_401b81 _public_401b81

PROC_DECLARE(0x401b50, internal_401b50, public_401b50);
extern "C" NAKED register_t __cdecl internal_401b50()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_401b81
        public_401b62 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_401b50
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_401b62
        public_401b81 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x401b50)
    }
}

#undef public_401b62
#undef public_401b81
