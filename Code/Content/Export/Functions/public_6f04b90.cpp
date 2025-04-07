#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f04b90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f04bad _public_6f04bad
#define public_6f04bca _public_6f04bca

PROC_DECLARE(0x6f04b90, internal_6f04b90, public_6f04b90);
extern "C" NAKED register_t __cdecl internal_6f04b90()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x34
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f04bad
        mov edi, eax
        public_6f04bad : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6f04bca
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0xB
        rep movsd
        public_6f04bca : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f04b90)
    }
}

#undef public_6f04bad
#undef public_6f04bca
