#include "Common-PCH.h"


#define public_626a405 _public_626a405
#define public_626a428 _public_626a428

PROC_DECLARE(0x626a3f0, internal_626a3f0, public_626a3f0);
extern "C" NAKED register_t __cdecl internal_626a3f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, ecx
        push ebp
        mov ebp, dword ptr ds : [eax+8]
        cmp edx, ebp
        je public_626a428
        push esi
        push edi
        public_626a405 : nop
        mov esi, edx
        mov edi, ebx
        add edx, 0x20
        mov ecx, 8
        add ebx, 0x20
        cmp edx, ebp
        rep movsd
        jne public_626a405
        pop edi
        pop esi
        mov dword ptr ds : [eax+8], ebx
        mov eax, dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        ret 8
        public_626a428 : nop
        mov dword ptr ds : [eax+8], ebx
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x626a3f0)
    }
}

#undef public_626a405
#undef public_626a428
