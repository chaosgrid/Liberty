#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4b50);

#define public_4b4b65 _public_4b4b65
#define public_4b4b88 _public_4b4b88

PROC_DECLARE(0x4b4b50, internal_4b4b50, public_4b4b50);
extern "C" NAKED register_t __cdecl internal_4b4b50()
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
        je public_4b4b88
        push esi
        push edi
        public_4b4b65 : nop
        mov esi, edx
        mov edi, ebx
        add edx, 0x20
        mov ecx, 8
        add ebx, 0x20
        cmp edx, ebp
        rep movsd
        jne public_4b4b65
        pop edi
        pop esi
        mov dword ptr ds : [eax+8], ebx
        mov eax, dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        ret 8
        public_4b4b88 : nop
        mov dword ptr ds : [eax+8], ebx
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4b4b50)
    }
}

#undef public_4b4b65
#undef public_4b4b88
