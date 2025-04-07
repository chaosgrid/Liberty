#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec9050);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfae0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec8fee _public_6ec8fee
#define public_6ec9010 _public_6ec9010
#define public_6ec902f _public_6ec902f
#define public_6ec903d _public_6ec903d

PROC_DECLARE(0x6ec8fa0, internal_6ec8fa0, public_6ec8fa0);
extern "C" NAKED register_t __cdecl internal_6ec8fa0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        push edi
        xor ebp, ebp
        push esi
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6ed108c]
        push esi
        mov dword ptr ss : [esp+0x20], eax
        call public_6ecfae0
        mov ebx, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [ebx+0x58]
        mov dword ptr ss : [esp+0x1C], eax
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        call public_6ed0c5c
        add esp, 0xC
        cmp edi, ebp
        mov dword ptr ds : [eax], esi
        jne public_6ec8fee
        mov edi, eax
        public_6ec8fee : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        cmp ecx, ebp
        je public_6ec9010
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ds : [ecx+8], ebp
        mov dword ptr ds : [ecx+4], ebp
        call public_6ec9050
        public_6ec9010 : nop
        mov edx, dword ptr ds : [ebx+0x5C]
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [public_6ed1054]
        inc edx
        cmp eax, ebp
        mov dword ptr ds : [ebx+0x5C], edx
        je public_6ec902f
        push eax
        call esi
        add esp, 4
        mov dword ptr ss : [esp+0x14], ebp
        public_6ec902f : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebp
        je public_6ec903d
        push eax
        call esi
        add esp, 4
        public_6ec903d : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6ec8fa0)
    }
}

#undef public_6ec8fee
#undef public_6ec9010
#undef public_6ec902f
#undef public_6ec903d
