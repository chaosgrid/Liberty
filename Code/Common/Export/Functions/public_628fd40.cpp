#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628fd40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_628fd52 _public_628fd52
#define public_628fd71 _public_628fd71

PROC_DECLARE(0x628fd40, internal_628fd40, public_628fd40);
extern "C" NAKED register_t __cdecl internal_628fd40()
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
        je public_628fd71
        public_628fd52 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_628fd40
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_628fd52
        public_628fd71 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x628fd40)
    }
}

#undef public_628fd52
#undef public_628fd71
