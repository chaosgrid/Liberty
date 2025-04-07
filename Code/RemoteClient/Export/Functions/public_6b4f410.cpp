#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4f410);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4f422 _public_6b4f422
#define public_6b4f441 _public_6b4f441

PROC_DECLARE(0x6b4f410, internal_6b4f410, public_6b4f410);
extern "C" NAKED register_t __cdecl internal_6b4f410()
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
        je public_6b4f441
        public_6b4f422 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6b4f410
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6b6a092
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6b4f422
        public_6b4f441 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b4f410)
    }
}

#undef public_6b4f422
#undef public_6b4f441
