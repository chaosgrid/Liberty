#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1120);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1990);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3910);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3930);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4507);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);

#define public_6ef2be1 _public_6ef2be1
#define public_6ef2bf2 _public_6ef2bf2
#define public_6ef2c29 _public_6ef2c29
#define public_6ef2c34 _public_6ef2c34
#define public_6ef2c72 _public_6ef2c72
#define public_6ef2c7c _public_6ef2c7c
#define public_6ef2c90 _public_6ef2c90
#define public_6ef2c9e _public_6ef2c9e
#define public_6ef2cb5 _public_6ef2cb5
#define public_6ef2ceb _public_6ef2ceb
#define public_6ef2d05 _public_6ef2d05
#define public_6ef2d0f _public_6ef2d0f
#define public_6ef2d20 _public_6ef2d20
#define public_6ef2d2e _public_6ef2d2e
#define public_6ef2d61 _public_6ef2d61
#define public_6ef2d6e _public_6ef2d6e
#define public_6ef2d72 _public_6ef2d72

PROC_DECLARE(0x6ef2bb0, internal_6ef2bb0, public_6ef2bb0);
extern "C" NAKED register_t __cdecl internal_6ef2bb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f010a4]
        test eax, eax
        push esi
        mov esi, ecx
        je public_6ef2d72
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6efc050]
        push edi
        lea ebx, ds:[esi+0x20]
        push ebx
        mov dword ptr ds : [public_6f010a4], 0
        call ebp
        mov edi, dword ptr ds : [esi+0x3C]
        cmp edi, dword ptr ds : [esi+0x40]
        je public_6ef2bf2
        public_6ef2be1 : nop
        mov ecx, dword ptr ds : [edi]
        call public_6ef1990
        mov eax, dword ptr ds : [esi+0x40]
        add edi, 4
        cmp edi, eax
        jne public_6ef2be1
        public_6ef2bf2 : nop
        push ebx
        call dword ptr ds : [public_6efc04c]
        mov eax, dword ptr ds : [esi+0x60]
        test eax, eax
        je public_6ef2c29
        mov ecx, dword ptr ds : [esi+0x64]
        push 0x7D0
        or ecx, 0x80
        push eax
        mov dword ptr ds : [esi+0x64], ecx
        call dword ptr ds : [public_6efc048]
        mov edx, dword ptr ds : [esi+0x60]
        push edx
        call dword ptr ds : [public_6efc044]
        mov dword ptr ds : [esi+0x60], 0
        public_6ef2c29 : nop
        push ebx
        call ebp
        mov ebp, dword ptr ds : [esi+0x3C]
        cmp ebp, dword ptr ds : [esi+0x40]
        je public_6ef2c7c
        public_6ef2c34 : nop
        mov edi, dword ptr ss : [ebp]
        test edi, edi
        je public_6ef2c72
        mov ecx, edi
        call public_6ef1120
        lea ecx, ds:[edi+0xB8]
        call public_6ef3910
        lea ecx, ds:[edi+0xA8]
        call public_6ef3ea0
        lea ecx, ds:[edi+0x10]
        call public_6ef3910
        push 1
        mov ecx, edi
        call public_6ef2800
        push edi
        call public_6ef4507
        add esp, 4
        public_6ef2c72 : nop
        mov eax, dword ptr ds : [esi+0x40]
        add ebp, 4
        cmp ebp, eax
        jne public_6ef2c34
        public_6ef2c7c : nop
        mov ecx, dword ptr ds : [esi+0x40]
        mov edi, dword ptr ds : [esi+0x3C]
        lea ebp, ds:[esi+0x38]
        mov eax, ecx
        cmp eax, ecx
        je public_6ef2c9e
        nop 
        lea esp, ss:[esp]
        public_6ef2c90 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], edx
        add eax, 4
        add edi, 4
        cmp eax, ecx
        jne public_6ef2c90
        public_6ef2c9e : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        push edi
        mov ecx, ebp
        call public_6ef3930
        mov dword ptr ss : [ebp+8], edi
        mov ebp, dword ptr ds : [esi+0x4C]
        cmp ebp, dword ptr ds : [esi+0x50]
        je public_6ef2d0f
        public_6ef2cb5 : nop
        mov edi, dword ptr ss : [ebp]
        test edi, edi
        je public_6ef2d05
        mov ecx, edi
        call public_6ef1120
        lea ecx, ds:[edi+0xB8]
        call public_6ef3910
        mov eax, dword ptr ds : [edi+0xA8]
        test eax, eax
        je public_6ef2ceb
        push eax
        call public_6ef4512
        add esp, 4
        mov dword ptr ds : [edi+0xA8], 0
        public_6ef2ceb : nop
        lea ecx, ds:[edi+0x10]
        call public_6ef3910
        push 1
        mov ecx, edi
        call public_6ef2800
        push edi
        call public_6ef4507
        add esp, 4
        public_6ef2d05 : nop
        mov eax, dword ptr ds : [esi+0x50]
        add ebp, 4
        cmp ebp, eax
        jne public_6ef2cb5
        public_6ef2d0f : nop
        mov edx, dword ptr ds : [esi+0x50]
        mov ecx, dword ptr ds : [esi+0x4C]
        mov eax, edx
        cmp eax, edx
        je public_6ef2d2e
        nop 
        lea esp, ss:[esp]
        public_6ef2d20 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6ef2d20
        public_6ef2d2e : nop
        push ebx
        mov dword ptr ds : [esi+0x50], ecx
        call dword ptr ds : [public_6efc04c]
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        pop edi
        pop ebp
        pop ebx
        je public_6ef2d61
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], 0
        public_6ef2d61 : nop
        mov al, byte ptr ds : [esi+0x1C]
        test al, al
        je public_6ef2d6e
        call dword ptr ds : [public_6efc120]
        public_6ef2d6e : nop
        mov byte ptr ds : [esi+0x1C], 0
        public_6ef2d72 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef2bb0)
    }
}

#undef public_6ef2be1
#undef public_6ef2bf2
#undef public_6ef2c29
#undef public_6ef2c34
#undef public_6ef2c72
#undef public_6ef2c7c
#undef public_6ef2c90
#undef public_6ef2c9e
#undef public_6ef2cb5
#undef public_6ef2ceb
#undef public_6ef2d05
#undef public_6ef2d0f
#undef public_6ef2d20
#undef public_6ef2d2e
#undef public_6ef2d61
#undef public_6ef2d6e
#undef public_6ef2d72
