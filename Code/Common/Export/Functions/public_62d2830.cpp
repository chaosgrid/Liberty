#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2830);
CLANG_FORWARD_PROC_SYMBOL(public_62db7c0);
CLANG_FORWARD_PROC_SYMBOL(public_62e68e0);

#define public_62d2850 _public_62d2850
#define public_62d286c _public_62d286c

PROC_DECLARE(0x62d2830, internal_62d2830, public_62d2830);
extern "C" NAKED register_t __cdecl internal_62d2830()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x174]
        mov dword ptr ds : [edi+0xEC], ebp
        mov eax, dword ptr ds : [esi]
        xor ebx, ebx
        test eax, eax
        je public_62d286c
        mov edi, edi
        public_62d2850 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+0xEC]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+8]
        inc ebx
        add esi, 4
        cmp ebx, 0x15
        jge public_62d286c
        cmp dword ptr ds : [esi], 0
        jne public_62d2850
        public_62d286c : nop
        mov ecx, dword ptr ds : [edi+8]
        push ebp
        call public_62e68e0
        mov ecx, dword ptr ds : [edi+0xC]
        push ebp
        call public_62db7c0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62d2830)
    }
}

#undef public_62d2850
#undef public_62d286c
