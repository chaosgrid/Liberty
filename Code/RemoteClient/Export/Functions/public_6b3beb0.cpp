#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3beb0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b3bec2 _public_6b3bec2
#define public_6b3bee1 _public_6b3bee1

PROC_DECLARE(0x6b3beb0, internal_6b3beb0, public_6b3beb0);
extern "C" NAKED register_t __cdecl internal_6b3beb0()
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
        je public_6b3bee1
        public_6b3bec2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6b3beb0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6b6a092
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6b3bec2
        public_6b3bee1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b3beb0)
    }
}

#undef public_6b3bec2
#undef public_6b3bee1
