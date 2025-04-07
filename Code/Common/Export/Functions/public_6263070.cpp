#include "Common-PCH.h"


#define public_626309c _public_626309c
#define public_62630aa _public_62630aa
#define public_62630bd _public_62630bd
#define public_62630f4 _public_62630f4
#define public_6263101 _public_6263101
#define public_6263115 _public_6263115
#define public_6263131 _public_6263131
#define public_6263145 _public_6263145
#define public_6263163 _public_6263163
#define public_6263183 _public_6263183

PROC_DECLARE(0x6263070, internal_6263070, public_6263070);
extern "C" NAKED register_t __cdecl internal_6263070()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [edi]
        xor ecx, ecx
        mov byte ptr ds : [ebx], al
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], ecx
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edx]
        mov ebp, eax
        cmp esi, ebp
        jae public_626309c
        mov ebp, esi
        public_626309c : nop
        cmp ebx, edi
        jne public_6263101
        cmp ebp, ecx
        jbe public_62630aa
        call dword ptr ds : [public_63991c4]
        public_62630aa : nop
        mov ecx, ebx
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        cmp eax, esi
        jae public_62630bd
        mov esi, eax
        public_62630bd : nop
        test esi, esi
        jbe public_62630f4
        mov ecx, dword ptr ds : [ebx+4]
        add ebp, ecx
        sub eax, esi
        push eax
        lea edx, ds:[esi+ebp]
        push edx
        push ebp
        call dword ptr ds : [public_6399330]
        mov ebp, dword ptr ds : [ebx+8]
        add esp, 0xC
        push 0
        sub ebp, esi
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62630f4
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991d8]
        public_62630f4 : nop
        mov ecx, ebx
        call dword ptr ds : [public_63991bc]
        jmp public_6263183
        public_6263101 : nop
        cmp ebp, ecx
        jbe public_6263145
        cmp ebp, eax
        jne public_6263145
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_6263115
        mov eax, dword ptr ds : [public_63991d0]
        public_6263115 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6263145
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6263131
        mov eax, dword ptr ds : [public_63991d0]
        public_6263131 : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_6263183
        public_6263145 : nop
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6263183
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_63991d0]
        je public_6263163
        mov esi, edi
        public_6263163 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991d8]
        mov edi, dword ptr ss : [esp+0x14]
        public_6263183 : nop
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [ebx+0x10], ecx
        mov edx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [ebx+0x14], edx
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [ebx+0x18], eax
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [ebx+0x1C], ecx
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [ebx+0x20], edx
        mov eax, dword ptr ds : [edi+0x24]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x24], eax
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6263070)
    }
}

#undef public_626309c
#undef public_62630aa
#undef public_62630bd
#undef public_62630f4
#undef public_6263101
#undef public_6263115
#undef public_6263131
#undef public_6263145
#undef public_6263163
#undef public_6263183
