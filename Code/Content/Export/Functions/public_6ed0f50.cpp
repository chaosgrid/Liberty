#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0f50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed0f6e _public_6ed0f6e
#define public_6ed0f8b _public_6ed0f8b

PROC_DECLARE(0x6ed0f50, internal_6ed0f50, public_6ed0f50);
extern "C" NAKED register_t __cdecl internal_6ed0f50()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x40
        mov ebx, ecx
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6ed0f6e
        mov edi, eax
        public_6ed0f6e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6ed0f8b
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, 0xE
        rep movsd
        public_6ed0f8b : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ed0f50)
    }
}

#undef public_6ed0f6e
#undef public_6ed0f8b
