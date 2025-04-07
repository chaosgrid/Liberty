#include "Content-PCH.h"


#define public_6f1a9eb _public_6f1a9eb
#define public_6f1a9fd _public_6f1a9fd
#define public_6f1aa14 _public_6f1aa14
#define public_6f1aa2e _public_6f1aa2e
#define public_6f1aa5c _public_6f1aa5c
#define public_6f1aa60 _public_6f1aa60

PROC_DECLARE(0x6f1a9c0, internal_6f1a9c0, public_6f1a9c0);
extern "C" NAKED register_t __cdecl internal_6f1a9c0()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x50]
        push 1
        call dword ptr ds : [public_6fb3048]
        xor edx, edx
        mov esi, eax
        cmp esi, edx
        mov dword ptr ss : [esp+8], edx
        mov byte ptr ss : [esp+0xC], dl
        jne public_6f1aa14
        mov dword ptr ss : [esp+8], edx
        mov byte ptr ss : [esp+0xC], dl
        public_6f1a9eb : nop
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[ebx+0x38]
        push ecx
        call dword ptr ds : [public_6fb36a8]
        add esp, 8
        public_6f1a9fd : nop
        mov ecx, dword ptr ss : [esp+0x50]
        push 2
        call dword ptr ds : [public_6fb3020]
        pop esi
        mov dword ptr ds : [ebx+0xC], eax
        pop ebx
        add esp, 0x44
        ret 4
        public_6f1aa14 : nop
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6f1aa2e
        mov eax, 0x3F
        public_6f1aa2e : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x14], dl
        mov dword ptr ss : [esp+0x10], eax
        mov al, byte ptr ss : [esp+0x14]
        cmp al, dl
        pop edi
        pop ebp
        je public_6f1a9eb
        cmp al, 0x30
        jl public_6f1aa5c
        cmp al, 0x39
        jle public_6f1aa60
        public_6f1aa5c : nop
        cmp al, 0x2D
        jne public_6f1a9eb
        public_6f1aa60 : nop
        mov ecx, dword ptr ss : [esp+0x50]
        push 1
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [ebx+0x38], eax
        jmp public_6f1a9fd
        UNREACHABLE_TRAP(0x6f1a9c0)
    }
}

#undef public_6f1a9eb
#undef public_6f1a9fd
#undef public_6f1aa14
#undef public_6f1aa2e
#undef public_6f1aa5c
#undef public_6f1aa60
