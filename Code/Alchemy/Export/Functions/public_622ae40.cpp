#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222f30);
CLANG_FORWARD_PROC_SYMBOL(public_622ae40);

#define public_622ae7f _public_622ae7f
#define public_622aea3 _public_622aea3
#define public_622aeb0 _public_622aeb0
#define public_622aeba _public_622aeba
#define public_622aefa _public_622aefa

PROC_DECLARE(0x622ae40, internal_622ae40, public_622ae40);
extern "C" NAKED register_t __cdecl internal_622ae40()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        or esi, 0xFFFFFFFF
        test edi, edi
        je public_622aefa
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0xC]
        mov ebp, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x10]
        push 1
        push ecx
        mov ecx, ebp
        call public_6222f30
        test eax, eax
        jge public_622ae7f
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        add esp, 8
        ret 
        public_622ae7f : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi]
        and eax, 0xFF
        push eax
        push edi
        call dword ptr ds : [edx+0x34]
        lea ecx, ss:[esp+0x20]
        push 1
        push ecx
        mov ecx, ebp
        call public_6222f30
        mov esi, eax
        test esi, esi
        jge public_622aeb0
        public_622aea3 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        add esp, 8
        ret 
        public_622aeb0 : nop
        mov al, byte ptr ss : [esp+0x20]
        xor bl, bl
        test al, al
        jbe public_622aefa
        public_622aeba : nop
        lea edx, ss:[esp+0x14]
        push 4
        push edx
        mov ecx, ebp
        call public_6222f30
        test eax, eax
        jl public_622aea3
        lea eax, ss:[esp+0x1C]
        push 4
        push eax
        mov ecx, ebp
        call public_6222f30
        mov esi, eax
        test esi, esi
        jl public_622aea3
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0x14]
        mov al, byte ptr ss : [esp+0x20]
        inc bl
        cmp bl, al
        jb public_622aeba
        public_622aefa : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x622ae40)
    }
}

#undef public_622ae7f
#undef public_622aea3
#undef public_622aeb0
#undef public_622aeba
#undef public_622aefa
