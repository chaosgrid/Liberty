#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b77cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b77dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

#define public_6b77cea _public_6b77cea
#define public_6b77d00 _public_6b77d00
#define public_6b77d0b _public_6b77d0b
#define public_6b77d3e _public_6b77d3e
#define public_6b77d6c _public_6b77d6c
#define public_6b77d86 _public_6b77d86
#define public_6b77d88 _public_6b77d88
#define public_6b77d8b _public_6b77d8b
#define public_6b77dab _public_6b77dab
#define public_6b77dbb _public_6b77dbb

PROC_DECLARE(0x6b77cd0, internal_6b77cd0, public_6b77cd0);
extern "C" NAKED register_t __cdecl internal_6b77cd0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_6b79068]
        push 0x3B
        push esi
        call edi
        add esp, 8
        test eax, eax
        je public_6b77d00
        public_6b77cea : nop
        cmp eax, esi
        mov byte ptr ds : [eax], 0
        jne public_6b77d3e
        lea esi, ds:[eax+1]
        push 0x3B
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6b77cea
        public_6b77d00 : nop
        mov al, byte ptr ds : [esi]
        mov ebx, dword ptr ss : [esp+0x1C]
        test al, al
        je public_6b77d0b
        inc ebx
        public_6b77d0b : nop
        mov ebp, dword ptr ss : [esp+0x18]
        test ebx, ebx
        je public_6b77d8b
        lea eax, ds:[ebx*4+4]
        push eax
        call public_6b782ac
        add esp, 4
        test eax, eax
        je public_6b77d86
        mov dword ptr ds : [eax], ebx
        lea edx, ds:[eax+4]
        lea eax, ds:[ebx-1]
        test eax, eax
        jl public_6b77d88
        lea ecx, ds:[eax+1]
        xor eax, eax
        mov edi, edx
        rep stosd
        jmp public_6b77d88
        public_6b77d3e : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x18]
        inc eax
        lea ecx, ds:[edi+1]
        push ecx
        push ebx
        push eax
        call public_6b77cd0
        mov edx, dword ptr ds : [ebx]
        mov ebp, eax
        mov eax, dword ptr ds : [edx+edi*4]
        lea edi, ds:[edx+edi*4]
        test eax, eax
        je public_6b77d6c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_6b77d6c : nop
        mov edx, dword ptr ds : [public_6b7a220]
        push edi
        push esi
        push edx
        call public_6b77dd0
        add esp, 0xC
        mov eax, ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b77d86 : nop
        xor edx, edx
        public_6b77d88 : nop
        mov dword ptr ss : [ebp], edx
        public_6b77d8b : nop
        cmp byte ptr ds : [esi], 0
        je public_6b77dbb
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [ecx+ebx*4-4]
        lea edi, ds:[ecx+ebx*4-4]
        test eax, eax
        je public_6b77dab
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi], 0
        public_6b77dab : nop
        mov eax, dword ptr ds : [public_6b7a220]
        push edi
        push esi
        push eax
        call public_6b77dd0
        add esp, 0xC
        public_6b77dbb : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b77cd0)
    }
}

#undef public_6b77cea
#undef public_6b77d00
#undef public_6b77d0b
#undef public_6b77d3e
#undef public_6b77d6c
#undef public_6b77d86
#undef public_6b77d88
#undef public_6b77d8b
#undef public_6b77dab
#undef public_6b77dbb
