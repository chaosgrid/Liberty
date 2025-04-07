#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b50040);
CLANG_FORWARD_PROC_SYMBOL(public_6b50e50);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a3f8);

#define public_6b50e77 _public_6b50e77
#define public_6b50e8a _public_6b50e8a
#define public_6b50eba _public_6b50eba
#define public_6b50ecd _public_6b50ecd
#define public_6b50eed _public_6b50eed
#define public_6b50f00 _public_6b50f00
#define public_6b50f22 _public_6b50f22
#define public_6b50f35 _public_6b50f35
#define public_6b50f57 _public_6b50f57
#define public_6b50f6a _public_6b50f6a
#define public_6b50f8c _public_6b50f8c
#define public_6b50f9f _public_6b50f9f
#define public_6b50fc3 _public_6b50fc3
#define public_6b50fd6 _public_6b50fd6
#define public_6b50ff9 _public_6b50ff9
#define public_6b5100c _public_6b5100c
#define public_6b51048 _public_6b51048
#define public_6b5105e _public_6b5105e
#define public_6b51085 _public_6b51085
#define public_6b5109b _public_6b5109b
#define public_6b5111f _public_6b5111f
#define public_6b51132 _public_6b51132
#define public_6b5114e _public_6b5114e
#define public_6b51161 _public_6b51161
#define public_6b51181 _public_6b51181
#define public_6b51194 _public_6b51194
#define public_6b511b4 _public_6b511b4
#define public_6b511c7 _public_6b511c7
#define public_6b5120e _public_6b5120e
#define public_6b51221 _public_6b51221
#define public_6b51249 _public_6b51249
#define public_6b5125c _public_6b5125c
#define public_6b5126a _public_6b5126a
#define public_6b51297 _public_6b51297
#define public_6b512aa _public_6b512aa
#define public_6b512d0 _public_6b512d0
#define public_6b512e2 _public_6b512e2
#define public_6b512ec _public_6b512ec
#define public_6b512fb _public_6b512fb
#define public_6b51304 _public_6b51304
#define public_6b51310 _public_6b51310
#define public_6b51324 _public_6b51324
#define public_6b5132d _public_6b5132d
#define public_6b51340 _public_6b51340
#define public_6b51358 _public_6b51358
#define public_6b51388 _public_6b51388
#define public_6b513a0 _public_6b513a0
#define public_6b513af _public_6b513af
#define public_6b513c0 _public_6b513c0
#define public_6b513c3 _public_6b513c3
#define public_6b513ed _public_6b513ed
#define public_6b51405 _public_6b51405
#define public_6b51429 _public_6b51429
#define public_6b51458 _public_6b51458
#define public_6b51472 _public_6b51472
#define public_6b51481 _public_6b51481
#define public_6b51492 _public_6b51492
#define public_6b514bd _public_6b514bd
#define public_6b514ed _public_6b514ed
#define public_6b5151f _public_6b5151f
#define public_6b51536 _public_6b51536
#define public_6b5154e _public_6b5154e
#define public_6b51563 _public_6b51563
#define public_6b5156f _public_6b5156f
#define public_6b51584 _public_6b51584
#define public_6b51597 _public_6b51597
#define public_6b515a5 _public_6b515a5
#define public_6b515bf _public_6b515bf
#define public_6b515c6 _public_6b515c6
#define public_6b515d5 _public_6b515d5
#define public_6b515e7 _public_6b515e7
#define public_6b51601 _public_6b51601
#define public_6b51636 _public_6b51636
#define public_6b5164c _public_6b5164c
#define public_6b51678 _public_6b51678
#define public_6b5167f _public_6b5167f
#define public_6b5168b _public_6b5168b
#define public_6b516b1 _public_6b516b1
#define public_6b516c3 _public_6b516c3
#define public_6b516ec _public_6b516ec
#define public_6b51713 _public_6b51713
#define public_6b5173a _public_6b5173a

