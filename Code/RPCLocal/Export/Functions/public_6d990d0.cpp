#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8cb70);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9911a _public_6d9911a
#define public_6d99132 _public_6d99132
#define public_6d99164 _public_6d99164
#define public_6d9917b _public_6d9917b
#define public_6d99194 _public_6d99194
#define public_6d991ab _public_6d991ab
#define public_6d991c4 _public_6d991c4
#define public_6d991db _public_6d991db
#define public_6d991f4 _public_6d991f4
#define public_6d9921e _public_6d9921e
#define public_6d99235 _public_6d99235
#define public_6d99252 _public_6d99252
#define public_6d99297 _public_6d99297
#define public_6d99300 _public_6d99300
#define public_6d9930f _public_6d9930f
#define public_6d9931b _public_6d9931b
#define public_6d9932e _public_6d9932e
#define public_6d99349 _public_6d99349
#define public_6d99362 _public_6d99362
#define public_6d9937d _public_6d9937d
#define public_6d99398 _public_6d99398
#define public_6d993b4 _public_6d993b4
#define public_6d993cd _public_6d993cd
#define public_6d993ea _public_6d993ea
#define public_6d99413 _public_6d99413
#define public_6d9942c _public_6d9942c
#define public_6d9946f _public_6d9946f
#define public_6d99474 _public_6d99474
#define public_6d9947c _public_6d9947c
#define public_6d99481 _public_6d99481
#define public_6d9948d _public_6d9948d
#define public_6d994a6 _public_6d994a6
#define public_6d994ba _public_6d994ba
#define public_6d994d4 _public_6d994d4
#define public_6d994e8 _public_6d994e8
#define public_6d9951a _public_6d9951a
#define public_6d99531 _public_6d99531
#define public_6d99543 _public_6d99543
#define public_6d99556 _public_6d99556
#define public_6d99570 _public_6d99570
#define public_6d99584 _public_6d99584
#define public_6d99591 _public_6d99591
#define public_6d995a0 _public_6d995a0
#define public_6d995b0 _public_6d995b0
#define public_6d995d0 _public_6d995d0
#define public_6d995e0 _public_6d995e0
#define public_6d995ef _public_6d995ef
#define public_6d995f8 _public_6d995f8
#define public_6d99605 _public_6d99605
#define public_6d99609 _public_6d99609
#define public_6d99623 _public_6d99623
#define public_6d9964a _public_6d9964a
#define public_6d99657 _public_6d99657
#define public_6d99693 _public_6d99693
#define public_6d9969f _public_6d9969f

