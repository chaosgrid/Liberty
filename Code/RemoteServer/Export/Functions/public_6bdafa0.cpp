#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec240);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bdafe4 _public_6bdafe4
#define public_6bdaffc _public_6bdaffc
#define public_6bdb024 _public_6bdb024
#define public_6bdb04c _public_6bdb04c
#define public_6bdb090 _public_6bdb090
#define public_6bdb0aa _public_6bdb0aa
#define public_6bdb0b0 _public_6bdb0b0
#define public_6bdb0c5 _public_6bdb0c5
#define public_6bdb100 _public_6bdb100
#define public_6bdb118 _public_6bdb118
#define public_6bdb139 _public_6bdb139
#define public_6bdb14d _public_6bdb14d
#define public_6bdb15a _public_6bdb15a
#define public_6bdb165 _public_6bdb165
#define public_6bdb1a1 _public_6bdb1a1
#define public_6bdb1ad _public_6bdb1ad

PROC_DECLARE(0x6bdafa0, internal_6bdafa0, public_6bdafa0);
extern "C" NAKED register_t __cdecl internal_6bdafa0()
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
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bdafe4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6bdafe4 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6bdaffc
        mov dword ptr ds : [esi+0xC], ecx
        public_6bdaffc : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bdb1ad
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
        jbe public_6bdb024
        mov dword ptr ds : [esi+0xC], ecx
        public_6bdb024 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bdb1ad
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
        jbe public_6bdb04c
        mov dword ptr ds : [esi+0xC], ecx
        public_6bdb04c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bdb1ad
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+0x28]
        mov dword ptr ds : [edi+0x24], ecx
        add eax, 4
        push edx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bec240
        lea eax, ds:[edi+0x30]
        push eax
        mov ecx, edi
        call public_6bec240
        mov eax, dword ptr ds : [edi+0x38]
        xor ebx, ebx
        cmp eax, ebx
        jbe public_6bdb139
        mov dword ptr ss : [esp+0x10], ebx
        lea ebx, ds:[ebx]
        public_6bdb090 : nop
        push 0xC
        call public_6c09d26
        add esp, 4
        cmp eax, ebx
        je public_6bdb0aa
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6bdb0b0
        public_6bdb0aa : nop
        mov dword ptr ss : [esp+0x18], ebx
        mov eax, ebx
        public_6bdb0b0 : nop
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebp
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6bdb0c5
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bdb0c5 : nop
        cmp dword ptr ds : [edi+0x1C], ebx
        jne public_6bdb15a
        mov ecx, dword ptr ds : [edi+0x18]
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        inc ecx
        add eax, 4
        mov dword ptr ds : [edi+0x18], ecx
        push eax
        mov ecx, edi
        call public_6bec240
        test eax, eax
        jne public_6bdb14d
        mov ebx, dword ptr ds : [edi+0x40]
        mov ebp, dword ptr ds : [ebx+4]
        push 0xC
        call public_6c09d26
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_6bdb100
        mov ebp, eax
        public_6bdb100 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6bdb118
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        public_6bdb118 : nop
        mov ebx, dword ptr ds : [edi+0x44]
        mov eax, dword ptr ss : [esp+0x10]
        inc ebx
        mov dword ptr ds : [edi+0x44], ebx
        mov ecx, dword ptr ds : [edi+0x38]
        inc eax
        xor ebx, ebx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jb public_6bdb090
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6bdb139 : nop
        push esi
        push ebp
        lea eax, ds:[edi+0x18]
        push eax
        mov ecx, edi
        call public_6bebeb0
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bdb165
        public_6bdb14d : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6bdb15a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6bdb165 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6bec3b0
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
        jbe public_6bdb1a1
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6bdb1a1 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bdb1ad : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6bdafa0)
    }
}

#undef public_6bdafe4
#undef public_6bdaffc
#undef public_6bdb024
#undef public_6bdb04c
#undef public_6bdb090
#undef public_6bdb0aa
#undef public_6bdb0b0
#undef public_6bdb0c5
#undef public_6bdb100
#undef public_6bdb118
#undef public_6bdb139
#undef public_6bdb14d
#undef public_6bdb15a
#undef public_6bdb165
#undef public_6bdb1a1
#undef public_6bdb1ad