PROC_DECLARE(0x6b50e50, internal_6b50e50, public_6b50e50);
extern "C" NAKED register_t __cdecl internal_6b50e50()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        push esi
        mov esi, 4
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        push edi
        mov dword ptr ss : [ebp+0x10], edx
        mov edi, 0x16
        jbe public_6b50e77
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b50e77 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b50e8a
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b50e8a : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0x24]
        add eax, 4
        push edx
        mov dword ptr ss : [ebp+0x18], eax
        call dword ptr ds : [public_6b6b014]
        mov ebx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        add ebx, 2
        mov ecx, ebx
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], ebx
        jbe public_6b50eba
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b50eba : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6b50ecd
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b50ecd : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        mov dword ptr ss : [ebp+0x18], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b50eed
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b50eed : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b50f00
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b50f00 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b50f22
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b50f22 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b50f35
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b50f35 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b50f57
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b50f57 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b50f6a
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b50f6a : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b50f8c
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b50f8c : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b50f9f
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b50f9f : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [eax], edx
        mov cl, byte ptr ss : [ebp+0x40]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc esi
        mov eax, esi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6b50fc3
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b50fc3 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b50fd6
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b50fd6 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x40]
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        shl eax, 2
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b50ff9
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b50ff9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b5100c
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b5100c : nop
        mov eax, dword ptr ss : [ebp+0x40]
        mov edx, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ss : [ebp+0x44]
        shl eax, 2
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        add edx, eax
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov dword ptr ss : [ebp+0x18], edx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51048
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6b51048 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b5105e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b5105e : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x48]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51085
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6b51085 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b5109b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b5109b : nop
        mov edx, dword ptr ss : [ebp+0x4C]
        mov ecx, dword ptr ss : [ebp+0x54]
        mov esi, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp+0x50]
        mov dword ptr ss : [esp+0x1C], edx
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x24], ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_6b3a160
        fld dword ptr ss : [ebp+0x5C]
        fmul qword ptr ds : [public_6b6c1e0]
        add esi, 0xC
        mov dword ptr ss : [ebp+0x18], esi
        call public_6b6a3f8
        fld dword ptr ss : [ebp+0x60]
        fmul qword ptr ds : [public_6b6c1e0]
        mov bl, al
        call public_6b6a3f8
        fld dword ptr ss : [ebp+0x64]
        fmul qword ptr ds : [public_6b6c1e0]
        mov byte ptr ss : [esp+0x12], al
        call public_6b6a3f8
        fld dword ptr ss : [ebp+0x58]
        fmul qword ptr ds : [public_6b6c1e0]
        mov byte ptr ss : [esp+0x13], al
        call public_6b6a3f8
        mov esi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc esi
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], esi
        mov esi, 0x16
        jbe public_6b5111f
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b5111f : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6b51132
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b51132 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [ecx], bl
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6b5114e
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b5114e : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6b51161
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b51161 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ss : [esp+0x12]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6b51181
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b51181 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6b51194
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b51194 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6b511b4
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b511b4 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6b511c7
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b511c7 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [ecx], al
        fild dword ptr ss : [ebp+0x68]
        mov eax, dword ptr ss : [ebp+0x24]
        inc ecx
        push eax
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+0x18], ecx
        call dword ptr ds : [public_6b6b020]
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        add esp, 4
        fdivr dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_6b6e390]
        call public_6b6a3f8
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6b5120e
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b5120e : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6b51221
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b51221 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [ecx], al
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        je public_6b5126a
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51249
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b51249 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b5125c
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b5125c : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        public_6b5126a : nop
        lea ecx, ss:[ebp+0x70]
        call public_6b3a4f0
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6b5156f
        mov edi, dword ptr ss : [ebp+0x10]
        mov cx, word ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp+0x14]
        add edi, 2
        mov eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6b51297
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b51297 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b512aa
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b512aa : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], edi
        je public_6b515a5
        nop 
        lea esp, ss:[esp]
        public_6b512d0 : nop
        mov esi, dword ptr ds : [edi+8]
        mov al, byte ptr ds : [esi+0xE]
        xor bl, bl
        test al, al
        mov byte ptr ss : [esp+0x12], bl
        je public_6b512e2
        mov bl, 1
        public_6b512e2 : nop
        mov al, byte ptr ds : [esi+0xF]
        test al, al
        je public_6b512ec
        or bl, 2
        public_6b512ec : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, 0xFF
        cmp ecx, eax
        jle public_6b512fb
        or bl, 4
        public_6b512fb : nop
        cmp word ptr ds : [esi+0xC], ax
        jbe public_6b51304
        or bl, 8
        public_6b51304 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        jne public_6b51310
        or bl, 0x20
        jmp public_6b51324
        public_6b51310 : nop
        push eax
        call public_6b50040
        add esp, 4
        test al, al
        mov byte ptr ss : [esp+0x12], al
        jne public_6b51324
        or bl, 0x10
        public_6b51324 : nop
        cmp dword ptr ds : [esi+4], 1
        jne public_6b5132d
        or bl, 0x80
        public_6b5132d : nop
        fld dword ptr ds : [esi+8]
        fcomp qword ptr ds : [public_6b6bf10]
        fnstsw ax
        test ah, 0x44
        jp public_6b51340
        or bl, 0x40
        public_6b51340 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        mov edx, 0x16
        jbe public_6b51358
        mov dword ptr ss : [ebp+0x1C], edx
        public_6b51358 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b51563
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], bl
        inc eax
        test bl, bl
        mov dword ptr ss : [ebp+0x18], eax
        js public_6b513c3
        test bl, 4
        mov eax, dword ptr ss : [ebp+0x10]
        je public_6b513a0
        mov ecx, dword ptr ss : [ebp+0x14]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6b51388
        mov dword ptr ss : [ebp+0x1C], edx
        public_6b51388 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b51563
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        jmp public_6b513c0
        public_6b513a0 : nop
        mov cl, byte ptr ds : [esi+4]
        inc eax
        cmp eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6b513af
        mov dword ptr ss : [ebp+0x1C], edx
        public_6b513af : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b51563
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        public_6b513c0 : nop
        mov dword ptr ss : [ebp+0x18], eax
        public_6b513c3 : nop
        test bl, 0x40
        jne public_6b51405
        fld dword ptr ds : [esi+8]
        fmul qword ptr ds : [public_6b6e390]
        call public_6b6a3f8
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6b513ed
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6b513ed : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6b515c6
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [ecx], al
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        public_6b51405 : nop
        mov edx, dword ptr ds : [esi]
        push edx
        call dword ptr ds : [public_6b6b014]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        add ecx, 2
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], ecx
        mov edx, 0x16
        jbe public_6b51429
        mov dword ptr ss : [ebp+0x1C], edx
        public_6b51429 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6b51563
        mov ecx, dword ptr ss : [ebp+0x18]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        test bl, 8
        mov dword ptr ss : [ebp+0x18], ecx
        mov eax, dword ptr ss : [ebp+0x10]
        je public_6b51472
        mov ecx, dword ptr ss : [ebp+0x14]
        add eax, 2
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6b51458
        mov dword ptr ss : [ebp+0x1C], edx
        public_6b51458 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b51563
        mov eax, dword ptr ss : [ebp+0x18]
        mov cx, word ptr ds : [esi+0xC]
        mov word ptr ds : [eax], cx
        add eax, 2
        jmp public_6b51492
        public_6b51472 : nop
        mov cl, byte ptr ds : [esi+0xC]
        inc eax
        cmp eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6b51481
        mov dword ptr ss : [ebp+0x1C], edx
        public_6b51481 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b51563
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        public_6b51492 : nop
        test bl, 0x20
        mov dword ptr ss : [ebp+0x18], eax
        jne public_6b5154e
        test bl, 0x10
        je public_6b5151f
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        mov cl, byte ptr ds : [esi+0x10]
        inc edi
        mov eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6b514bd
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6b514bd : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b515c6
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        movzx edx, word ptr ds : [esi+0x10]
        mov edi, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edi, edx
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6b514ed
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6b514ed : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b515c6
        movzx eax, word ptr ds : [esi+0x10]
        mov edx, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ds : [esi+0x14]
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        add edx, eax
        mov dword ptr ss : [ebp+0x18], edx
        jmp public_6b5154e
        public_6b5151f : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51536
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6b51536 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b515c6
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ss : [esp+0x12]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        public_6b5154e : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], edi
        jne public_6b512d0
        jmp public_6b515a5
        public_6b51563 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b5156f : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51584
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b51584 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b51597
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b51597 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov word ptr ds : [eax], 0
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        public_6b515a5 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        mov cl, byte ptr ss : [ebp+0x7C]
        inc esi
        mov eax, esi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6b515bf
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6b515bf : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b515d5
        public_6b515c6 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b515d5 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        mov ebx, dword ptr ss : [ebp+0x78]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6b5164c
        public_6b515e7 : nop
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        mov cl, byte ptr ds : [esi+8]
        inc edi
        mov eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6b51601
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6b51601 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b515c6
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        fld dword ptr ds : [esi+0xC]
        fmul qword ptr ds : [public_6b6e390]
        call public_6b6a3f8
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6b51636
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6b51636 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6b515c6
        mov ecx, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [ecx], al
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6b515e7
        public_6b5164c : nop
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        je public_6b5173a
        mov esi, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, 4
        add esi, edx
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], esi
        mov esi, 0x16
        jbe public_6b51678
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b51678 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b5168b
        public_6b5167f : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b5168b : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x88]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [ebp+0x84]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6b5173a
        mov edi, 2
        public_6b516b1 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+0x14]
        add ecx, edi
        cmp ecx, ebx
        mov dword ptr ss : [ebp+0x10], ecx
        jbe public_6b516c3
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b516c3 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6b5167f
        mov ecx, dword ptr ss : [ebp+0x18]
        mov bx, word ptr ds : [eax+8]
        mov word ptr ds : [ecx], bx
        add ecx, 2
        mov dword ptr ss : [ebp+0x18], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+0x14]
        add ecx, edx
        cmp ecx, ebx
        mov dword ptr ss : [ebp+0x10], ecx
        jbe public_6b516ec
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b516ec : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6b5167f
        mov ecx, dword ptr ss : [ebp+0x18]
        mov ebx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [ecx], ebx
        add ecx, 4
        mov dword ptr ss : [ebp+0x18], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+0x14]
        add ecx, edx
        cmp ecx, ebx
        mov dword ptr ss : [ebp+0x10], ecx
        jbe public_6b51713
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b51713 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6b5167f
        fld dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [ebp+0x18]
        fstp dword ptr ds : [ecx]
        add ecx, 4
        mov dword ptr ss : [ebp+0x18], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [ebp+0x84]
        jne public_6b516b1
        public_6b5173a : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x6b50e50)
    }
}

