#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3ac0);

#define public_6d54702 _public_6d54702
#define public_6d54711 _public_6d54711
#define public_6d54724 _public_6d54724
#define public_6d5475e _public_6d5475e
#define public_6d5476c _public_6d5476c
#define public_6d54780 _public_6d54780
#define public_6d5479c _public_6d5479c
#define public_6d547b0 _public_6d547b0
#define public_6d547cb _public_6d547cb
#define public_6d547e2 _public_6d547e2
#define public_6d547f4 _public_6d547f4
#define public_6d54826 _public_6d54826
#define public_6d54834 _public_6d54834

PROC_DECLARE(0x6d546e0, internal_6d546e0, public_6d546e0);
extern "C" NAKED register_t __cdecl internal_6d546e0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_6d64b64]
        push ebx
        mov ebx, dword ptr ds : [eax]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push edi
        mov edi, eax
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], ecx
        lea esi, ds:[ecx+0x20]
        jae public_6d54702
        mov edi, ebx
        public_6d54702 : nop
        cmp esi, ebp
        jne public_6d5476c
        cmp dword ptr ds : [esi+8], edi
        jae public_6d54711
        call dword ptr ds : [public_6d64b04]
        public_6d54711 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d64acc]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebx
        jae public_6d54724
        mov ebx, eax
        public_6d54724 : nop
        test ebx, ebx
        jbe public_6d5475e
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ebx+edi]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6ce3ac0
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d5475e
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b60]
        public_6d5475e : nop
        push 0
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6d64b50]
        jmp public_6d547e2
        public_6d5476c : nop
        test edi, edi
        jbe public_6d547b0
        cmp edi, eax
        jne public_6d547b0
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6d54780
        mov eax, dword ptr ds : [public_6d64b54]
        public_6d54780 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6d547b0
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d64b58]
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6d5479c
        mov eax, dword ptr ds : [public_6d64b54]
        public_6d5479c : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_6d547e2
        public_6d547b0 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d547e2
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6d547cb
        mov eax, dword ptr ds : [public_6d64b54]
        public_6d547cb : nop
        mov edx, dword ptr ds : [esi+4]
        push edi
        push eax
        push edx
        call public_6ce1960
        add esp, 0xC
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b60]
        public_6d547e2 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+4]
        mov esi, 1
        cmp eax, esi
        jb public_6d54834
        xor edi, edi
        public_6d547f4 : nop
        test esi, esi
        jbe public_6d54826
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, ecx
        jae public_6d54826
        mov ecx, dword ptr ds : [public_6d90260]
        mov eax, dword ptr ds : [edi+ecx+0x348]
        test eax, eax
        je public_6d54826
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push esi
        call dword ptr ds : [edx+0x1CC]
        public_6d54826 : nop
        mov eax, dword ptr ds : [ebx+4]
        inc esi
        add edi, 0x418
        cmp esi, eax
        jbe public_6d547f4
        public_6d54834 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d546e0)
    }
}

#undef public_6d54702
#undef public_6d54711
#undef public_6d54724
#undef public_6d5475e
#undef public_6d5476c
#undef public_6d54780
#undef public_6d5479c
#undef public_6d547b0
#undef public_6d547cb
#undef public_6d547e2
#undef public_6d547f4
#undef public_6d54826
#undef public_6d54834
