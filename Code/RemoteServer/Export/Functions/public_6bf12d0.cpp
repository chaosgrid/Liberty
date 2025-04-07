#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec240);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c08f40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bf1315 _public_6bf1315
#define public_6bf133e _public_6bf133e
#define public_6bf1360 _public_6bf1360
#define public_6bf136b _public_6bf136b
#define public_6bf1384 _public_6bf1384
#define public_6bf13ba _public_6bf13ba
#define public_6bf13f8 _public_6bf13f8
#define public_6bf1427 _public_6bf1427
#define public_6bf145d _public_6bf145d
#define public_6bf148e _public_6bf148e
#define public_6bf14cf _public_6bf14cf
#define public_6bf151d _public_6bf151d
#define public_6bf1567 _public_6bf1567
#define public_6bf156c _public_6bf156c
#define public_6bf158b _public_6bf158b
#define public_6bf15ba _public_6bf15ba
#define public_6bf15e5 _public_6bf15e5
#define public_6bf1607 _public_6bf1607
#define public_6bf1636 _public_6bf1636
#define public_6bf1677 _public_6bf1677
#define public_6bf1683 _public_6bf1683

PROC_DECLARE(0x6bf12d0, internal_6bf12d0, public_6bf12d0);
extern "C" NAKED register_t __cdecl internal_6bf12d0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebx, ecx
        lea ebp, ds:[ebx+0x10]
        push ebp
        push edi
        lea esi, ds:[ebx+0x18]
        push esi
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6bf1315
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6bf1315 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push edi
        push edx
        mov ecx, ebx
        call public_6c08f40
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf133e
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6bf133e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bf1683
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        mov al, 1
        test al, cl
        mov byte ptr ss : [esp+0x18], cl
        je public_6bf1360
        mov byte ptr ds : [ebx+0x9C], al
        public_6bf1360 : nop
        test cl, 2
        je public_6bf136b
        mov byte ptr ds : [ebx+0xE8], al
        public_6bf136b : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf1384
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6bf1384 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bf1683
        mov edi, dword ptr ds : [esi]
        push edi
        lea ecx, ds:[ebx+0xA0]
        call public_6bda4c0
        add edi, 0xC
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        mov edi, 0x17
        jbe public_6bf13ba
        mov dword ptr ss : [ebp+0xC], edi
        public_6bf13ba : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bf1683
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        movsx eax, cl
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [public_6c0df48]
        fstp dword ptr ds : [ebx+0xB8]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf13f8
        mov dword ptr ss : [ebp+0xC], edi
        public_6bf13f8 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bf1683
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [esi], eax
        mov word ptr ds : [ebx+0xC0], cx
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf1427
        mov dword ptr ss : [ebp+0xC], edi
        public_6bf1427 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bf1683
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        test byte ptr ss : [esp+0x18], 4
        mov byte ptr ds : [ebx+0xC2], dl
        je public_6bf1607
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf145d
        mov dword ptr ss : [ebp+0xC], edi
        public_6bf145d : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bf1683
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        xor eax, eax
        mov al, cl
        mov dword ptr ds : [ebx+0xBC], eax
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf148e
        mov dword ptr ss : [ebp+0xC], edi
        public_6bf148e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bf1683
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov word ptr ds : [ebx+0xC4], cx
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_6c0b080]
        test al, al
        jne public_6bf1567
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf14cf
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6bf14cf : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bf1683
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        movsx eax, cl
        lea edx, ds:[eax+eax+2]
        push edx
        mov dword ptr ds : [ebx+0xD8], eax
        call public_6c09d26
        mov dword ptr ds : [ebx+0xDC], eax
        mov eax, dword ptr ds : [ebx+0xD8]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        shl eax, 1
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf151d
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6bf151d : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bf1683
        mov eax, dword ptr ds : [ebx+0xD8]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ds : [ebx+0xDC]
        shl eax, 1
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ebx+0xD8]
        add ecx, eax
        mov eax, dword ptr ds : [ebx+0xDC]
        mov dword ptr ds : [ebx+0x18], ecx
        mov word ptr ds : [eax+edx*2], 0
        public_6bf1567 : nop
        mov edi, 0x17
        public_6bf156c : nop
        call dword ptr ds : [public_6c0b080]
        test al, al
        jne public_6bf15e5
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf158b
        mov dword ptr ss : [ebp+0xC], edi
        public_6bf158b : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bf1683
        mov eax, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov dword ptr ds : [ebx+0xE0], ecx
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf15ba
        mov dword ptr ss : [ebp+0xC], edi
        public_6bf15ba : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bf1683
        mov eax, dword ptr ds : [ebx+0x18]
        mov cl, byte ptr ds : [eax]
        movsx edx, cl
        mov dword ptr ss : [esp+0x18], edx
        inc eax
        mov dword ptr ds : [ebx+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_6c0df48]
        fstp dword ptr ds : [ebx+0xE4]
        public_6bf15e5 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push ebp
        push eax
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6bf1636
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6bf1607 : nop
        call dword ptr ds : [public_6c0b080]
        test al, al
        jne public_6bf156c
        lea ecx, ds:[ebx+0xC8]
        push ecx
        mov ecx, ebx
        call public_6bec240
        lea edx, ds:[ebx+0xD0]
        push edx
        mov ecx, ebx
        call public_6bec240
        jmp public_6bf156c
        public_6bf1636 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        call public_6bec3b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ss : [ebp]
        add edx, 2
        add ebx, edx
        mov dword ptr ds : [ecx+0x1C], ebx
        mov ebp, dword ptr ss : [ebp]
        add eax, 2
        cmp ebp, eax
        jbe public_6bf1677
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6bf1677 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bf1683 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6bf12d0)
    }
}

#undef public_6bf1315
#undef public_6bf133e
#undef public_6bf1360
#undef public_6bf136b
#undef public_6bf1384
#undef public_6bf13ba
#undef public_6bf13f8
#undef public_6bf1427
#undef public_6bf145d
#undef public_6bf148e
#undef public_6bf14cf
#undef public_6bf151d
#undef public_6bf1567
#undef public_6bf156c
#undef public_6bf158b
#undef public_6bf15ba
#undef public_6bf15e5
#undef public_6bf1607
#undef public_6bf1636
#undef public_6bf1677
#undef public_6bf1683
