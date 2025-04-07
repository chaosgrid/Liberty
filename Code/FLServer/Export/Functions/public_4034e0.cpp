#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4031c0);
CLANG_FORWARD_PROC_SYMBOL(public_404070);
CLANG_FORWARD_PROC_SYMBOL(public_404230);
CLANG_FORWARD_PROC_SYMBOL(public_404240);
CLANG_FORWARD_PROC_SYMBOL(public_404f60);
CLANG_FORWARD_PROC_SYMBOL(public_405020);
CLANG_FORWARD_PROC_SYMBOL(public_405040);
CLANG_FORWARD_PROC_SYMBOL(public_405080);
CLANG_FORWARD_PROC_SYMBOL(public_4054e0);
CLANG_FORWARD_PROC_SYMBOL(public_405540);

#define public_403536 _public_403536
#define public_403552 _public_403552
#define public_403567 _public_403567
#define public_403583 _public_403583
#define public_403597 _public_403597
#define public_4035b2 _public_4035b2
#define public_4035cd _public_4035cd
#define public_40363d _public_40363d
#define public_403646 _public_403646
#define public_4036b3 _public_4036b3
#define public_4036b7 _public_4036b7
#define public_4036dc _public_4036dc
#define public_4036ea _public_4036ea

PROC_DECLARE(0x4034e0, internal_4034e0, public_4034e0);
extern "C" NAKED register_t __cdecl internal_4034e0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], edx
        mov al, byte ptr ds : [edi+0xC]
        mov byte ptr ds : [ebx+0xC], al
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [ebx+0x14], ecx
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [ebx+0x18], edx
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [ebx+0x1C], eax
        mov ecx, dword ptr ds : [public_41b894]
        mov edx, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [ecx]
        lea ebp, ds:[edi+0x20]
        mov eax, edx
        cmp ecx, eax
        lea esi, ds:[ebx+0x20]
        mov dword ptr ss : [esp+0x20], eax
        jae public_403536
        mov eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        public_403536 : nop
        cmp esi, ebp
        jne public_403552
        push ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [public_41b8cc]
        push 0
        push 0
        mov ecx, esi
        call dword ptr ds : [public_41b8cc]
        jmp public_4035cd
        public_403552 : nop
        test eax, eax
        jbe public_403597
        cmp eax, edx
        jne public_403597
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_403567
        mov ecx, dword ptr ds : [public_41b8c8]
        public_403567 : nop
        cmp byte ptr ds : [ecx-1], 0xFE
        jae public_403597
        push 1
        mov ecx, esi
        call dword ptr ds : [public_41b86c]
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_403583
        mov eax, dword ptr ds : [public_41b8c8]
        public_403583 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_4035cd
        public_403597 : nop
        push 1
        push eax
        mov ecx, esi
        call dword ptr ds : [public_41b878]
        test al, al
        je public_4035cd
        mov eax, dword ptr ds : [edi+0x24]
        test eax, eax
        jne public_4035b2
        mov eax, dword ptr ds : [public_41b8c8]
        public_4035b2 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [esi+4]
        push ebp
        push eax
        push edx
        call public_4031c0
        add esp, 0xC
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_41b8c4]
        public_4035cd : nop
        lea ebp, ds:[edi+0x30]
        lea esi, ds:[ebx+0x30]
        cmp esi, ebp
        je public_403646
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call public_404070
        mov cl, byte ptr ss : [ebp+1]
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [esi+1], cl
        mov edx, dword ptr ss : [ebp+4]
        push eax
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, esi
        call public_404f60
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ebp, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ecx
        je public_40363d
        push eax
        call public_405040
        mov dword ptr ss : [ebp], eax
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_405020
        add esp, 8
        mov dword ptr ds : [esi+8], eax
        jmp public_403646
        public_40363d : nop
        mov dword ptr ss : [ebp], ebp
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_403646 : nop
        lea ebp, ds:[edi+0x44]
        lea esi, ds:[ebx+0x44]
        cmp esi, ebp
        je public_4036ea
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x20], ecx
        je public_4036b3
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_404230
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, dword ptr ds : [eax]
        jne public_4036b3
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_4036b3
        mov edx, dword ptr ds : [eax+4]
        push edx
        mov ecx, esi
        call public_4054e0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_404230
        jmp public_4036dc
        public_4036b3 : nop
        cmp ecx, edi
        je public_4036dc
        public_4036b7 : nop
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_405540
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_405080
        cmp dword ptr ss : [esp+0x20], edi
        jne public_4036b7
        public_4036dc : nop
        mov al, byte ptr ss : [ebp+1]
        push ebp
        mov ecx, esi
        mov byte ptr ds : [esi+1], al
        call public_404240
        public_4036ea : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x4034e0)
    }
}

#undef public_403536
#undef public_403552
#undef public_403567
#undef public_403583
#undef public_403597
#undef public_4035b2
#undef public_4035cd
#undef public_40363d
#undef public_403646
#undef public_4036b3
#undef public_4036b7
#undef public_4036dc
#undef public_4036ea
