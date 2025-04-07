#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a6930);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a694e _public_62a694e
#define public_62a696b _public_62a696b

PROC_DECLARE(0x62a6930, internal_62a6930, public_62a6930);
extern "C" NAKED register_t __cdecl internal_62a6930()
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
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_62a694e
        mov edi, eax
        public_62a694e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_62a696b
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, 0xE
        rep movsd
        public_62a696b : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62a6930)
    }
}

#undef public_62a694e
#undef public_62a696b
