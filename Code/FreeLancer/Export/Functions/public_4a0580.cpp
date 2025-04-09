#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a0220);
CLANG_FORWARD_PROC_SYMBOL(public_4a0580);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);
CLANG_FORWARD_PROC_SYMBOL(public_537260);

#define public_4a05b0 _public_4a05b0
#define public_4a05be _public_4a05be
#define public_4a05d0 _public_4a05d0
#define public_4a05e0 _public_4a05e0
#define public_4a0600 _public_4a0600
#define public_4a0606 _public_4a0606
#define public_4a060f _public_4a060f
#define public_4a062f _public_4a062f
#define public_4a0637 _public_4a0637
#define public_4a0669 _public_4a0669

PROC_DECLARE(0x4a0580, internal_4a0580, public_4a0580);
extern "C" NAKED register_t __cdecl internal_4a0580()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [public_5d2ed0]
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ds : [esi+0xF0C], eax
        mov edx, dword ptr ds : [esi+0xB60]
        mov ecx, dword ptr ds : [esi+0xB5C]
        lea edi, ds:[esi+0xB58]
        mov eax, edx
        cmp eax, edx
        mov dword ptr ss : [esp+0x10], esi
        je public_4a05be
        nop 
        public_4a05b0 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_4a05b0
        public_4a05be : nop
        push ebp
        mov dword ptr ds : [edi+8], ecx
        call public_4c4fb0
        mov ebp, eax
        xor ebx, ebx
        test ebp, ebp
        jle public_4a060f
        nop 
        public_4a05d0 : nop
        push ebx
        call public_4c4ff0
        mov esi, dword ptr ds : [eax]
        add esp, 4
        test esi, esi
        je public_4a0606
        nop 
        public_4a05e0 : nop
        cmp word ptr ds : [esi+8], 0x5A
        jne public_4a0600
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x10]
        push edx
        push 1
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, edi
        call public_537260
        public_4a0600 : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_4a05e0
        public_4a0606 : nop
        inc ebx
        cmp ebx, ebp
        jl public_4a05d0
        mov esi, dword ptr ss : [esp+0x14]
        public_4a060f : nop
        mov eax, dword ptr ds : [esi+0x7D0]
        test eax, eax
        pop ebp
        je public_4a0669
        mov al, byte ptr ds : [esi+0x478]
        test al, al
        jne public_4a0669
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_4a062f
        xor edi, edi
        jmp public_4a0637
        public_4a062f : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        sar edi, 2
        public_4a0637 : nop
        mov ecx, dword ptr ds : [esi+0xB50]
        mov edx, dword ptr ds : [ecx]
        test edi, edi
        sete bl
        xor eax, eax
        mov al, bl
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        test bl, bl
        je public_4a0669
        cmp dword ptr ds : [public_6720a0], 3
        jne public_4a0669
        push 0
        mov ecx, esi
        call public_4a0220
        public_4a0669 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4a0580)
    }
}

#undef public_4a05b0
#undef public_4a05be
#undef public_4a05d0
#undef public_4a05e0
#undef public_4a0600
#undef public_4a0606
#undef public_4a060f
#undef public_4a062f
#undef public_4a0637
#undef public_4a0669
