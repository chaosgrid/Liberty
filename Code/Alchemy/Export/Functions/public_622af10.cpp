#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222f30);
CLANG_FORWARD_PROC_SYMBOL(public_622af10);

#define public_622af4f _public_622af4f
#define public_622af73 _public_622af73
#define public_622af80 _public_622af80
#define public_622af8a _public_622af8a
#define public_622afca _public_622afca

PROC_DECLARE(0x622af10, internal_622af10, public_622af10);
extern "C" NAKED register_t __cdecl internal_622af10()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        or esi, 0xFFFFFFFF
        test edi, edi
        je public_622afca
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0xC]
        mov ebp, dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x10]
        push 1
        push ecx
        mov ecx, ebp
        call public_6222f30
        test eax, eax
        jge public_622af4f
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        add esp, 0x10
        ret 
        public_622af4f : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi]
        and eax, 0xFF
        push eax
        push edi
        call dword ptr ds : [edx+0x38]
        lea ecx, ss:[esp+0x28]
        push 1
        push ecx
        mov ecx, ebp
        call public_6222f30
        mov esi, eax
        test esi, esi
        jge public_622af80
        public_622af73 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        add esp, 0x10
        ret 
        public_622af80 : nop
        mov al, byte ptr ss : [esp+0x28]
        xor bl, bl
        test al, al
        jbe public_622afca
        public_622af8a : nop
        lea edx, ss:[esp+0x24]
        push 4
        push edx
        mov ecx, ebp
        call public_6222f30
        test eax, eax
        jl public_622af73
        lea eax, ss:[esp+0x14]
        push 0xC
        push eax
        mov ecx, ebp
        call public_6222f30
        mov esi, eax
        test esi, esi
        jl public_622af73
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0x14]
        mov al, byte ptr ss : [esp+0x28]
        inc bl
        cmp bl, al
        jb public_622af8a
        public_622afca : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x622af10)
    }
}

#undef public_622af4f
#undef public_622af73
#undef public_622af80
#undef public_622af8a
#undef public_622afca
