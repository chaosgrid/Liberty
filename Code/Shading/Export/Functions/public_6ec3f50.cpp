#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3f50);

#define public_6ec3f65 _public_6ec3f65
#define public_6ec3f88 _public_6ec3f88

PROC_DECLARE(0x6ec3f50, internal_6ec3f50, public_6ec3f50);
extern "C" NAKED register_t __cdecl internal_6ec3f50()
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
        je public_6ec3f88
        push esi
        push edi
        public_6ec3f65 : nop
        mov esi, edx
        mov edi, ebx
        add edx, 0x14
        mov ecx, 5
        add ebx, 0x14
        cmp edx, ebp
        rep movsd
        jne public_6ec3f65
        pop edi
        pop esi
        mov dword ptr ds : [eax+8], ebx
        mov eax, dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        ret 8
        public_6ec3f88 : nop
        mov dword ptr ds : [eax+8], ebx
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec3f50)
    }
}

#undef public_6ec3f65
#undef public_6ec3f88
