#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d780);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2d7b1 _public_6f2d7b1
#define public_6f2d7c6 _public_6f2d7c6

PROC_DECLARE(0x6f2d780, internal_6f2d780, public_6f2d780);
extern "C" NAKED register_t __cdecl internal_6f2d780()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [eax+4], ecx
        mov ebp, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea ebx, ds:[edi+8]
        je public_6f2d7c6
        public_6f2d7b1 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call public_6ecfe80
        cmp esi, ebp
        jne public_6f2d7b1
        public_6f2d7c6 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        push edi
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        pop edi
        dec ecx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f2d780)
    }
}

#undef public_6f2d7b1
#undef public_6f2d7c6
