#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31890);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f318a2 _public_6f318a2
#define public_6f318c1 _public_6f318c1

PROC_DECLARE(0x6f31890, internal_6f31890, public_6f31890);
extern "C" NAKED register_t __cdecl internal_6f31890()
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
        je public_6f318c1
        public_6f318a2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6f31890
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6f57e26
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f318a2
        public_6f318c1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f31890)
    }
}

#undef public_6f318a2
#undef public_6f318c1
