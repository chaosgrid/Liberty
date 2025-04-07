#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3ea02 _public_6f3ea02
#define public_6f3ea21 _public_6f3ea21

PROC_DECLARE(0x6f3e9f0, internal_6f3e9f0, public_6f3e9f0);
extern "C" NAKED register_t __cdecl internal_6f3e9f0()
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
        je public_6f3ea21
        public_6f3ea02 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6f3e9f0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6f57e26
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f3ea02
        public_6f3ea21 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f3e9f0)
    }
}

#undef public_6f3ea02
#undef public_6f3ea21
