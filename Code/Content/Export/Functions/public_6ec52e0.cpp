#include "Content-PCH.h"


#define public_6ec5305 _public_6ec5305
#define public_6ec5322 _public_6ec5322
#define public_6ec533c _public_6ec533c
#define public_6ec536e _public_6ec536e
#define public_6ec5407 _public_6ec5407
#define public_6ec543b _public_6ec543b
#define public_6ec5458 _public_6ec5458
#define public_6ec5476 _public_6ec5476
#define public_6ec547b _public_6ec547b

PROC_DECLARE(0x6ec52e0, internal_6ec52e0, public_6ec52e0);
extern "C" NAKED register_t __cdecl internal_6ec52e0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6ec5305
        mov dword ptr ss : [ebp+0x40], eax
        mov byte ptr ss : [ebp+0x44], al
        jmp public_6ec533c
        public_6ec5305 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        lea edx, ss:[ebp+0x44]
        jb public_6ec5322
        mov eax, 0x7F
        public_6ec5322 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x44], 0
        mov dword ptr ss : [ebp+0x40], eax
        public_6ec533c : nop
        mov esi, dword ptr ds : [public_6fb306c]
        push 2
        mov ecx, ebx
        call esi
        test al, al
        jne public_6ec5407
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb4708
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec536e
        mov eax, 0x2F
        public_6ec536e : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6fb4708
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ds : [public_6fb3020]
        mov byte ptr ds : [eax+ebp+0x10], 0
        push 3
        mov ecx, ebx
        mov dword ptr ss : [ebp+0xC], eax
        call esi
        mov dword ptr ss : [esp+0x28], eax
        push 2
        fild dword ptr ss : [esp+0x2C]
        mov ecx, ebx
        fstp dword ptr ss : [esp+0x18]
        call esi
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        push 1
        mov ecx, ebx
        fstp dword ptr ss : [esp+0x14]
        call esi
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        lea edx, ss:[ebp+0xC4]
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        pop esi
        mov dword ptr ss : [ebp+0xD0], 2
        mov dword ptr ds : [edx+4], ecx
        pop ebp
        mov dword ptr ds : [edx+8], eax
        pop ebx
        add esp, 0x14
        ret 4
        public_6ec5407 : nop
        push 1
        mov ecx, ebx
        call esi
        test al, al
        jne public_6ec5458
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6ec543b
        pop edi
        mov dword ptr ss : [ebp+0xC], eax
        mov byte ptr ss : [ebp+0x10], al
        pop esi
        mov dword ptr ss : [ebp+0xD0], 1
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        public_6ec543b : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec547b
        mov eax, 0x2F
        jmp public_6ec547b
        public_6ec5458 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb4708
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec5476
        mov eax, 0x2F
        public_6ec5476 : nop
        mov esi, offset public_6fb4708
        public_6ec547b : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0xC], eax
        pop esi
        mov dword ptr ss : [ebp+0xD0], 1
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6ec52e0)
    }
}

#undef public_6ec5305
#undef public_6ec5322
#undef public_6ec533c
#undef public_6ec536e
#undef public_6ec5407
#undef public_6ec543b
#undef public_6ec5458
#undef public_6ec5476
#undef public_6ec547b
