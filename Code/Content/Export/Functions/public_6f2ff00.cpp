#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ff00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2ff12 _public_6f2ff12
#define public_6f2ff31 _public_6f2ff31

PROC_DECLARE(0x6f2ff00, internal_6f2ff00, public_6f2ff00);
extern "C" NAKED register_t __cdecl internal_6f2ff00()
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
        je public_6f2ff31
        public_6f2ff12 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6f2ff00
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f2ff12
        public_6f2ff31 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f2ff00)
    }
}

#undef public_6f2ff12
#undef public_6f2ff31
