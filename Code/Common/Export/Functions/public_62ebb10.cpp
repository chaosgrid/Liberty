#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ebb10);

#define public_62ebb50 _public_62ebb50
#define public_62ebb60 _public_62ebb60
#define public_62ebb62 _public_62ebb62
#define public_62ebb8e _public_62ebb8e
#define public_62ebb90 _public_62ebb90
#define public_62ebb9d _public_62ebb9d
#define public_62ebba9 _public_62ebba9
#define public_62ebbad _public_62ebbad

PROC_DECLARE(0x62ebb10, internal_62ebb10, public_62ebb10);
extern "C" NAKED register_t __cdecl internal_62ebb10()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        cmp byte ptr ds : [esi+8], bl
        je public_62ebbad
        mov dl, byte ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0xC]
        push ebp
        and dl, 0xF8
        and ecx, 0xE0000000
        xor ebp, ebp
        test eax, eax
        mov byte ptr ss : [esp+0xC], dl
        mov dword ptr ss : [esp+0x10], ecx
        jle public_62ebba9
        push edi
        lea edi, ds:[esi+0x10]
        nop 
        lea esp, ss:[esp]
        public_62ebb50 : nop
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ebb60
        lea ecx, ds:[eax-8]
        jmp public_62ebb62
        public_62ebb60 : nop
        xor ecx, ecx
        public_62ebb62 : nop
        mov eax, dword ptr ds : [ecx]
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0x118]
        test eax, eax
        jne public_62ebb9d
        mov al, byte ptr ss : [esp+0x10]
        and al, 1
        cmp al, bl
        je public_62ebb9d
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ebb8e
        add eax, 0xFFFFFFF8
        jmp public_62ebb90
        public_62ebb8e : nop
        xor eax, eax
        public_62ebb90 : nop
        mov edx, dword ptr ds : [eax+4]
        push 0xFFFFFFFF
        lea ecx, ds:[eax+4]
        push ebx
        push edi
        call dword ptr ds : [edx+0x4C]
        public_62ebb9d : nop
        mov eax, dword ptr ds : [esi+0xC]
        inc ebp
        add edi, 2
        cmp ebp, eax
        jl public_62ebb50
        pop edi
        public_62ebba9 : nop
        mov byte ptr ds : [esi+8], bl
        pop ebp
        public_62ebbad : nop
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62ebb10)
    }
}

#undef public_62ebb50
#undef public_62ebb60
#undef public_62ebb62
#undef public_62ebb8e
#undef public_62ebb90
#undef public_62ebb9d
#undef public_62ebba9
#undef public_62ebbad
