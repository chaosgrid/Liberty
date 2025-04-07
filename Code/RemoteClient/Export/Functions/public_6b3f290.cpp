#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4eb30);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3f2da _public_6b3f2da
#define public_6b3f2f0 _public_6b3f2f0
#define public_6b3f318 _public_6b3f318
#define public_6b3f34a _public_6b3f34a
#define public_6b3f363 _public_6b3f363
#define public_6b3f36a _public_6b3f36a
#define public_6b3f39a _public_6b3f39a
#define public_6b3f3bf _public_6b3f3bf
#define public_6b3f3f5 _public_6b3f3f5
#define public_6b3f435 _public_6b3f435
#define public_6b3f43c _public_6b3f43c
#define public_6b3f461 _public_6b3f461
#define public_6b3f466 _public_6b3f466
#define public_6b3f49f _public_6b3f49f
#define public_6b3f4c1 _public_6b3f4c1
#define public_6b3f4cd _public_6b3f4cd
#define public_6b3f4e8 _public_6b3f4e8
#define public_6b3f500 _public_6b3f500
#define public_6b3f523 _public_6b3f523
#define public_6b3f54f _public_6b3f54f
#define public_6b3f57b _public_6b3f57b
#define public_6b3f593 _public_6b3f593
#define public_6b3f5b6 _public_6b3f5b6
#define public_6b3f5c3 _public_6b3f5c3
#define public_6b3f5d6 _public_6b3f5d6
#define public_6b3f5eb _public_6b3f5eb
#define public_6b3f60f _public_6b3f60f
#define public_6b3f64b _public_6b3f64b
#define public_6b3f657 _public_6b3f657

