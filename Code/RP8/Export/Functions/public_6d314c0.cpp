#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d314c0);

#define public_6d31547 _public_6d31547
#define public_6d31560 _public_6d31560
#define public_6d31590 _public_6d31590
#define public_6d315b9 _public_6d315b9
#define public_6d315fa _public_6d315fa
#define public_6d31613 _public_6d31613
#define public_6d3165e _public_6d3165e
#define public_6d3166e _public_6d3166e
#define public_6d316f0 _public_6d316f0
#define public_6d31721 _public_6d31721
#define public_6d31746 _public_6d31746
#define public_6d31778 _public_6d31778
#define public_6d31780 _public_6d31780
#define public_6d31798 _public_6d31798
#define public_6d3179a _public_6d3179a

PROC_DECLARE(0x6d314c0, internal_6d314c0, public_6d314c0);
extern "C" NAKED register_t __cdecl internal_6d314c0()
{
    __asm
    {
        push ebp
        lea ebp, ss:[esp-0x70]
        sub esp, 0x494
        and byte ptr ss : [ebp+0x64], 0
        and byte ptr ss : [ebp+0x65], 0
        and byte ptr ss : [ebp+0x66], 0
        and byte ptr ss : [ebp+0x67], 0
        and byte ptr ss : [ebp+0x6C], 0
        or byte ptr ss : [ebp+0x6F], 0xFF
        and byte ptr ss : [ebp+0x5C], 0
        or byte ptr ss : [ebp+0x63], 0xFF
        push ebx
        push esi
        push edi
        mov ebx, ecx
        push 0x1B
        xor eax, eax
        pop ecx
        lea edi, ss:[ebp-0x24]
        rep stosd
        mov eax, dword ptr ds : [ebx]
        xor edx, edx
        cmp eax, 0x14
        mov byte ptr ss : [ebp+0x6D], 0x55
        mov byte ptr ss : [ebp+0x6E], 0xAA
        mov byte ptr ss : [ebp+0x5D], 0x24
        mov byte ptr ss : [ebp+0x5E], 0x49
        mov byte ptr ss : [ebp+0x5F], 0x6D
        mov byte ptr ss : [ebp+0x60], 0x92
        mov byte ptr ss : [ebp+0x61], 0xB6
        mov byte ptr ss : [ebp+0x62], 0xDB
        mov dword ptr ss : [ebp+0x68], edx
        je public_6d3165e
        cmp eax, 0x1B
        je public_6d315fa
        cmp eax, 0x29
        je public_6d31590
        cmp eax, 0x32
        je public_6d31547
        mov eax, 0x80004005
        jmp public_6d3179a
        public_6d31547 : nop
        mov dword ptr ss : [ebp-0x24], 0x28
        mov dword ptr ss : [ebp-0x14], edx
        mov word ptr ss : [ebp-0x16], 8
        mov dword ptr ss : [ebp+0x68], 0x400
        xor ecx, ecx
        public_6d31560 : nop
        mov eax, ecx
        shl eax, 2
        and byte ptr ss : [ebp+eax-0x421], 0
        mov byte ptr ss : [ebp+eax-0x422], cl
        mov byte ptr ss : [ebp+eax-0x423], cl
        mov byte ptr ss : [ebp+eax-0x424], cl
        inc ecx
        cmp ecx, 0x100
        jb public_6d31560
        jmp public_6d3166e
        public_6d31590 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, eax
        lea esi, ds:[eax+2]
        lea eax, ss:[ebp-0x423]
        xor edi, edi
        mov dword ptr ss : [ebp-0x24], 0x28
        mov dword ptr ss : [ebp-0x14], edx
        mov word ptr ss : [ebp-0x16], 8
        mov dword ptr ss : [ebp+0x68], 0x400
        sub ecx, eax
        public_6d315b9 : nop
        mov eax, edi
        shl eax, 2
        lea edx, ds:[ecx+eax]
        mov dl, byte ptr ss : [ebp+edx-0x423]
        mov byte ptr ss : [ebp+eax-0x422], dl
        mov dl, byte ptr ds : [esi-1]
        mov byte ptr ss : [ebp+eax-0x423], dl
        mov dl, byte ptr ds : [esi]
        and byte ptr ss : [ebp+eax-0x421], 0
        inc edi
        add esi, 4
        cmp edi, 0x100
        mov byte ptr ss : [ebp+eax-0x424], dl
        jb public_6d315b9
        xor edx, edx
        jmp public_6d3166e
        public_6d315fa : nop
        mov dword ptr ss : [ebp-0x24], 0x28
        mov dword ptr ss : [ebp-0x14], edx
        mov word ptr ss : [ebp-0x16], 8
        mov dword ptr ss : [ebp+0x68], 0x400
        xor esi, esi
        public_6d31613 : nop
        mov ecx, esi
        shr ecx, 5
        mov cl, byte ptr ss : [ebp+ecx+0x5C]
        mov eax, esi
        shl eax, 2
        and byte ptr ss : [ebp+eax-0x421], 0
        mov byte ptr ss : [ebp+eax-0x422], cl
        mov ecx, esi
        shr ecx, 2
        and ecx, 7
        mov cl, byte ptr ss : [ebp+ecx+0x5C]
        mov byte ptr ss : [ebp+eax-0x423], cl
        mov ecx, esi
        and ecx, 3
        mov cl, byte ptr ss : [ebp+ecx+0x6C]
        inc esi
        cmp esi, 0x100
        mov byte ptr ss : [ebp+eax-0x424], cl
        jb public_6d31613
        jmp public_6d3166e
        public_6d3165e : nop
        mov dword ptr ss : [ebp-0x24], 0x28
        mov dword ptr ss : [ebp-0x14], edx
        mov word ptr ss : [ebp-0x16], 0x18
        public_6d3166e : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [ebx+0x10]
        mov esi, 0xB12
        mov dword ptr ss : [ebp-0xC], esi
        mov dword ptr ss : [ebp-8], esi
        movzx esi, word ptr ss : [ebp-0x16]
        shr esi, 3
        mov dword ptr ss : [ebp-0x20], ecx
        imul ecx, esi
        mov dword ptr ss : [ebp-0x1C], eax
        mov dword ptr ss : [ebp+0x6C], ecx
        add ecx, 3
        and ecx, 0xFFFFFFFC
        imul eax, ecx
        mov dword ptr ss : [ebp+0x60], ecx
        mov ecx, dword ptr ss : [ebp+0x68]
        lea ecx, ds:[eax+ecx+0x36]
        xor eax, eax
        lea edi, ss:[ebp+0x48]
        stosd 
        stosd 
        stosd 
        mov dword ptr ss : [ebp+0x58], esi
        lea esi, ds:[ecx+3]
        stosw 
        and esi, 0xFFFFFFFC
        sub esi, ecx
        lea eax, ds:[esi+ecx]
        mov dword ptr ss : [ebp+0x4A], eax
        mov eax, dword ptr ss : [ebp+0x68]
        add eax, 0x36
        cmp dword ptr ss : [ebp+0x7C], edx
        mov word ptr ss : [ebp-0x18], 1
        mov word ptr ss : [ebp+0x48], 0x4D42
        mov dword ptr ss : [ebp+0x52], eax
        je public_6d316f0
        push edx
        lea eax, ss:[ebp+0x7C]
        push eax
        push 0xE
        lea eax, ss:[ebp+0x48]
        push eax
        push dword ptr ss : [ebp+0x78]
        call dword ptr ds : [public_6d5e050]
        xor edx, edx
        public_6d316f0 : nop
        mov edi, dword ptr ds : [public_6d5e050]
        push edx
        lea eax, ss:[ebp+0x7C]
        push eax
        push 0x28
        lea eax, ss:[ebp-0x24]
        push eax
        push dword ptr ss : [ebp+0x78]
        call edi
        cmp dword ptr ss : [ebp+0x68], 0
        je public_6d31721
        push 0
        lea eax, ss:[ebp+0x7C]
        push eax
        push dword ptr ss : [ebp+0x68]
        lea eax, ss:[ebp-0x424]
        push eax
        push dword ptr ss : [ebp+0x78]
        call edi
        public_6d31721 : nop
        mov ecx, dword ptr ds : [ebx+0x30]
        mov eax, dword ptr ds : [ebx+0x1C]
        mov edx, dword ptr ds : [ebx+0x18]
        imul eax, ecx
        imul edx, dword ptr ss : [ebp+0x58]
        mov edi, dword ptr ds : [ebx+0x10]
        add eax, edx
        add eax, dword ptr ds : [ebx+4]
        dec edi
        imul edi, ecx
        add edi, eax
        cmp edi, eax
        mov dword ptr ss : [ebp+0x58], eax
        jb public_6d31780
        public_6d31746 : nop
        push 0
        lea eax, ss:[ebp+0x7C]
        push eax
        push dword ptr ss : [ebp+0x6C]
        push edi
        push dword ptr ss : [ebp+0x78]
        call dword ptr ds : [public_6d5e050]
        mov eax, dword ptr ss : [ebp+0x60]
        cmp dword ptr ss : [ebp+0x6C], eax
        jae public_6d31778
        sub eax, dword ptr ss : [ebp+0x6C]
        push 0
        lea ecx, ss:[ebp+0x7C]
        push ecx
        push eax
        lea eax, ss:[ebp+0x64]
        push eax
        push dword ptr ss : [ebp+0x78]
        call dword ptr ds : [public_6d5e050]
        public_6d31778 : nop
        sub edi, dword ptr ds : [ebx+0x30]
        cmp edi, dword ptr ss : [ebp+0x58]
        jae public_6d31746
        public_6d31780 : nop
        test esi, esi
        je public_6d31798
        push 0
        lea eax, ss:[ebp+0x7C]
        push eax
        push esi
        lea eax, ss:[ebp+0x64]
        push eax
        push dword ptr ss : [ebp+0x78]
        call dword ptr ds : [public_6d5e050]
        public_6d31798 : nop
        xor eax, eax
        public_6d3179a : nop
        pop edi
        pop esi
        pop ebx
        add ebp, 0x70
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d314c0)
    }
}

#undef public_6d31547
#undef public_6d31560
#undef public_6d31590
#undef public_6d315b9
#undef public_6d315fa
#undef public_6d31613
#undef public_6d3165e
#undef public_6d3166e
#undef public_6d316f0
#undef public_6d31721
#undef public_6d31746
#undef public_6d31778
#undef public_6d31780
#undef public_6d31798
#undef public_6d3179a
