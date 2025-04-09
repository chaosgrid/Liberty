#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ce0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0760);
CLANG_FORWARD_PROC_SYMBOL(public_5a4b50);

#define public_4b43d0 _public_4b43d0
#define public_4b43f4 _public_4b43f4
#define public_4b43fa _public_4b43fa
#define public_4b442c _public_4b442c
#define public_4b4469 _public_4b4469
#define public_4b4485 _public_4b4485
#define public_4b44ba _public_4b44ba
#define public_4b44c1 _public_4b44c1
#define public_4b44c8 _public_4b44c8
#define public_4b44ff _public_4b44ff

PROC_DECLARE(0x4b43b0, internal_4b43b0, public_4b43b0);
extern "C" NAKED register_t __cdecl internal_4b43b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_45a740
        test al, al
        jne public_4b44ff
        push ebx
        mov ebx, dword ptr ds : [esi+0x334]
        push edi
        xor edi, edi
        xor ecx, ecx
        xor edx, edx
        mov edi, edi
        public_4b43d0 : nop
        test ebx, ebx
        je public_4b43fa
        mov eax, dword ptr ds : [esi+0x338]
        sub eax, ebx
        sar eax, 5
        cmp ecx, eax
        jae public_4b43fa
        mov eax, dword ptr ds : [esi+0x334]
        add eax, edx
        cmp byte ptr ds : [eax+0x1C], 0
        je public_4b43f4
        add edi, dword ptr ds : [eax+0xC]
        public_4b43f4 : nop
        inc ecx
        add edx, 0x20
        jmp public_4b43d0
        public_4b43fa : nop
        test edi, edi
        jne public_4b442c
        mov ecx, dword ptr ds : [esi+0x480]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x344]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        push 0
        push 1
        jmp public_4b4469
        public_4b442c : nop
        call public_4c4ce0
        mov ecx, dword ptr ds : [esi+0x480]
        mov edx, dword ptr ds : [ecx]
        cmp edi, eax
        setg bl
        xor eax, eax
        test bl, bl
        sete al
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x344]
        mov edx, dword ptr ds : [ecx]
        movzx edi, bl
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        push 0
        push edi
        public_4b4469 : nop
        mov ecx, dword ptr ds : [esi+0x478]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0xA8]
        mov edi, dword ptr ds : [esi+0xC]
        test edi, edi
        je public_4b44c8
        mov ebx, 0x64
        public_4b4485 : nop
        mov dword ptr ds : [edi+0x70], ebx
        mov eax, dword ptr ds : [esi+0x484]
        test eax, eax
        jl public_4b44c1
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [esi+0x484]
        cmp eax, dword ptr ds : [esi+ecx*4+0x370]
        je public_4b44ba
        cmp eax, dword ptr ds : [esi+ecx*4+0x394]
        je public_4b44ba
        cmp eax, dword ptr ds : [esi+ecx*4+0x3DC]
        jne public_4b44c1
        public_4b44ba : nop
        mov dword ptr ds : [edi+0x70], 0x65
        public_4b44c1 : nop
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        jne public_4b4485
        public_4b44c8 : nop
        lea eax, ds:[esi+0x394]
        push 9
        push eax
        call public_5a4b50
        lea ecx, ds:[esi+0x3DC]
        push 9
        push ecx
        call public_5a4b50
        lea edx, ds:[esi+0x370]
        push 9
        push edx
        call public_5a4b50
        add esp, 0x18
        pop edi
        pop ebx
        mov ecx, esi
        pop esi
        jmp public_5a0760
        public_4b44ff : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4b43b0)
    }
}

#undef public_4b43d0
#undef public_4b43f4
#undef public_4b43fa
#undef public_4b442c
#undef public_4b4469
#undef public_4b4485
#undef public_4b44ba
#undef public_4b44c1
#undef public_4b44c8
#undef public_4b44ff