PROC_DECLARE(0x6b3f290, internal_6b3f290, public_6b3f290);
extern "C" NAKED register_t __cdecl internal_6b3f290()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea ebx, ss:[ebp+0x10]
        push edi
        push ebx
        push eax
        mov dword ptr ds : [ebx+8], ecx
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b3f2da
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 8
        ret 0xC
        public_6b3f2da : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x17
        jbe public_6b3f2f0
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3f2f0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3f657
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ss : [ebp+0x54], dl
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b3f318
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3f318 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3f657
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ss : [ebp+0x54]
        add eax, 4
        mov dword ptr ds : [esi], eax
        test byte ptr ss : [ebp+0x34], dl
        mov dword ptr ss : [ebp+0x58], ecx
        je public_6b3f363
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b3f34a
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3f34a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3f657
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x5C], ecx
        mov dword ptr ds : [esi], eax
        jmp public_6b3f36a
        public_6b3f363 : nop
        mov dword ptr ss : [ebp+0x5C], 0xFFFFFFFF
        public_6b3f36a : nop
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        je public_6b3f461
        mov dl, byte ptr ss : [ebp+0x54]
        test byte ptr ss : [ebp+0x3C], dl
        je public_6b3f435
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x17
        jbe public_6b3f39a
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3f39a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3f657
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        movsx eax, cl
        mov dword ptr ss : [ebp+0x60], eax
        mov ecx, dword ptr ds : [ebx]
        lea edx, ds:[ecx+eax*2]
        cmp edx, dword ptr ds : [ebx+4]
        jbe public_6b3f3bf
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3f3bf : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3f657
        mov eax, dword ptr ss : [ebp+0x60]
        lea ecx, ds:[eax*4+4]
        push ecx
        call public_6b6a134
        mov edx, dword ptr ss : [ebp+0x60]
        mov dword ptr ss : [ebp+0x64], eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        shl edx, 1
        add eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], eax
        jbe public_6b3f3f5
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3f3f5 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3f657
        mov eax, dword ptr ss : [ebp+0x60]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp+0x64]
        shl eax, 1
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x1C], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [ebp+0x60]
        add ecx, eax
        mov eax, dword ptr ss : [ebp+0x64]
        mov dword ptr ss : [ebp+0x18], ecx
        mov word ptr ds : [eax+edx*2], 0
        jmp public_6b3f43c
        public_6b3f435 : nop
        mov dword ptr ss : [ebp+0x60], 0
        public_6b3f43c : nop
        mov cl, byte ptr ss : [ebp+0x54]
        test byte ptr ss : [ebp+0x38], cl
        mov esi, 0x17
        je public_6b3f466
        lea edx, ss:[ebp+0x20]
        push edx
        mov ecx, ebp
        call public_6b4eb30
        lea eax, ss:[ebp+0x28]
        push eax
        mov ecx, ebp
        call public_6b4eb30
        jmp public_6b3f466
        public_6b3f461 : nop
        mov esi, 0x17
        public_6b3f466 : nop
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        je public_6b3f5c3
        mov eax, dword ptr ss : [ebp+0x44]
        movzx ecx, byte ptr ss : [ebp+0x54]
        mov edx, dword ptr ss : [ebp+0x40]
        or edx, eax
        test ecx, edx
        je public_6b3f5eb
        mov edx, dword ptr ds : [ebx]
        test ecx, eax
        mov ecx, dword ptr ds : [ebx+4]
        je public_6b3f4c1
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b3f49f
        mov dword ptr ds : [ebx+0xC], esi
        public_6b3f49f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3f657
        mov eax, dword ptr ss : [ebp+0x18]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        xor eax, eax
        mov ax, cx
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6b3f4e8
        public_6b3f4c1 : nop
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b3f4cd
        mov dword ptr ds : [ebx+0xC], esi
        public_6b3f4cd : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3f657
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        movzx ecx, cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        public_6b3f4e8 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        jbe public_6b3f5eb
        lea esp, ss:[esp]
        public_6b3f500 : nop
        push 8
        call public_6b6a134
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov ecx, eax
        mov eax, edi
        add esp, 4
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6b3f523
        mov dword ptr ds : [ebx+0xC], esi
        public_6b3f523 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3f5b6
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+4], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6b3f54f
        mov dword ptr ds : [ebx+0xC], esi
        public_6b3f54f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3f5b6
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ss : [ebp+0x4C]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6b6a134
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6b3f57b
        mov edi, eax
        public_6b3f57b : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6b3f593
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        public_6b3f593 : nop
        mov esi, dword ptr ss : [ebp+0x50]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        inc esi
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x50], esi
        mov dword ptr ss : [esp+0x10], eax
        mov esi, 0x17
        jb public_6b3f500
        jmp public_6b3f5eb
        public_6b3f5b6 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6b3f5c3 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b3f5d6
        mov dword ptr ds : [ebx+0xC], esi
        public_6b3f5d6 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3f657
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x30], ecx
        mov dword ptr ss : [ebp+0x18], eax
        public_6b3f5eb : nop
        mov edx, dword ptr ss : [esp+0x20]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b3f60f
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6b3f60f : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx+4], esi
        mov eax, dword ptr ds : [ebx]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add edx, 2
        cmp ebx, edx
        jbe public_6b3f64b
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6b3f64b : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b3f657 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6b3f290)
    }
}

#undef public_6b3f2da
#undef public_6b3f2f0
#undef public_6b3f318
#undef public_6b3f34a
#undef public_6b3f363
#undef public_6b3f36a
#undef public_6b3f39a
#undef public_6b3f3bf
#undef public_6b3f3f5
#undef public_6b3f435
#undef public_6b3f43c
#undef public_6b3f461
#undef public_6b3f466
#undef public_6b3f49f
#undef public_6b3f4c1
#undef public_6b3f4cd
#undef public_6b3f4e8
#undef public_6b3f500
#undef public_6b3f523
#undef public_6b3f54f
#undef public_6b3f57b
#undef public_6b3f593
#undef public_6b3f5b6
#undef public_6b3f5c3
#undef public_6b3f5d6
#undef public_6b3f5eb
#undef public_6b3f60f
#undef public_6b3f64b
#undef public_6b3f657
