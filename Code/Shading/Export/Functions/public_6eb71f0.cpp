#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb71f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7550);

#define public_6eb723b _public_6eb723b
#define public_6eb723d _public_6eb723d
#define public_6eb7280 _public_6eb7280
#define public_6eb72a4 _public_6eb72a4
#define public_6eb72d0 _public_6eb72d0
#define public_6eb72f4 _public_6eb72f4
#define public_6eb7320 _public_6eb7320
#define public_6eb7346 _public_6eb7346
#define public_6eb737b _public_6eb737b
#define public_6eb73ad _public_6eb73ad
#define public_6eb73af _public_6eb73af
#define public_6eb73f0 _public_6eb73f0
#define public_6eb7478 _public_6eb7478
#define public_6eb74e8 _public_6eb74e8
#define public_6eb74f5 _public_6eb74f5
#define public_6eb7520 _public_6eb7520
#define public_6eb7538 _public_6eb7538

PROC_DECLARE(0x6eb71f0, internal_6eb71f0, public_6eb71f0);
extern "C" NAKED register_t __cdecl internal_6eb71f0()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x74]
        mov ebp, 1
        cmp eax, ebp
        push edi
        jne public_6eb72f4
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov ebx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        push ecx
        push 0
        push edi
        call dword ptr ds : [eax+0x108]
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, 4
        jb public_6eb723b
        add eax, 0xFFFFFFFC
        jmp public_6eb723d
        public_6eb723b : nop
        xor eax, eax
        public_6eb723d : nop
        mov edx, dword ptr ds : [edi]
        push eax
        push 0xB
        push 0
        push edi
        call dword ptr ds : [edx+0xF8]
        mov ecx, dword ptr ds : [ebx+0x20]
        mov eax, dword ptr ds : [edi]
        inc ecx
        push ecx
        push 0xD
        push 0
        push edi
        call dword ptr ds : [eax+0xF8]
        mov eax, dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ds : [edi]
        inc eax
        push eax
        push 0xE
        push 0
        push edi
        call dword ptr ds : [edx+0xF8]
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed18dc
        mov eax, ebp
        lea esp, ss:[esp]
        public_6eb7280 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push 0
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb7280
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed194c
        mov eax, ebp
        public_6eb72a4 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebp
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb72a4
        mov esi, dword ptr ds : [esi+4]
        mov edi, offset public_6ed188c
        mov eax, 0x89
        lea ebx, ds:[ebx]
        public_6eb72d0 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [esi]
        push edx
        push eax
        push esi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb72d0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x40
        ret 4
        public_6eb72f4 : nop
        mov eax, dword ptr ss : [esp+0x54]
        sub eax, 0
        je public_6eb737b
        dec eax
        jne public_6eb7538
        mov al, byte ptr ds : [esi+0x79]
        test al, al
        je public_6eb7538
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed194c
        mov eax, ebp
        lea esp, ss:[esp]
        public_6eb7320 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebp
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb7320
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed18ac
        mov eax, 0x89
        public_6eb7346 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb7346
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push 0
        push 0x18
        push ebp
        push esi
        call dword ptr ds : [eax+0xF8]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x40
        ret 4
        public_6eb737b : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov ebx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        push ecx
        push 0
        push edi
        call dword ptr ds : [eax+0x108]
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, 4
        jb public_6eb73ad
        add eax, 0xFFFFFFFC
        jmp public_6eb73af
        public_6eb73ad : nop
        xor eax, eax
        public_6eb73af : nop
        mov edx, dword ptr ds : [edi]
        push eax
        push 0xB
        push 0
        push edi
        call dword ptr ds : [edx+0xF8]
        mov ecx, dword ptr ds : [ebx+0x20]
        mov eax, dword ptr ds : [edi]
        inc ecx
        push ecx
        push 0xD
        push 0
        push edi
        call dword ptr ds : [eax+0xF8]
        mov eax, dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ds : [edi]
        inc eax
        push eax
        push 0xE
        push 0
        push edi
        call dword ptr ds : [edx+0xF8]
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed18dc
        mov eax, ebp
        nop 
        lea esp, ss:[esp]
        public_6eb73f0 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push 0
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb73f0
        mov al, byte ptr ds : [esi+0x79]
        test al, al
        je public_6eb74e8
        mov ebx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [ebx+0x34]
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        add ebx, 0x2C
        push ecx
        push 1
        push edi
        call dword ptr ds : [eax+0x108]
        mov edx, dword ptr ds : [ebx+0x1C]
        mov ebp, dword ptr ds : [edi]
        push edx
        call public_6eb7550
        add esp, 4
        push eax
        push 0xB
        push 1
        push edi
        call dword ptr ss : [ebp+0xF8]
        mov ecx, dword ptr ds : [ebx+0x20]
        mov eax, dword ptr ds : [edi]
        inc ecx
        push ecx
        push 0xD
        push 1
        push edi
        call dword ptr ds : [eax+0xF8]
        mov eax, dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ds : [edi]
        inc eax
        push eax
        push 0xE
        push 1
        push edi
        call dword ptr ds : [edx+0xF8]
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed1914
        mov eax, 1
        public_6eb7478 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push 1
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb7478
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xB
        push 1
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 2
        push 0x18
        push 1
        push eax
        call dword ptr ds : [edx+0xF8]
        xor eax, eax
        mov ecx, 0x10
        lea edi, ss:[esp+0x10]
        rep stosd
        mov eax, dword ptr ds : [esi+0x68]
        mov ecx, eax
        mov dword ptr ss : [esp+0x24], ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [edx+0x100]
        mov ebp, 2
        public_6eb74e8 : nop
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed194c
        mov eax, 1
        public_6eb74f5 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ebx]
        push ecx
        push eax
        push ebp
        push ebx
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb74f5
        mov esi, dword ptr ds : [esi+4]
        mov edi, offset public_6ed188c
        mov eax, 0x89
        nop 
        lea esp, ss:[esp]
        public_6eb7520 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi]
        push ecx
        push eax
        push esi
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb7520
        public_6eb7538 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x40
        ret 4
        UNREACHABLE_TRAP(0x6eb71f0)
    }
}

#undef public_6eb723b
#undef public_6eb723d
#undef public_6eb7280
#undef public_6eb72a4
#undef public_6eb72d0
#undef public_6eb72f4
#undef public_6eb7320
#undef public_6eb7346
#undef public_6eb737b
#undef public_6eb73ad
#undef public_6eb73af
#undef public_6eb73f0
#undef public_6eb7478
#undef public_6eb74e8
#undef public_6eb74f5
#undef public_6eb7520
#undef public_6eb7538
