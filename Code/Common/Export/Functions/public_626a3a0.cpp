#include "Common-PCH.h"


#define public_626a3b7 _public_626a3b7
#define public_626a3e0 _public_626a3e0

PROC_DECLARE(0x626a3a0, internal_626a3a0, public_626a3a0);
extern "C" NAKED register_t __cdecl internal_626a3a0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        push ebp
        mov ebp, dword ptr ds : [eax+8]
        lea edx, ds:[ecx+0x20]
        cmp edx, ebp
        je public_626a3e0
        push ebx
        push esi
        push edi
        lea ebx, ds:[edx-0x20]
        public_626a3b7 : nop
        mov esi, edx
        mov edi, ebx
        add edx, 0x20
        mov ecx, 8
        add ebx, 0x20
        cmp edx, ebp
        rep movsd
        jne public_626a3b7
        mov ecx, dword ptr ds : [eax+8]
        pop edi
        pop esi
        add ecx, 0xFFFFFFE0
        pop ebx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+8]
        pop ebp
        ret 4
        public_626a3e0 : nop
        add dword ptr ds : [eax+8], 0xFFFFFFE0
        mov eax, ecx
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x626a3a0)
    }
}

#undef public_626a3b7
#undef public_626a3e0