PROC_DECLARE(0x6d990d0, internal_6d990d0, public_6d990d0);
extern "C" NAKED register_t __cdecl internal_6d990d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        lea esi, ss:[ebp+0x10]
        push edi
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        lea ebx, ss:[ebp+0x18]
        push ebx
        mov ecx, ebp
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d9911a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d9911a : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov edi, 0x17
        jbe public_6d99132
        mov dword ptr ds : [esi+0xC], edi
        public_6d99132 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9969f
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov al, dl
        test al, 8
        mov word ptr ss : [ebp+0x20], dx
        je public_6d9917b
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d99164
        mov dword ptr ds : [esi+0xC], edi
        public_6d99164 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9969f
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x28], ecx
        mov dword ptr ds : [ebx], eax
        public_6d9917b : nop
        test byte ptr ss : [ebp+0x20], 4
        je public_6d991ab
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d99194
        mov dword ptr ds : [esi+0xC], edi
        public_6d99194 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9969f
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x24], edx
        mov dword ptr ds : [ebx], eax
        public_6d991ab : nop
        test byte ptr ss : [ebp+0x20], 1
        je public_6d991db
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d991c4
        mov dword ptr ds : [esi+0xC], edi
        public_6d991c4 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9969f
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x34], ecx
        mov dword ptr ds : [ebx], eax
        public_6d991db : nop
        test byte ptr ss : [ebp+0x20], 2
        je public_6d99235
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d991f4
        mov dword ptr ds : [esi+0xC], edi
        public_6d991f4 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9969f
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x38], edx
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d9921e
        mov dword ptr ds : [esi+0xC], edi
        public_6d9921e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9969f
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x3C], ecx
        mov dword ptr ds : [ebx], eax
        public_6d99235 : nop
        test byte ptr ss : [ebp+0x20], 0x10
        je public_6d9932e
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d99252
        mov dword ptr ds : [esi+0xC], edi
        public_6d99252 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9969f
        mov eax, dword ptr ds : [ebx]
        mov cx, word ptr ds : [eax]
        xor edi, edi
        mov di, cx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        lea edx, ds:[edi+edi+2]
        push edx
        call dword ptr ds : [public_6db31c4]
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[edi+edi]
        mov edi, dword ptr ds : [esi]
        add edi, edx
        mov dword ptr ss : [esp+0x24], eax
        mov eax, edi
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], edi
        jbe public_6d99297
        mov dword ptr ds : [esi+0xC], 0x17
        public_6d99297 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9969f
        mov esi, dword ptr ds : [ebx]
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, edx
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x20]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, edx
        mov dword ptr ds : [ebx], ecx
        push eax
        mov word ptr ds : [edx+eax], 0
        lea edi, ss:[ebp+0x40]
        call dword ptr ds : [public_6db31ec]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        mov ecx, edi
        call dword ptr ds : [public_6db316c]
        test al, al
        je public_6d9931b
        test esi, esi
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi+4]
        jbe public_6d9930f
        mov edx, esi
        lea esp, ss:[esp]
        public_6d99300 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6d99300
        public_6d9930f : nop
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+8], esi
        mov word ptr ds : [edx+esi*2], 0
        public_6d9931b : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call dword ptr ds : [public_6db31c0]
        add esp, 4
        mov edi, 0x17
        public_6d9932e : nop
        test byte ptr ss : [ebp+0x20], 0x20
        je public_6d99362
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6d99349
        mov dword ptr ss : [ebp+0x1C], edi
        public_6d99349 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9969f
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x54], ecx
        mov dword ptr ss : [ebp+0x18], eax
        public_6d99362 : nop
        test byte ptr ss : [ebp+0x20], 0x40
        je public_6d99398
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6d9937d
        mov dword ptr ss : [ebp+0x1C], edi
        public_6d9937d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9969f
        mov eax, dword ptr ss : [ebp+0x18]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov word ptr ss : [ebp+0x2C], dx
        mov dword ptr ss : [ebp+0x18], eax
        public_6d99398 : nop
        mov al, byte ptr ss : [ebp+0x20]
        test al, al
        jns public_6d993cd
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6d993b4
        mov dword ptr ss : [ebp+0x1C], edi
        public_6d993b4 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9969f
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x30], ecx
        mov dword ptr ss : [ebp+0x18], eax
        public_6d993cd : nop
        test byte ptr ss : [ebp+0x21], 1
        je public_6d99623
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6d993ea
        mov dword ptr ss : [ebp+0x1C], edi
        public_6d993ea : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9969f
        mov eax, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov al, dl
        test al, al
        mov byte ptr ss : [ebp+0x68], dl
        mov dword ptr ss : [esp+0x14], 0
        jbe public_6d99623
        public_6d99413 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6d9942c
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6d9942c : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9964a
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ss : [ebp+0x60]
        mov edx, dword ptr ss : [ebp+0x64]
        sub edx, esi
        sar edx, 2
        cmp edx, 1
        mov dword ptr ss : [esp+0x20], ecx
        mov edi, esi
        jae public_6d99531
        mov ecx, dword ptr ss : [ebp+0x5C]
        test ecx, ecx
        je public_6d9946f
        mov eax, esi
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        ja public_6d99474
        public_6d9946f : nop
        mov eax, 1
        public_6d99474 : nop
        test ecx, ecx
        jne public_6d9947c
        xor esi, esi
        jmp public_6d99481
        public_6d9947c : nop
        sub esi, ecx
        sar esi, 2
        public_6d99481 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_6d9948d
        xor eax, eax
        public_6d9948d : nop
        shl eax, 2
        push eax
        call public_6db1f8a
        mov ebx, dword ptr ss : [ebp+0x5C]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov esi, eax
        je public_6d994ba
        public_6d994a6 : nop
        push ebx
        push esi
        call public_6d8cb70
        add ebx, 4
        add esp, 8
        add esi, 4
        cmp ebx, edi
        jne public_6d994a6
        public_6d994ba : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        push esi
        call public_6d8cb70
        mov ebx, dword ptr ss : [ebp+0x60]
        add esp, 8
        cmp edi, ebx
        je public_6d994e8
        sub esi, edi
        add esi, 4
        public_6d994d4 : nop
        lea edx, ds:[esi+edi]
        push edi
        push edx
        call public_6d8cb70
        add edi, 4
        add esp, 8
        cmp edi, ebx
        jne public_6d994d4
        public_6d994e8 : nop
        mov eax, dword ptr ss : [ebp+0x5C]
        push eax
        call public_6db1dc2
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ds:[edx+ecx*4]
        mov ecx, dword ptr ss : [ebp+0x5C]
        add esp, 4
        test ecx, ecx
        mov dword ptr ss : [ebp+0x64], eax
        jne public_6d9951a
        xor eax, eax
        lea ecx, ds:[edx+eax*4+4]
        mov dword ptr ss : [ebp+0x60], ecx
        mov dword ptr ss : [ebp+0x5C], edx
        jmp public_6d99609
        public_6d9951a : nop
        mov eax, dword ptr ss : [ebp+0x60]
        sub eax, ecx
        sar eax, 2
        lea ecx, ds:[edx+eax*4+4]
        mov dword ptr ss : [ebp+0x60], ecx
        mov dword ptr ss : [ebp+0x5C], edx
        jmp public_6d99609
        public_6d99531 : nop
        mov edx, esi
        sub edx, edi
        sar edx, 2
        cmp edx, 1
        jae public_6d995a0
        cmp edi, esi
        mov eax, edi
        je public_6d99556
        public_6d99543 : nop
        lea ebx, ds:[eax+4]
        push eax
        push ebx
        call public_6d8cb70
        mov eax, ebx
        add esp, 8
        cmp eax, esi
        jne public_6d99543
        public_6d99556 : nop
        mov ecx, dword ptr ss : [ebp+0x60]
        mov edx, ecx
        sub edx, edi
        sar edx, 2
        mov eax, 1
        sub eax, edx
        mov esi, ecx
        je public_6d99584
        mov ebx, eax
        lea ecx, ds:[ecx]
        public_6d99570 : nop
        lea eax, ss:[esp+0x20]
        push eax
        push esi
        call public_6d8cb70
        add esp, 8
        add esi, 4
        dec ebx
        jne public_6d99570
        public_6d99584 : nop
        mov ecx, dword ptr ss : [ebp+0x60]
        cmp edi, ecx
        mov eax, edi
        je public_6d99605
        public_6d99591 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6d99591
        jmp public_6d99605
        public_6d995a0 : nop
        lea ebx, ds:[esi-4]
        cmp ebx, esi
        mov dword ptr ss : [esp+0x10], esi
        je public_6d995d0
        nop 
        lea esp, ss:[esp]
        public_6d995b0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push eax
        call public_6d8cb70
        mov edx, dword ptr ss : [esp+0x18]
        add edx, 4
        add ebx, 4
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [esp+0x10], edx
        jne public_6d995b0
        public_6d995d0 : nop
        mov ecx, dword ptr ss : [ebp+0x60]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6d995ef
        lea ebx, ds:[ebx]
        public_6d995e0 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6d995e0
        public_6d995ef : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6d99605
        public_6d995f8 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6d995f8
        public_6d99605 : nop
        add dword ptr ss : [ebp+0x60], 4
        public_6d99609 : nop
        mov eax, dword ptr ss : [esp+0x14]
        movzx ecx, byte ptr ss : [ebp+0x68]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jb public_6d99413
        mov edi, 0x17
        public_6d99623 : nop
        mov edx, dword ptr ss : [esp+0x24]
        lea esi, ss:[ebp+0x10]
        push esi
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d99657
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d9964a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d99657 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ds : [esi]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add edx, 2
        cmp esi, edx
        jbe public_6d99693
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6d99693 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6d9969f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6d990d0)
    }
}

