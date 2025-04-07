#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4061a0);
CLANG_FORWARD_PROC_SYMBOL(public_54f830);

#define public_54f84c _public_54f84c
#define public_54f85d _public_54f85d
#define public_54f86c _public_54f86c
#define public_54f877 _public_54f877
#define public_54f882 _public_54f882
#define public_54f889 _public_54f889
#define public_54f8b9 _public_54f8b9
#define public_54f8ca _public_54f8ca
#define public_54f8d9 _public_54f8d9
#define public_54f8eb _public_54f8eb
#define public_54f907 _public_54f907
#define public_54f918 _public_54f918
#define public_54f927 _public_54f927
#define public_54f936 _public_54f936
#define public_54f942 _public_54f942
#define public_54f949 _public_54f949

PROC_DECLARE(0x54f830, internal_54f830, public_54f830);
extern "C" NAKED register_t __cdecl internal_54f830()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, eax
        and ecx, 0xC
        xor ebx, ebx
        cmp cl, 0xC
        push edi
        jne public_54f84c
        mov ebx, 0x1C
        jmp public_54f86c
        public_54f84c : nop
        mov edx, eax
        and edx, 4
        cmp dl, 4
        jne public_54f85d
        mov ebx, 0x10
        jmp public_54f86c
        public_54f85d : nop
        mov ecx, eax
        and ecx, 2
        cmp cl, 2
        jne public_54f86c
        mov ebx, 0xC
        public_54f86c : nop
        xor ebp, ebp
        test al, 0x10
        je public_54f877
        mov ebp, 0xC
        public_54f877 : nop
        xor edi, edi
        test al, 0x40
        je public_54f882
        mov edi, 4
        public_54f882 : nop
        test al, al
        jns public_54f889
        add edi, 4
        public_54f889 : nop
        push eax
        call public_4061a0
        mov edx, dword ptr ss : [esp+0x18]
        add eax, edi
        mov dword ptr ds : [esi+0x6C], edx
        mov edx, dword ptr ss : [esp+0x1C]
        add eax, ebp
        mov ecx, edx
        add eax, ebx
        and ecx, 0xC
        add esp, 4
        xor edi, edi
        cmp ecx, 0xC
        mov dword ptr ds : [esi+0x70], eax
        jne public_54f8b9
        mov edi, 0x1C
        jmp public_54f8d9
        public_54f8b9 : nop
        mov ebx, edx
        and ebx, 4
        cmp bl, 4
        jne public_54f8ca
        mov edi, 0x10
        jmp public_54f8d9
        public_54f8ca : nop
        mov ebx, edx
        and ebx, 2
        cmp bl, 2
        jne public_54f8d9
        mov edi, 0xC
        public_54f8d9 : nop
        mov ebx, edx
        xor ebp, ebp
        and ebx, 0x10
        mov dword ptr ss : [esp+0x18], ebx
        je public_54f8eb
        mov ebp, 0xC
        public_54f8eb : nop
        mov ebx, dword ptr ss : [esp+0x14]
        add ebp, edi
        add ebp, ebx
        xor edi, edi
        cmp ecx, 0xC
        mov dword ptr ds : [esi+0x74], ebp
        mov dword ptr ds : [esi+0x78], eax
        jne public_54f907
        mov edi, 0x1C
        jmp public_54f927
        public_54f907 : nop
        mov ecx, edx
        and ecx, 4
        cmp cl, 4
        jne public_54f918
        mov edi, 0x10
        jmp public_54f927
        public_54f918 : nop
        mov ecx, edx
        and ecx, 2
        cmp cl, 2
        jne public_54f927
        mov edi, 0xC
        public_54f927 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        xor ebp, ebp
        test ecx, ecx
        je public_54f936
        mov ebp, 0xC
        public_54f936 : nop
        xor ecx, ecx
        test dl, 0x40
        je public_54f942
        mov ecx, 4
        public_54f942 : nop
        test dl, dl
        jns public_54f949
        add ecx, 4
        public_54f949 : nop
        add ecx, ebp
        add ecx, edi
        add ecx, ebx
        pop edi
        mov dword ptr ds : [esi+0x7C], ecx
        mov dword ptr ds : [esi+0x80], eax
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x54f830)
    }
}

#undef public_54f84c
#undef public_54f85d
#undef public_54f86c
#undef public_54f877
#undef public_54f882
#undef public_54f889
#undef public_54f8b9
#undef public_54f8ca
#undef public_54f8d9
#undef public_54f8eb
#undef public_54f907
#undef public_54f918
#undef public_54f927
#undef public_54f936
#undef public_54f942
#undef public_54f949
