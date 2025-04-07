#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66197c0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_66197d2 _public_66197d2
#define public_66197f1 _public_66197f1

PROC_DECLARE(0x66197c0, internal_66197c0, public_66197c0);
extern "C" NAKED register_t __cdecl internal_66197c0()
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
        je public_66197f1
        public_66197d2 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, ebx
        push eax
        call public_66197c0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_66281d0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_66197d2
        public_66197f1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x66197c0)
    }
}

#undef public_66197d2
#undef public_66197f1
