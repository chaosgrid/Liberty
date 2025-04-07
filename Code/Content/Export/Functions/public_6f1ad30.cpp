#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);

#define public_6f1ad69 _public_6f1ad69
#define public_6f1ad7b _public_6f1ad7b
#define public_6f1adf2 _public_6f1adf2
#define public_6f1ae1a _public_6f1ae1a
#define public_6f1ae22 _public_6f1ae22
#define public_6f1ae30 _public_6f1ae30
#define public_6f1ae4b _public_6f1ae4b

PROC_DECLARE(0x6f1ad30, internal_6f1ad30, public_6f1ad30);
extern "C" NAKED register_t __cdecl internal_6f1ad30()
{
    __asm
    {
        sub esp, 0x58
        push ebx
        mov ebx, dword ptr ds : [public_6fb3048]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x68]
        push edi
        mov ebp, ecx
        push 1
        mov ecx, esi
        call ebx
        mov edi, dword ptr ds : [public_6fb3020]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov byte ptr ss : [esp+0x28], cl
        jne public_6f1adf2
        mov dword ptr ss : [esp+0x24], ecx
        mov byte ptr ss : [esp+0x28], cl
        public_6f1ad69 : nop
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[ebp+0x6C]
        push edx
        call dword ptr ds : [public_6fb3628]
        add esp, 8
        public_6f1ad7b : nop
        push 2
        mov ecx, esi
        call edi
        push 3
        mov ecx, esi
        mov dword ptr ss : [ebp+0xC], eax
        call edi
        push 5
        mov ecx, esi
        mov dword ptr ss : [ebp+0x70], eax
        call dword ptr ds : [public_6fb3044]
        fstp qword ptr ss : [esp+0x10]
        push 4
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x18]
        fld qword ptr ss : [esp+0x10]
        push 6
        mov ecx, esi
        fstp dword ptr ss : [esp+0x20]
        call dword ptr ds : [public_6fb3044]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[ebp+0x74]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        push 7
        mov ecx, esi
        call ebx
        mov esi, eax
        test esi, esi
        jne public_6f1ae30
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x38], eax
        mov byte ptr ss : [ebp+0x3C], al
        pop ebp
        pop ebx
        add esp, 0x58
        ret 4
        public_6f1adf2 : nop
        push eax
        lea eax, ss:[esp+0x2C]
        push 0x40
        push eax
        call public_6ea9f40
        mov dword ptr ss : [esp+0x30], eax
        mov al, byte ptr ss : [esp+0x34]
        add esp, 0xC
        test al, al
        je public_6f1ad69
        cmp al, 0x30
        jl public_6f1ae1a
        cmp al, 0x39
        jle public_6f1ae22
        public_6f1ae1a : nop
        cmp al, 0x2D
        jne public_6f1ad69
        public_6f1ae22 : nop
        push 1
        mov ecx, esi
        call edi
        mov dword ptr ss : [ebp+0x6C], eax
        jmp public_6f1ad7b
        public_6f1ae30 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x3C]
        jb public_6f1ae4b
        mov eax, 0x2F
        public_6f1ae4b : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x38], eax
        pop ebp
        pop ebx
        add esp, 0x58
        ret 4
        UNREACHABLE_TRAP(0x6f1ad30)
    }
}

#undef public_6f1ad69
#undef public_6f1ad7b
#undef public_6f1adf2
#undef public_6f1ae1a
#undef public_6f1ae22
#undef public_6f1ae30
#undef public_6f1ae4b
