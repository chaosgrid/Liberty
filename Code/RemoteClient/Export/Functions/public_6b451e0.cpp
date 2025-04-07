#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4eb30);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b45224 _public_6b45224
#define public_6b4523c _public_6b4523c
#define public_6b45264 _public_6b45264
#define public_6b4528c _public_6b4528c
#define public_6b452bf _public_6b452bf
#define public_6b452db _public_6b452db
#define public_6b452f0 _public_6b452f0
#define public_6b4530a _public_6b4530a
#define public_6b45310 _public_6b45310
#define public_6b45325 _public_6b45325
#define public_6b45360 _public_6b45360
#define public_6b45378 _public_6b45378
#define public_6b45399 _public_6b45399
#define public_6b453ad _public_6b453ad
#define public_6b453ba _public_6b453ba
#define public_6b453c5 _public_6b453c5
#define public_6b45401 _public_6b45401
#define public_6b4540d _public_6b4540d

PROC_DECLARE(0x6b451e0, internal_6b451e0, public_6b451e0);
extern "C" NAKED register_t __cdecl internal_6b451e0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x10]
        push esi
        push ebp
        lea ebx, ds:[edi+0x18]
        push ebx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b45224
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6b45224 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6b4523c
        mov dword ptr ds : [esi+0xC], ecx
        public_6b4523c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b4540d
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b45264
        mov dword ptr ds : [esi+0xC], ecx
        public_6b45264 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b4540d
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x38], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b4528c
        mov dword ptr ds : [esi+0xC], ecx
        public_6b4528c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b4540d
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+0x28]
        mov dword ptr ds : [edi+0x24], ecx
        add eax, 4
        push edx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6b4eb30
        test eax, eax
        je public_6b452bf
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6b452bf : nop
        lea eax, ds:[edi+0x30]
        push eax
        mov ecx, edi
        call public_6b4eb30
        test eax, eax
        je public_6b452db
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6b452db : nop
        mov eax, dword ptr ds : [edi+0x38]
        xor ebx, ebx
        cmp eax, ebx
        jbe public_6b45399
        mov dword ptr ss : [esp+0x10], ebx
        lea esp, ss:[esp]
        public_6b452f0 : nop
        push 0xC
        call public_6b6a134
        add esp, 4
        cmp eax, ebx
        je public_6b4530a
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6b45310
        public_6b4530a : nop
        mov dword ptr ss : [esp+0x18], ebx
        mov eax, ebx
        public_6b45310 : nop
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebp
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b45325
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b45325 : nop
        cmp dword ptr ds : [edi+0x1C], ebx
        jne public_6b453ba
        mov ecx, dword ptr ds : [edi+0x18]
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        inc ecx
        add eax, 4
        mov dword ptr ds : [edi+0x18], ecx
        push eax
        mov ecx, edi
        call public_6b4eb30
        test eax, eax
        jne public_6b453ad
        mov ebx, dword ptr ds : [edi+0x40]
        mov ebp, dword ptr ds : [ebx+4]
        push 0xC
        call public_6b6a134
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_6b45360
        mov ebp, eax
        public_6b45360 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6b45378
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        public_6b45378 : nop
        mov ebx, dword ptr ds : [edi+0x44]
        mov eax, dword ptr ss : [esp+0x10]
        inc ebx
        mov dword ptr ds : [edi+0x44], ebx
        mov ecx, dword ptr ds : [edi+0x38]
        inc eax
        xor ebx, ebx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jb public_6b452f0
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6b45399 : nop
        push esi
        push ebp
        lea eax, ds:[edi+0x18]
        push eax
        mov ecx, edi
        call public_6b4e7a0
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b453c5
        public_6b453ad : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6b453ba : nop
        mov eax, dword ptr ds : [edi+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6b453c5 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ds : [esi]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add edx, 2
        cmp esi, edx
        jbe public_6b45401
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b45401 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b4540d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6b451e0)
    }
}

#undef public_6b45224
#undef public_6b4523c
#undef public_6b45264
#undef public_6b4528c
#undef public_6b452bf
#undef public_6b452db
#undef public_6b452f0
#undef public_6b4530a
#undef public_6b45310
#undef public_6b45325
#undef public_6b45360
#undef public_6b45378
#undef public_6b45399
#undef public_6b453ad
#undef public_6b453ba
#undef public_6b453c5
#undef public_6b45401
#undef public_6b4540d
