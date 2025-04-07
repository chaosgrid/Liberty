#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1f10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed1f22 _public_6ed1f22
#define public_6ed1f41 _public_6ed1f41

PROC_DECLARE(0x6ed1f10, internal_6ed1f10, public_6ed1f10);
extern "C" NAKED register_t __cdecl internal_6ed1f10()
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
        je public_6ed1f41
        public_6ed1f22 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6ed1f10
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6ed1f22
        public_6ed1f41 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ed1f10)
    }
}

#undef public_6ed1f22
#undef public_6ed1f41
