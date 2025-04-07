#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1c430);

#define public_6f1c4cc _public_6f1c4cc
#define public_6f1c4e7 _public_6f1c4e7
#define public_6f1c507 _public_6f1c507

PROC_DECLARE(0x6f1c430, internal_6f1c430, public_6f1c430);
extern "C" NAKED register_t __cdecl internal_6f1c430()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fb3020]
        mov ebp, ecx
        push 0
        mov ecx, ebx
        call edi
        push 1
        mov ecx, ebx
        mov dword ptr ss : [ebp+0x68], eax
        call edi
        push 4
        mov ecx, ebx
        mov dword ptr ss : [ebp+0x6C], eax
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
        lea edx, ss:[ebp+0x14]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        push 5
        mov ecx, ebx
        mov dword ptr ds : [edx+8], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f1c507
        push 5
        mov ecx, ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6f1c4cc
        mov dword ptr ss : [ebp+0x28], eax
        mov byte ptr ss : [ebp+0x2C], al
        jmp public_6f1c507
        public_6f1c4cc : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x2C]
        jb public_6f1c4e7
        mov eax, 0x2F
        public_6f1c4e7 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb3020]
        mov byte ptr ds : [eax+ebp+0x2C], 0
        mov dword ptr ss : [ebp+0x28], eax
        public_6f1c507 : nop
        push 6
        mov ecx, ebx
        call edi
        pop edi
        mov dword ptr ss : [ebp+0x70], eax
        mov eax, dword ptr ss : [esp+0x24]
        pop esi
        mov dword ptr ss : [ebp+0x78], 1
        mov byte ptr ss : [ebp+0x74], 1
        mov dword ptr ss : [ebp+0x80], eax
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6f1c430)
    }
}

#undef public_6f1c4cc
#undef public_6f1c4e7
#undef public_6f1c507
