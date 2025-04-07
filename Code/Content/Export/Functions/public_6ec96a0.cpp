#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ec9530);

#define public_6ec96c2 _public_6ec96c2
#define public_6ec96d4 _public_6ec96d4
#define public_6ec96e8 _public_6ec96e8
#define public_6ec9703 _public_6ec9703
#define public_6ec9723 _public_6ec9723
#define public_6ec975e _public_6ec975e
#define public_6ec9791 _public_6ec9791
#define public_6ec97a9 _public_6ec97a9

PROC_DECLARE(0x6ec96a0, internal_6ec96a0, public_6ec96a0);
extern "C" NAKED register_t __cdecl internal_6ec96a0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov ebp, ecx
        push 0
        mov ecx, ebx
        call edi
        test eax, eax
        jne public_6ec96c2
        mov dword ptr ss : [ebp+0xC], eax
        mov byte ptr ss : [ebp+0x10], al
        jmp public_6ec96d4
        public_6ec96c2 : nop
        push eax
        lea eax, ss:[ebp+0x10]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec96d4 : nop
        push 1
        mov ecx, ebx
        call edi
        mov esi, eax
        test esi, esi
        jne public_6ec96e8
        mov dword ptr ss : [ebp+0x40], eax
        mov byte ptr ss : [ebp+0x44], al
        jmp public_6ec9723
        public_6ec96e8 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x44]
        jb public_6ec9703
        mov eax, 0x2F
        public_6ec9703 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb3048]
        mov byte ptr ds : [eax+ebp+0x44], 0
        mov dword ptr ss : [ebp+0x40], eax
        public_6ec9723 : nop
        push 1
        mov ecx, ebx
        call edi
        push eax
        lea eax, ss:[ebp+0x74]
        push eax
        call dword ptr ds : [public_6fb361c]
        add esp, 8
        push 2
        mov ecx, ebx
        call edi
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6fb30a8]
        test al, al
        mov ecx, ebx
        push 2
        je public_6ec975e
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x78]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6ec975e : nop
        call dword ptr ds : [public_6fb30a4]
        sub esp, 0x44
        mov edx, esp
        mov esi, eax
        test esi, esi
        lea ebx, ds:[edx+4]
        mov dword ptr ds : [edx], 0
        mov byte ptr ds : [ebx], 0
        jne public_6ec9791
        mov dword ptr ds : [edx], eax
        mov byte ptr ds : [ebx], al
        mov ecx, dword ptr ss : [ebp+4]
        call public_6ec9530
        fstp dword ptr ss : [ebp+0x78]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6ec9791 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6ec97a9
        mov eax, 0x3F
        public_6ec97a9 : nop
        mov ecx, eax
        mov edi, ebx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx+4], 0
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp+4]
        call public_6ec9530
        pop edi
        pop esi
        fstp dword ptr ss : [ebp+0x78]
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec96a0)
    }
}

#undef public_6ec96c2
#undef public_6ec96d4
#undef public_6ec96e8
#undef public_6ec9703
#undef public_6ec9723
#undef public_6ec975e
#undef public_6ec9791
#undef public_6ec97a9