#undef public_6b50e77
#undef public_6b50e8a
#undef public_6b50eba
#undef public_6b50ecd
#undef public_6b50eed
#undef public_6b50f00
#undef public_6b50f22
#undef public_6b50f35
#undef public_6b50f57
#undef public_6b50f6a
#undef public_6b50f8c
#undef public_6b50f9f
#undef public_6b50fc3
#undef public_6b50fd6
#undef public_6b50ff9
#undef public_6b5100c
#undef public_6b51048
#undef public_6b5105e
#undef public_6b51085
#undef public_6b5109b
#undef public_6b5111f
#undef public_6b51132
#undef public_6b5114e
#undef public_6b51161
#undef public_6b51181
#undef public_6b51194
#undef public_6b511b4
#undef public_6b511c7
#undef public_6b5120e
#undef public_6b51221
#undef public_6b51249
#undef public_6b5125c
#undef public_6b5126a
#undef public_6b51297
#undef public_6b512aa
#undef public_6b512d0
#undef public_6b512e2
#undef public_6b512ec
#undef public_6b512fb
#undef public_6b51304
#undef public_6b51310
#undef public_6b51324
#undef public_6b5132d
#undef public_6b51340
#undef public_6b51358
#undef public_6b51388
#undef public_6b513a0
#undef public_6b513af
#undef public_6b513c0
#undef public_6b513c3
#undef public_6b513ed
#undef public_6b51405
#undef public_6b51429
#undef public_6b51458
#undef public_6b51472
#undef public_6b51481
#undef public_6b51492
#undef public_6b514bd
#undef public_6b514ed
#undef public_6b5151f
#undef public_6b51536
#undef public_6b5154e
#undef public_6b51563
#undef public_6b5156f
#undef public_6b51584
#undef public_6b51597
#undef public_6b515a5
#undef public_6b515bf
#undef public_6b515c6
#undef public_6b515d5
#undef public_6b515e7
#undef public_6b51601
#undef public_6b51636
#undef public_6b5164c
#undef public_6b51678
#undef public_6b5167f
#undef public_6b5168b
#undef public_6b516b1
#undef public_6b516c3
#undef public_6b516ec
#undef public_6b51713
#undef public_6b5173a
