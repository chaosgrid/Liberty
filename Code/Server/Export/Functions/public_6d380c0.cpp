#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d38220);

#define public_6d3812f _public_6d3812f
#define public_6d38147 _public_6d38147
#define public_6d38156 _public_6d38156
#define public_6d38160 _public_6d38160
#define public_6d38196 _public_6d38196
#define public_6d381b0 _public_6d381b0
#define public_6d381b8 _public_6d381b8
#define public_6d381c1 _public_6d381c1
#define public_6d381da _public_6d381da
#define public_6d381f9 _public_6d381f9
#define public_6d38207 _public_6d38207
#define public_6d38213 _public_6d38213

PROC_DECLARE(0x6d380c0, internal_6d380c0, public_6d380c0);
extern "C" NAKED register_t __cdecl internal_6d380c0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        xor eax, eax
        cmp ecx, eax
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov edi, esi
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x10], eax
        je public_6d381b8
        mov ecx, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x24]
        push eax
        push ebx
        call public_6d38220
        test al, al
        mov esi, dword ptr ss : [esp+0x24]
        je public_6d381b8
        mov eax, esi
        sub eax, edi
        sar eax, 1
        neg eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_6d38156
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d3812f
        mov edx, dword ptr ds : [ecx]
        push esi
        push ebx
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 0xC
        ret 8
        public_6d3812f : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d38147
        cmp dword ptr ds : [ebx+8], esi
        jne public_6d38147
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 8
        public_6d38147 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0xC
        ret 8
        public_6d38156 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x20], eax
        lea ecx, ds:[ecx]
        public_6d38160 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jae public_6d381b8
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edx+4]
        shl ecx, 5
        add ecx, eax
        mov al, byte ptr ds : [ecx+8]
        test al, al
        je public_6d381b8
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+4]
        cmp eax, edx
        mov ecx, esi
        je public_6d381b0
        mov edi, dword ptr ds : [ebx+0xC]
        public_6d38196 : nop
        cmp edi, ecx
        je public_6d381b8
        mov bp, word ptr ds : [ecx]
        cmp bp, word ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x14]
        jne public_6d381b8
        add eax, 2
        add ecx, 2
        cmp eax, edx
        jne public_6d38196
        public_6d381b0 : nop
        mov esi, ecx
        mov dword ptr ss : [esp+0x24], esi
        jmp public_6d38160
        public_6d381b8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp dword ptr ss : [ebp+0xC], ecx
        ja public_6d38213
        public_6d381c1 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d381f9
        mov edx, dword ptr ds : [ecx]
        push esi
        push ebx
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        jne public_6d38207
        mov esi, dword ptr ss : [esp+0x24]
        public_6d381da : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_6d38213
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        dec eax
        lea esi, ds:[esi+ecx*2]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x24], esi
        jmp public_6d381c1
        public_6d381f9 : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d38207
        cmp dword ptr ds : [ebx+8], esi
        jne public_6d38207
        jmp public_6d381da
        public_6d38207 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 8
        public_6d38213 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6d380c0)
    }
}

#undef public_6d3812f
#undef public_6d38147
#undef public_6d38156
#undef public_6d38160
#undef public_6d38196
#undef public_6d381b0
#undef public_6d381b8
#undef public_6d381c1
#undef public_6d381da
#undef public_6d381f9
#undef public_6d38207
#undef public_6d38213
