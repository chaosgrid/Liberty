#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b721f0);

#define public_6b72212 _public_6b72212
#define public_6b72243 _public_6b72243
#define public_6b7224c _public_6b7224c

PROC_DECLARE(0x6b721f0, internal_6b721f0, public_6b721f0);
extern "C" NAKED register_t __cdecl internal_6b721f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov ebx, ecx
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[edi+eax*4]
        cmp edi, eax
        mov dword ptr ss : [esp+0x18], eax
        jae public_6b72243
        mov ebp, dword ptr ss : [esp+0x14]
        public_6b72212 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ecx+4]
        add esi, edi
        mov edx, dword ptr ds : [esi]
        and edx, 0x7FFFFFFF
        lea eax, ds:[edx+eax+4]
        push eax
        push ebp
        call dword ptr ds : [public_6b79008]
        add esp, 8
        test eax, eax
        je public_6b7224c
        mov eax, dword ptr ss : [esp+0x18]
        add edi, 0xC
        cmp edi, eax
        jb public_6b72212
        public_6b72243 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6b7224c : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6b721f0)
    }
}

#undef public_6b72212
#undef public_6b72243
#undef public_6b7224c
