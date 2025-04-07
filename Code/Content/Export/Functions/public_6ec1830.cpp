#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);

#define public_6ec1853 _public_6ec1853
#define public_6ec1865 _public_6ec1865
#define public_6ec1877 _public_6ec1877
#define public_6ec1889 _public_6ec1889
#define public_6ec189d _public_6ec189d
#define public_6ec18b8 _public_6ec18b8
#define public_6ec18d1 _public_6ec18d1

PROC_DECLARE(0x6ec1830, internal_6ec1830, public_6ec1830);
extern "C" NAKED register_t __cdecl internal_6ec1830()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov ebp, ecx
        xor ebx, ebx
        push ebx
        mov ecx, esi
        call edi
        cmp eax, ebx
        jne public_6ec1853
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        jmp public_6ec1865
        public_6ec1853 : nop
        push eax
        lea eax, ss:[ebp+0x10]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec1865 : nop
        push 1
        mov ecx, esi
        call edi
        cmp eax, ebx
        jne public_6ec1877
        mov dword ptr ss : [ebp+0x40], ebx
        mov byte ptr ss : [ebp+0x44], bl
        jmp public_6ec1889
        public_6ec1877 : nop
        push eax
        lea ecx, ss:[ebp+0x44]
        push 0x30
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [ebp+0x40], eax
        public_6ec1889 : nop
        push 2
        mov ecx, esi
        call edi
        mov esi, eax
        cmp esi, ebx
        jne public_6ec189d
        mov dword ptr ss : [ebp+0x74], ebx
        mov byte ptr ss : [ebp+0x78], bl
        jmp public_6ec18d1
        public_6ec189d : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x78]
        jb public_6ec18b8
        mov eax, 0x2F
        public_6ec18b8 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x74], eax
        public_6ec18d1 : nop
        mov esi, dword ptr ds : [public_6fb3684]
        lea edx, ss:[ebp+0x44]
        push edx
        call esi
        mov dword ptr ss : [ebp+0xAC], eax
        lea eax, ss:[ebp+0x78]
        push eax
        call esi
        add esp, 8
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xB0], eax
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec1830)
    }
}

#undef public_6ec1853
#undef public_6ec1865
#undef public_6ec1877
#undef public_6ec1889
#undef public_6ec189d
#undef public_6ec18b8
#undef public_6ec18d1
