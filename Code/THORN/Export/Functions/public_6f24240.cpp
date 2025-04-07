#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23610);
CLANG_FORWARD_PROC_SYMBOL(public_6f24240);
CLANG_FORWARD_PROC_SYMBOL(public_6f244e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24820);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f24274 _public_6f24274
#define public_6f24276 _public_6f24276
#define public_6f2427e _public_6f2427e
#define public_6f24283 _public_6f24283
#define public_6f2428f _public_6f2428f
#define public_6f242b0 _public_6f242b0
#define public_6f242c8 _public_6f242c8
#define public_6f242d2 _public_6f242d2
#define public_6f242f2 _public_6f242f2
#define public_6f2430b _public_6f2430b
#define public_6f24310 _public_6f24310
#define public_6f24323 _public_6f24323
#define public_6f24330 _public_6f24330
#define public_6f2433e _public_6f2433e
#define public_6f2437a _public_6f2437a
#define public_6f24399 _public_6f24399
#define public_6f243c8 _public_6f243c8
#define public_6f243d0 _public_6f243d0
#define public_6f243eb _public_6f243eb
#define public_6f24400 _public_6f24400
#define public_6f24418 _public_6f24418
#define public_6f24420 _public_6f24420
#define public_6f24437 _public_6f24437
#define public_6f24449 _public_6f24449
#define public_6f24460 _public_6f24460
#define public_6f24484 _public_6f24484
#define public_6f24490 _public_6f24490
#define public_6f244a6 _public_6f244a6
#define public_6f244b1 _public_6f244b1
#define public_6f244c4 _public_6f244c4
#define public_6f244c7 _public_6f244c7

PROC_DECLARE(0x6f24240, internal_6f24240, public_6f24240);
extern "C" NAKED register_t __cdecl internal_6f24240()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        sar eax, 4
        cmp eax, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6f24399
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6f24274
        mov eax, esi
        sub eax, ecx
        sar eax, 4
        cmp ebp, eax
        jb public_6f24276
        public_6f24274 : nop
        mov eax, ebp
        public_6f24276 : nop
        test ecx, ecx
        jne public_6f2427e
        xor esi, esi
        jmp public_6f24283
        public_6f2427e : nop
        sub esi, ecx
        sar esi, 4
        public_6f24283 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f2428f
        xor eax, eax
        public_6f2428f : nop
        shl eax, 4
        push eax
        call public_6f57e9c
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6f242c8
        public_6f242b0 : nop
        push esi
        push edi
        call public_6f24820
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, eax
        jne public_6f242b0
        public_6f242c8 : nop
        test ebp, ebp
        mov esi, edi
        jbe public_6f242f2
        mov dword ptr ss : [esp+0x24], ebp
        public_6f242d2 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_6f24820
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x10
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6f242d2
        mov eax, dword ptr ss : [esp+0x20]
        public_6f242f2 : nop
        mov edx, ebp
        shl edx, 4
        lea ecx, ds:[edx+edi]
        mov edi, dword ptr ds : [ebx+8]
        cmp eax, edi
        mov esi, eax
        je public_6f24323
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6f24310
        public_6f2430b : nop
        mov ecx, dword ptr ss : [esp+0x20]
        nop 
        public_6f24310 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6f24820
        add esi, 0x10
        add esp, 8
        cmp esi, edi
        jne public_6f2430b
        public_6f24323 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, edi
        je public_6f2433e
        lea ecx, ds:[ecx]
        public_6f24330 : nop
        mov ecx, esi
        call public_6f23610
        add esi, 0x10
        cmp esi, edi
        jne public_6f24330
        public_6f2433e : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6f57e26
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx+4]
        shl eax, 4
        add eax, edx
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [ebx+0xC], eax
        jne public_6f2437a
        xor eax, eax
        mov eax, ebp
        pop edi
        shl eax, 4
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f2437a : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 4
        add eax, ebp
        pop edi
        shl eax, 4
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f24399 : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, edi
        sar edx, 4
        cmp edx, ebp
        jae public_6f24449
        mov eax, ebp
        shl eax, 4
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], eax
        lea edx, ds:[eax+edi]
        mov ebx, edi
        je public_6f243eb
        mov eax, edx
        sub eax, edi
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6f243d0
        public_6f243c8 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6f243d0 : nop
        add eax, ebx
        push ebx
        push eax
        call public_6f24820
        add ebx, 0x10
        add esp, 8
        cmp ebx, esi
        jne public_6f243c8
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f243eb : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ss : [esp+0x28]
        mov edx, esi
        sub edx, edi
        sar edx, 4
        sub ebp, edx
        je public_6f24418
        lea ecx, ds:[ecx]
        public_6f24400 : nop
        push ebx
        push esi
        call public_6f24820
        add esp, 8
        add esi, 0x10
        dec ebp
        jne public_6f24400
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f24418 : nop
        mov esi, dword ptr ds : [ecx+8]
        cmp edi, esi
        je public_6f24437
        nop 
        public_6f24420 : nop
        push ebx
        mov ecx, edi
        call public_6f244e0
        add edi, 0x10
        cmp edi, esi
        jne public_6f24420
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f24437 : nop
        mov edx, dword ptr ds : [ecx+8]
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f24449 : nop
        test ebp, ebp
        jbe public_6f244c7
        shl ebp, 4
        mov ebx, esi
        sub ebx, ebp
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_6f24484
        lea esp, ss:[esp]
        public_6f24460 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push ebx
        push eax
        call public_6f24820
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x10
        add ebx, 0x10
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6f24460
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f24484 : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov esi, ebx
        sub esi, ebp
        cmp edi, esi
        je public_6f244a6
        nop 
        public_6f24490 : nop
        sub esi, 0x10
        sub ebx, 0x10
        push esi
        mov ecx, ebx
        call public_6f244e0
        cmp esi, edi
        jne public_6f24490
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f244a6 : nop
        lea esi, ds:[edi+ebp]
        cmp edi, esi
        je public_6f244c4
        mov ebx, dword ptr ss : [esp+0x28]
        public_6f244b1 : nop
        push ebx
        mov ecx, edi
        call public_6f244e0
        add edi, 0x10
        cmp edi, esi
        jne public_6f244b1
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f244c4 : nop
        add dword ptr ds : [ecx+8], ebp
        public_6f244c7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f24240)
    }
}

#undef public_6f24274
#undef public_6f24276
#undef public_6f2427e
#undef public_6f24283
#undef public_6f2428f
#undef public_6f242b0
#undef public_6f242c8
#undef public_6f242d2
#undef public_6f242f2
#undef public_6f2430b
#undef public_6f24310
#undef public_6f24323
#undef public_6f24330
#undef public_6f2433e
#undef public_6f2437a
#undef public_6f24399
#undef public_6f243c8
#undef public_6f243d0
#undef public_6f243eb
#undef public_6f24400
#undef public_6f24418
#undef public_6f24420
#undef public_6f24437
#undef public_6f24449
#undef public_6f24460
#undef public_6f24484
#undef public_6f24490
#undef public_6f244a6
#undef public_6f244b1
#undef public_6f244c4
#undef public_6f244c7