#undef public_6d9911a
#undef public_6d99132
#undef public_6d99164
#undef public_6d9917b
#undef public_6d99194
#undef public_6d991ab
#undef public_6d991c4
#undef public_6d991db
#undef public_6d991f4
#undef public_6d9921e
#undef public_6d99235
#undef public_6d99252
#undef public_6d99297
#undef public_6d99300
#undef public_6d9930f
#undef public_6d9931b
#undef public_6d9932e
#undef public_6d99349
#undef public_6d99362
#undef public_6d9937d
#undef public_6d99398
#undef public_6d993b4
#undef public_6d993cd
#undef public_6d993ea
#undef public_6d99413
#undef public_6d9942c
#undef public_6d9946f
#undef public_6d99474
#undef public_6d9947c
#undef public_6d99481
#undef public_6d9948d
#undef public_6d994a6
#undef public_6d994ba
#undef public_6d994d4
#undef public_6d994e8
#undef public_6d9951a
#undef public_6d99531
#undef public_6d99543
#undef public_6d99556
#undef public_6d99570
#undef public_6d99584
#undef public_6d99591
#undef public_6d995a0
#undef public_6d995b0
#undef public_6d995d0
#undef public_6d995e0
#undef public_6d995ef
#undef public_6d995f8
#undef public_6d99605
#undef public_6d99609
#undef public_6d99623
#undef public_6d9964a
#undef public_6d99657
#undef public_6d99693
#undef public_6d9969f
