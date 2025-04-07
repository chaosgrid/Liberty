#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d30250);

#define public_6d3996f _public_6d3996f
#define public_6d39987 _public_6d39987
#define public_6d39996 _public_6d39996
#define public_6d399d2 _public_6d399d2
#define public_6d399d6 _public_6d399d6
#define public_6d39a12 _public_6d39a12
#define public_6d39a1d _public_6d39a1d
#define public_6d39a21 _public_6d39a21
#define public_6d39a27 _public_6d39a27
#define public_6d39a2b _public_6d39a2b
#define public_6d39a2f _public_6d39a2f
#define public_6d39a34 _public_6d39a34
#define public_6d39a4d _public_6d39a4d
#define public_6d39a60 _public_6d39a60
#define public_6d39a6e _public_6d39a6e
#define public_6d39a7a _public_6d39a7a

PROC_DECLARE(0x6d39900, internal_6d39900, public_6d39900);
extern "C" NAKED register_t __cdecl internal_6d39900()
{
    __asm
    {
        sub esp, 0x10
        mov edx, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x10]
        xor ebp, ebp
        cmp eax, ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], ebx
        mov esi, edx
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_6d39a2f
        mov ecx, dword ptr ds : [ebx+8]
        lea eax, ss:[esp+0x28]
        push eax
        push edi
        call public_6d30250
        test al, al
        je public_6d39a21
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, edx
        sub eax, esi
        sar eax, 1
        neg eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_6d39996
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d3996f
        mov eax, dword ptr ds : [ecx]
        push edx
        push edi
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 0x10
        ret 8
        public_6d3996f : nop
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        je public_6d39987
        cmp dword ptr ds : [edi+8], edx
        jne public_6d39987
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 8
        public_6d39987 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x10
        ret 8
        public_6d39996 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ebx+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jae public_6d39a2b
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax+4]
        shl ecx, 5
        add eax, ecx
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        je public_6d39a2b
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, edx
        je public_6d39a12
        jmp public_6d399d6
        public_6d399d2 : nop
        mov edx, dword ptr ss : [esp+0x28]
        public_6d399d6 : nop
        mov di, word ptr ss : [ebp]
        test di, di
        je public_6d39a27
        xor eax, eax
        mov ax, word ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6d64ba0]
        push edi
        mov ebx, eax
        call dword ptr ds : [public_6d64ba0]
        add esp, 8
        cmp ax, bx
        mov ebx, dword ptr ss : [esp+0x14]
        jne public_6d39a1d
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 2
        add ebp, 2
        cmp esi, eax
        jne public_6d399d2
        mov edi, dword ptr ss : [esp+0x24]
        public_6d39a12 : nop
        mov edx, ebp
        mov dword ptr ss : [esp+0x28], edx
        jmp public_6d39996
        public_6d39a1d : nop
        mov edi, dword ptr ss : [esp+0x24]
        public_6d39a21 : nop
        mov edx, dword ptr ss : [esp+0x28]
        jmp public_6d39a2b
        public_6d39a27 : nop
        mov edi, dword ptr ss : [esp+0x24]
        public_6d39a2b : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d39a2f : nop
        cmp dword ptr ds : [ebx+0xC], ebp
        ja public_6d39a7a
        public_6d39a34 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d39a60
        mov eax, dword ptr ds : [ecx]
        push edx
        push edi
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        jne public_6d39a6e
        mov edx, dword ptr ss : [esp+0x28]
        public_6d39a4d : nop
        cmp dword ptr ds : [ebx+0xC], ebp
        je public_6d39a7a
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ds:[edx+ecx*2]
        dec ebp
        mov dword ptr ss : [esp+0x28], edx
        jmp public_6d39a34
        public_6d39a60 : nop
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        je public_6d39a6e
        cmp dword ptr ds : [edi+8], edx
        jne public_6d39a6e
        jmp public_6d39a4d
        public_6d39a6e : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 8
        public_6d39a7a : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d39900)
    }
}

#undef public_6d3996f
#undef public_6d39987
#undef public_6d39996
#undef public_6d399d2
#undef public_6d399d6
#undef public_6d39a12
#undef public_6d39a1d
#undef public_6d39a21
#undef public_6d39a27
#undef public_6d39a2b
#undef public_6d39a2f
#undef public_6d39a34
#undef public_6d39a4d
#undef public_6d39a60
#undef public_6d39a6e
#undef public_6d39a7a
