#include "Server-PCH.h"


#define public_6d3b1d2 _public_6d3b1d2
#define public_6d3b1f0 _public_6d3b1f0
#define public_6d3b227 _public_6d3b227
#define public_6d3b243 _public_6d3b243
#define public_6d3b252 _public_6d3b252
#define public_6d3b276 _public_6d3b276
#define public_6d3b28c _public_6d3b28c
#define public_6d3b290 _public_6d3b290
#define public_6d3b2a1 _public_6d3b2a1
#define public_6d3b2ba _public_6d3b2ba
#define public_6d3b2c9 _public_6d3b2c9
#define public_6d3b2d7 _public_6d3b2d7
#define public_6d3b2e3 _public_6d3b2e3

PROC_DECLARE(0x6d3b190, internal_6d3b190, public_6d3b190);
extern "C" NAKED register_t __cdecl internal_6d3b190()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ds : [ecx+0x10]
        push ebx
        push ebp
        xor edx, edx
        cmp eax, edx
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d3b290
        mov edi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+0xC]
        cmp ecx, edx
        mov eax, esi
        je public_6d3b1f0
        mov ebx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [ebx+0xC]
        public_6d3b1d2 : nop
        cmp ebx, eax
        je public_6d3b290
        mov bp, word ptr ds : [ecx]
        cmp bp, word ptr ds : [eax]
        jne public_6d3b290
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6d3b1d2
        public_6d3b1f0 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 1
        neg ecx
        mov esi, eax
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6d3b252
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d3b227
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 0x10
        ret 8
        public_6d3b227 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        je public_6d3b243
        cmp dword ptr ds : [ecx+8], eax
        jne public_6d3b243
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 8
        public_6d3b243 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x10
        ret 8
        public_6d3b252 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x1C]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], eax
        jae public_6d3b290
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+0xC]
        cmp eax, edx
        mov ecx, esi
        je public_6d3b28c
        mov ebx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [ebx+0xC]
        public_6d3b276 : nop
        cmp ebx, ecx
        je public_6d3b290
        mov bp, word ptr ds : [eax]
        cmp bp, word ptr ds : [ecx]
        jne public_6d3b290
        add eax, 2
        add ecx, 2
        cmp eax, edx
        jne public_6d3b276
        public_6d3b28c : nop
        mov esi, ecx
        jmp public_6d3b252
        public_6d3b290 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x28]
        cmp dword ptr ds : [eax+0xC], ebx
        ja public_6d3b2e3
        mov edi, dword ptr ss : [esp+0x24]
        public_6d3b2a1 : nop
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6d3b2c9
        mov edx, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        jne public_6d3b2d7
        mov eax, dword ptr ss : [esp+0x10]
        public_6d3b2ba : nop
        cmp dword ptr ds : [eax+0xC], ebx
        je public_6d3b2e3
        mov ecx, dword ptr ss : [esp+0x14]
        dec ebx
        lea esi, ds:[esi+ecx*2]
        jmp public_6d3b2a1
        public_6d3b2c9 : nop
        mov cl, byte ptr ds : [edi+0x1C]
        test cl, cl
        je public_6d3b2d7
        cmp dword ptr ds : [edi+8], esi
        jne public_6d3b2d7
        jmp public_6d3b2ba
        public_6d3b2d7 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 8
        public_6d3b2e3 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d3b190)
    }
}

#undef public_6d3b1d2
#undef public_6d3b1f0
#undef public_6d3b227
#undef public_6d3b243
#undef public_6d3b252
#undef public_6d3b276
#undef public_6d3b28c
#undef public_6d3b290
#undef public_6d3b2a1
#undef public_6d3b2ba
#undef public_6d3b2c9
#undef public_6d3b2d7
#undef public_6d3b2e3
