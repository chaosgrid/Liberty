#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4515e1 _public_4515e1

PROC_DECLARE(0x4515b0, internal_4515b0, public_4515b0);
extern "C" NAKED register_t __cdecl internal_4515b0()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        mov ebx, dword ptr ss : [esp+0x50]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x5C]
        push edi
        lea ebp, ds:[ebx+0xB0]
        mov ecx, 9
        mov edi, ebp
        rep movsd
        mov eax, dword ptr ds : [public_66d11c]
        test eax, eax
        jne public_4515e1
        call public_5b73e0
        mov dword ptr ds : [public_66d11c], eax
        public_4515e1 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x80]
        push edx
        push ebp
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, 9
        lea esi, ss:[esp+0x10]
        lea edi, ss:[esp+0x34]
        rep movsd
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[ebx+0x20]
        call dword ptr ds : [public_5c6274]
        mov ecx, dword ptr ds : [ebx+0x64]
        mov edx, dword ptr ds : [public_5c6d90]
        push eax
        mov eax, dword ptr ds : [edx]
        push ecx
        push eax
        call dword ptr ds : [esi+0x94]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx+0x64]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x4515b0)
    }
}

#undef public_4515e1
