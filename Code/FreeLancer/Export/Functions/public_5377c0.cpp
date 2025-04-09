#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410fe0);
CLANG_FORWARD_PROC_SYMBOL(public_5377c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_53780c _public_53780c

PROC_DECLARE(0x5377c0, internal_5377c0, public_5377c0);
extern "C" NAKED register_t __cdecl internal_5377c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        sub esp, 0x60
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        mov esi, dword ptr ss : [esp+0x74]
        push edi
        mov dword ptr ds : [ebx+0xEC], edx
        lea ebp, ds:[ebx+0xF0]
        mov ecx, 0xC
        mov edi, ebp
        rep movsd
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_6789c0]
        test eax, eax
        jne public_53780c
        call public_5b73e0
        mov dword ptr ds : [public_6789c0], eax
        public_53780c : nop
        mov edx, dword ptr ds : [eax]
        push ebp
        push esi
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, 0xC
        lea esi, ss:[esp+0x10]
        lea edi, ss:[esp+0x40]
        lea edx, ss:[esp+0x40]
        rep movsd
        push edx
        mov ecx, ebx
        call public_410fe0
        pop edi
        xor eax, eax
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x120], eax
        mov dword ptr ds : [ebx+0x124], eax
        mov dword ptr ds : [ebx+0x128], eax
        pop ebx
        add esp, 0x60
        ret 8
        UNREACHABLE_TRAP(0x5377c0)
    }
}

#undef public_53780c
