#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4061a0);
CLANG_FORWARD_PROC_SYMBOL(public_406510);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_406531 _public_406531
#define public_406570 _public_406570
#define public_4065ff _public_4065ff
#define public_40660d _public_40660d
#define public_40661c _public_40661c
#define public_40662c _public_40662c
#define public_40663c _public_40663c
#define public_406645 _public_406645
#define public_406677 _public_406677
#define public_406692 _public_406692
#define public_4066ad _public_4066ad
#define public_406700 _public_406700
#define public_406717 _public_406717
#define public_406740 _public_406740
#define public_4067a0 _public_4067a0
#define public_4067e4 _public_4067e4
#define public_40681b _public_40681b
#define public_406855 _public_406855
#define public_40686d _public_40686d

PROC_DECLARE(0x406510, internal_406510, public_406510);
extern "C" NAKED register_t __cdecl internal_406510()
{
    __asm
    {
        sub esp, 0xF4
        mov eax, dword ptr ds : [public_5c6de0]
        push ebx
        mov ebx, dword ptr ds : [eax]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov edi, offset public_5c7608
        mov eax, 0x89
        public_406531 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_406531
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        xor ebp, ebp
        push ebp
        push ebp
        push eax
        call dword ptr ds : [ecx+0x108]
        mov edx, dword ptr ds : [public_5c6de0]
        mov ebx, dword ptr ds : [edx]
        mov edi, offset public_5c7628
        mov eax, 0x8D
        nop 
        public_406570 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        cmp eax, ebp
        jne public_406570
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, ebp
        je public_40686d
        mov eax, dword ptr ds : [public_5c6d80]
        lea esi, ss:[esp+0x24]
        push esi
        mov edi, 0x10
        push ecx
        mov dword ptr ss : [esp+0x3C], 2
        mov dword ptr ss : [esp+0x44], 0xC
        mov dword ptr ss : [esp+0x48], edi
        mov dword ptr ss : [esp+0x4C], ebp
        mov dword ptr ss : [esp+0x6C], 4
        mov dword ptr ss : [esp+0x70], edi
        mov dword ptr ss : [esp+0x74], ebp
        mov dword ptr ss : [esp+0xA4], 0x42
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push 0x42
        xor ebx, ebx
        push eax
        mov dword ptr ss : [esp+0x30], ebx
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, eax
        and edx, 0xC
        xor ecx, ecx
        xor esi, esi
        cmp dl, 0xC
        jne public_4065ff
        mov esi, 0x1C
        jmp public_40661c
        public_4065ff : nop
        mov edx, eax
        and edx, 4
        cmp dl, 4
        jne public_40660d
        mov esi, edi
        jmp public_40661c
        public_40660d : nop
        mov edx, eax
        and edx, 2
        cmp dl, 2
        jne public_40661c
        mov esi, 0xC
        public_40661c : nop
        test al, 0x10
        mov dword ptr ss : [esp+0x10], ecx
        je public_40662c
        mov dword ptr ss : [esp+0x10], 0xC
        public_40662c : nop
        test al, 0x40
        mov dword ptr ss : [esp+0x18], ecx
        je public_40663c
        mov dword ptr ss : [esp+0x18], 4
        public_40663c : nop
        test al, al
        jns public_406645
        add dword ptr ss : [esp+0x18], 4
        public_406645 : nop
        push eax
        call public_4061a0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x14]
        add edi, ecx
        add edi, eax
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+4]
        add edi, esi
        mov esi, dword ptr ds : [eax]
        add esp, 4
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        jle public_406717
        public_406677 : nop
        mov cl, byte ptr ds : [esi+0x19]
        test cl, cl
        je public_406700
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0xC]
        xor eax, eax
        cmp dword ptr ds : [esi+8], eax
        lea ecx, ds:[ecx+ebx*2]
        jle public_4066ad
        public_406692 : nop
        mov bx, word ptr ds : [edx]
        add bx, bp
        mov word ptr ds : [ecx], bx
        mov ebx, dword ptr ds : [esi+8]
        inc eax
        add ecx, 2
        add edx, 2
        cmp eax, ebx
        jl public_406692
        mov ebx, dword ptr ss : [esp+0x20]
        public_4066ad : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [public_5c6d80]
        push eax
        add ebx, ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0xA4], eax
        push 0
        lea eax, ss:[esp+0x3C]
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        mov eax, edi
        imul eax, ebp
        add eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x48], ecx
        add ecx, 0xC
        mov dword ptr ss : [esp+0x70], ecx
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [edx+0x20]
        add ebp, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x14]
        public_406700 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+4]
        inc ecx
        add esi, 0x1C
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], ecx
        jl public_406677
        public_406717 : nop
        mov ecx, dword ptr ds : [public_5c6d80]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5c7650
        mov eax, 1
        lea esp, ss:[esp]
        public_406740 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_406740
        mov eax, dword ptr ds : [public_5c6de0]
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x20], 1
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 7
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_4067e4
        mov eax, dword ptr ss : [esp+0x108]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x40]
        mov esi, eax
        mov eax, dword ptr ds : [public_61649c]
        test eax, eax
        jne public_4067a0
        call public_5b73e0
        mov dword ptr ds : [public_61649c], eax
        public_4067a0 : nop
        mov ecx, dword ptr ss : [esp+0x10C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push esi
        lea ecx, ss:[esp+0xAC]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov edx, dword ptr ds : [public_5c6de0]
        mov ecx, 0xC
        lea esi, ss:[esp+0xA4]
        lea edi, ss:[esp+0xD4]
        rep movsd
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xD4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x7C]
        jmp public_40681b
        public_4067e4 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ss : [esp+0x10C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x108]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x40]
        push eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [esi+0x74]
        public_40681b : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [eax]
        push 0
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push ebp
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        push 2
        push eax
        call dword ptr ds : [ecx+0x120]
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5c7640
        mov eax, 0x8D
        public_406855 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_406855
        public_40686d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xF4
        ret 8
        UNREACHABLE_TRAP(0x406510)
    }
}

#undef public_406531
#undef public_406570
#undef public_4065ff
#undef public_40660d
#undef public_40661c
#undef public_40662c
#undef public_40663c
#undef public_406645
#undef public_406677
#undef public_406692
#undef public_4066ad
#undef public_406700
#undef public_406717
#undef public_406740
#undef public_4067a0
#undef public_4067e4
#undef public_40681b
#undef public_406855
#undef public_40686d
