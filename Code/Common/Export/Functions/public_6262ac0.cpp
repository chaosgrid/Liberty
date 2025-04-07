#include "Common-PCH.h"


#define public_6262aed _public_6262aed
#define public_6262afb _public_6262afb
#define public_6262b0e _public_6262b0e
#define public_6262b45 _public_6262b45
#define public_6262b52 _public_6262b52
#define public_6262b66 _public_6262b66
#define public_6262b82 _public_6262b82
#define public_6262b96 _public_6262b96
#define public_6262bb4 _public_6262bb4
#define public_6262bd5 _public_6262bd5

PROC_DECLARE(0x6262ac0, internal_6262ac0, public_6262ac0);
extern "C" NAKED register_t __cdecl internal_6262ac0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [edi]
        xor ecx, ecx
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edx]
        mov ebx, eax
        cmp esi, ebx
        jae public_6262aed
        mov ebx, esi
        public_6262aed : nop
        cmp ebp, edi
        jne public_6262b52
        cmp ebx, ecx
        jbe public_6262afb
        call dword ptr ds : [public_63991c4]
        public_6262afb : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_6262b0e
        mov esi, eax
        public_6262b0e : nop
        test esi, esi
        jbe public_6262b45
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_6399330]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6262b45
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_6262b45 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        jmp public_6262bd5
        public_6262b52 : nop
        cmp ebx, ecx
        jbe public_6262b96
        cmp ebx, eax
        jne public_6262b96
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_6262b66
        mov eax, dword ptr ds : [public_63991d0]
        public_6262b66 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6262b96
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6262b82
        mov eax, dword ptr ds : [public_63991d0]
        public_6262b82 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_6262bd5
        public_6262b96 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6262bd5
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_63991d0]
        je public_6262bb4
        mov esi, edi
        public_6262bb4 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_6262bd5 : nop
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [ebp+0x10], edx
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [ebp+0x14], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ss : [ebp+0x18], ecx
        mov edx, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [ebp+0x1C], edx
        mov eax, dword ptr ds : [edi+0x20]
        pop edi
        mov dword ptr ss : [ebp+0x20], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6262ac0)
    }
}

#undef public_6262aed
#undef public_6262afb
#undef public_6262b0e
#undef public_6262b45
#undef public_6262b52
#undef public_6262b66
#undef public_6262b82
#undef public_6262b96
#undef public_6262bb4
#undef public_6262bd5
