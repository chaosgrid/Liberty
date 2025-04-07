#include "Content-PCH.h"


#define public_6ec8bc7 _public_6ec8bc7
#define public_6ec8be1 _public_6ec8be1
#define public_6ec8bfd _public_6ec8bfd
#define public_6ec8c11 _public_6ec8c11
#define public_6ec8c2c _public_6ec8c2c
#define public_6ec8c4c _public_6ec8c4c
#define public_6ec8c7e _public_6ec8c7e
#define public_6ec8c99 _public_6ec8c99
#define public_6ec8cc1 _public_6ec8cc1
#define public_6ec8d1e _public_6ec8d1e
#define public_6ec8d32 _public_6ec8d32

PROC_DECLARE(0x6ec8b90, internal_6ec8b90, public_6ec8b90);
extern "C" NAKED register_t __cdecl internal_6ec8b90()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
/*FIXUP push offset public_6fb5c80 @0x6ec8ba1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5c80
        mov ebp, ecx
        push 0
        mov ecx, ebx
        call edi
        mov esi, dword ptr ds : [public_6fb3294]
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec8bc7
        mov dword ptr ss : [ebp+0x40], 2
        jmp public_6ec8bfd
/*FIXUP public_6ec8bc7 : nop
        push offset public_6fb5c78 @0x6ec8bc7*/
  FIXUP public_6ec8bc7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5c78
        push 0
        mov ecx, ebx
        call edi
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec8be1
        mov dword ptr ss : [ebp+0x40], eax
        jmp public_6ec8bfd
/*FIXUP public_6ec8be1 : nop
        push offset public_6fb5c70 @0x6ec8be1*/
  FIXUP public_6ec8be1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5c70
        push 0
        mov ecx, ebx
        call edi
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec8bfd
        mov dword ptr ss : [ebp+0x40], 1
        public_6ec8bfd : nop
        push 1
        mov ecx, ebx
        call edi
        mov esi, eax
        test esi, esi
        jne public_6ec8c11
        mov dword ptr ss : [ebp+0xC], eax
        mov byte ptr ss : [ebp+0x10], al
        jmp public_6ec8c4c
        public_6ec8c11 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec8c2c
        mov eax, 0x2F
        public_6ec8c2c : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb3048]
        mov byte ptr ds : [eax+ebp+0x10], 0
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec8c4c : nop
        mov eax, dword ptr ss : [ebp+0x40]
        sub eax, 0
        je public_6ec8cc1
        dec eax
        jne public_6ec8d32
        push 2
        mov ecx, ebx
        call edi
        mov esi, eax
        test esi, esi
        jne public_6ec8c7e
        push 3
        mov ecx, ebx
        mov dword ptr ss : [ebp+0x50], eax
        mov byte ptr ss : [ebp+0x54], al
        call dword ptr ds : [public_6fb3044]
        push 4
        jmp public_6ec8d1e
        public_6ec8c7e : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x54]
        jb public_6ec8c99
        mov eax, 0x2F
        public_6ec8c99 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x54], 0
        push 3
        mov ecx, ebx
        mov dword ptr ss : [ebp+0x50], eax
        call dword ptr ds : [public_6fb3044]
        push 4
        jmp public_6ec8d1e
        public_6ec8cc1 : nop
        push 4
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        push 3
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x24]
        push 2
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], eax
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[ebp+0x44]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        push 5
        mov ecx, ebx
        mov dword ptr ds : [edx+8], eax
        call dword ptr ds : [public_6fb3044]
        push 6
        public_6ec8d1e : nop
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x84]
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ss : [ebp+0x88], al
        public_6ec8d32 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ec8b90)
    }
}

#undef public_6ec8bc7
#undef public_6ec8be1
#undef public_6ec8bfd
#undef public_6ec8c11
#undef public_6ec8c2c
#undef public_6ec8c4c
#undef public_6ec8c7e
#undef public_6ec8c99
#undef public_6ec8cc1
#undef public_6ec8d1e
#undef public_6ec8d32
