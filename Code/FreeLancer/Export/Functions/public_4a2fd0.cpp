#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2fd0);

#define public_4a2fe5 _public_4a2fe5
#define public_4a3008 _public_4a3008

PROC_DECLARE(0x4a2fd0, internal_4a2fd0, public_4a2fd0);
extern "C" NAKED register_t __cdecl internal_4a2fd0()
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
        je public_4a3008
        push esi
        push edi
        public_4a2fe5 : nop
        mov esi, edx
        mov edi, ebx
        add edx, 0x18
        mov ecx, 6
        add ebx, 0x18
        cmp edx, ebp
        rep movsd
        jne public_4a2fe5
        pop edi
        pop esi
        mov dword ptr ds : [eax+8], ebx
        mov eax, dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        ret 8
        public_4a3008 : nop
        mov dword ptr ds : [eax+8], ebx
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4a2fd0)
    }
}

#undef public_4a2fe5
#undef public_4a3008
