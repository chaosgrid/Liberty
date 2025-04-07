#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6624c60);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6624c72 _public_6624c72
#define public_6624c91 _public_6624c91

PROC_DECLARE(0x6624c60, internal_6624c60, public_6624c60);
extern "C" NAKED register_t __cdecl internal_6624c60()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+8]
        cmp edi, eax
        mov esi, edi
        je public_6624c91
        public_6624c72 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, ebx
        push eax
        call public_6624c60
        mov esi, dword ptr ds : [esi]
        push edi
        call public_66281d0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6624c72
        public_6624c91 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6624c60)
    }
}

#undef public_6624c72
#undef public_6624c91
