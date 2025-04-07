#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6807560);
CLANG_FORWARD_PROC_SYMBOL(public_68075c0);

#define public_680758b _public_680758b
#define public_68075ad _public_68075ad

PROC_DECLARE(0x6807560, internal_6807560, public_6807560);
extern "C" NAKED register_t __cdecl internal_6807560()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ecx
        jge public_680758b
        mov ebx, dword ptr ds : [esi+8]
        mov ecx, eax
        shl ecx, 4
        add ecx, ebx
        cmp dword ptr ds : [ecx], 0xFFFFFFFE
        jne public_680758b
        cmp dword ptr ds : [ecx+8], edi
        je public_68075ad
        public_680758b : nop
        push edx
        call public_68075c0
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        add esp, 4
        shl ecx, 4
        mov dword ptr ds : [edx+ecx], 0xFFFFFFFE
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+ecx+8], edi
        mov dword ptr ds : [edi+0xC], eax
        public_68075ad : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6807560)
    }
}

#undef public_680758b
#undef public_68075ad
