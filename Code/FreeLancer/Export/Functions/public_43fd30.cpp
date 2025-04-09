#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412050);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_43a460);
CLANG_FORWARD_PROC_SYMBOL(public_43e050);
CLANG_FORWARD_PROC_SYMBOL(public_43e600);
CLANG_FORWARD_PROC_SYMBOL(public_43f2e0);
CLANG_FORWARD_PROC_SYMBOL(public_43fd30);
CLANG_FORWARD_PROC_SYMBOL(public_44c490);

#define public_43fd60 _public_43fd60
#define public_43fd80 _public_43fd80
#define public_43fd84 _public_43fd84
#define public_43fd89 _public_43fd89
#define public_43fd91 _public_43fd91
#define public_43fde5 _public_43fde5
#define public_43fe0f _public_43fe0f
#define public_43fe22 _public_43fe22
#define public_43fe2e _public_43fe2e
#define public_43fe38 _public_43fe38
#define public_43fe41 _public_43fe41
#define public_43fe67 _public_43fe67
#define public_43fed0 _public_43fed0
#define public_43fed9 _public_43fed9
#define public_43ff0f _public_43ff0f
#define public_43ff13 _public_43ff13
#define public_43ff33 _public_43ff33
#define public_43ff8f _public_43ff8f

PROC_DECLARE(0x43fd30, internal_43fd30, public_43fd30);
extern "C" NAKED register_t __cdecl internal_43fd30()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+0x1C]
        push esi
        push edi
        mov edi, dword ptr ds : [eax+4]
        xor ebx, ebx
        cmp edi, ebx
        mov esi, ecx
        mov dword ptr ss : [esp+0x10], esi
        je public_43fd91
        mov eax, dword ptr ds : [esi+0x370]
        cmp eax, ebx
        jne public_43fd60
        mov eax, dword ptr ds : [public_5c7078]
        lea ebx, ds:[ebx]
        public_43fd60 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [edi]
        jne public_43fd84
        test cl, cl
        je public_43fd80
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_43fd84
        add eax, 2
        add edi, 2
        test cl, cl
        jne public_43fd60
        public_43fd80 : nop
        xor eax, eax
        jmp public_43fd89
        public_43fd84 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_43fd89 : nop
        cmp eax, ebx
        je public_43ff8f
        public_43fd91 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ds : [ecx+0x2EC]
        test eax, 0x10000
        je public_43ff33
        mov word ptr ds : [ecx+0x2EE], bx
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        je public_43fe67
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], eax
        je public_43fe67
        or ecx, 0xFFFFFFFF
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        cmp ebp, 0xFFFFFFFD
        lea ebx, ds:[esi+0x36C]
        jbe public_43fde5
        call dword ptr ds : [public_5c7070]
        public_43fde5 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_43fe0f
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_43fe0f
        cmp cl, 0xFF
        je public_43fe0f
        test ebp, ebp
        jne public_43fe38
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        jmp public_43ff13
        public_43fe0f : nop
        test ebp, ebp
        jne public_43fe22
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        jmp public_43ff13
        public_43fe22 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, 0x1F
        ja public_43fe2e
        cmp eax, ebp
        jae public_43fe41
        public_43fe2e : nop
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        public_43fe38 : nop
        mov ecx, ebx
        push ebp
        call dword ptr ds : [public_5c7074]
        public_43fe41 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], ebp
        mov byte ptr ds : [ecx+ebp], 0
        jmp public_43ff0f
        public_43fe67 : nop
        mov edx, dword ptr ds : [public_5c7080]
        mov ebx, dword ptr ds : [edx]
        lea ebp, ds:[esi+0x36C]
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        je public_43fed0
        mov al, byte ptr ds : [esi-1]
        test al, al
        je public_43fed0
        cmp al, 0xFF
        je public_43fed0
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push 1
        mov dword ptr ss : [esp+0x1C], ecx
        push ecx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_43fed0
        mov ecx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [ebp+4]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, eax
        push ecx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_43fed0 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        jae public_43fed9
        mov ebx, eax
        public_43fed9 : nop
        test ebx, ebx
        jbe public_43ff0f
        mov ecx, dword ptr ss : [ebp+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ecx+ebx]
        push edx
        push ecx
        call dword ptr ds : [public_5c709c]
        mov esi, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub esi, ebx
        push esi
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_43ff0f
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], esi
        mov byte ptr ds : [esi+eax], 0
        public_43ff0f : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_43ff13 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x3B8], 0
        call public_43f2e0
        mov ecx, esi
        call public_43e050
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_43ff33 : nop
        or eax, 0x10000
        mov dword ptr ds : [ecx+0x2EC], eax
        mov dword ptr ds : [esi+0x3B8], ebp
        fld dword ptr ds : [public_61650c]
        fdivr qword ptr ds : [public_5c89b8]
        push ecx
        fstp dword ptr ss : [esp]
        push 0x3F800000
        call public_412050
        add esp, 8
        mov ecx, offset public_668708
        mov byte ptr ds : [esi+0x3BC], 1
        mov dword ptr ds : [esi+0x3C0], ebx
        call public_43a460
        mov ecx, eax
        call public_44c490
        push ebx
        call public_41dda0
        add esp, 4
        mov ecx, esi
        call public_43e600
        public_43ff8f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x43fd30)
    }
}

#undef public_43fd60
#undef public_43fd80
#undef public_43fd84
#undef public_43fd89
#undef public_43fd91
#undef public_43fde5
#undef public_43fe0f
#undef public_43fe22
#undef public_43fe2e
#undef public_43fe38
#undef public_43fe41
#undef public_43fe67
#undef public_43fed0
#undef public_43fed9
#undef public_43ff0f
#undef public_43ff13
#undef public_43ff33
#undef public_43ff8f
