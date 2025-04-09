#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5762f0);
CLANG_FORWARD_PROC_SYMBOL(public_576360);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_57638a _public_57638a
#define public_57639e _public_57639e

PROC_DECLARE(0x576360, internal_576360, public_576360);
extern "C" NAKED register_t __cdecl internal_576360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push edi
        push eax
        mov ebx, ecx
        call public_5762f0
        mov esi, dword ptr ds : [public_67c270]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_57638a
        mov edi, eax
        public_57638a : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_57639e
        mov dword ptr ds : [eax], ebx
        public_57639e : nop
        mov eax, dword ptr ds : [public_67c274]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_67c274], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x576360)
    }
}

#undef public_57638a
#undef public_57639e
