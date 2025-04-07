#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1620);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9239a _public_6d9239a
#define public_6d923b0 _public_6d923b0
#define public_6d923d8 _public_6d923d8
#define public_6d9240a _public_6d9240a
#define public_6d92423 _public_6d92423
#define public_6d9242a _public_6d9242a
#define public_6d92459 _public_6d92459
#define public_6d9249f _public_6d9249f
#define public_6d924df _public_6d924df
#define public_6d924e6 _public_6d924e6
#define public_6d92504 _public_6d92504
#define public_6d92541 _public_6d92541
#define public_6d92563 _public_6d92563
#define public_6d92573 _public_6d92573
#define public_6d9258e _public_6d9258e
#define public_6d925a2 _public_6d925a2
#define public_6d925c9 _public_6d925c9
#define public_6d925f9 _public_6d925f9
#define public_6d92625 _public_6d92625
#define public_6d9263d _public_6d9263d
#define public_6d9265b _public_6d9265b
#define public_6d92668 _public_6d92668
#define public_6d9267f _public_6d9267f
#define public_6d92694 _public_6d92694
#define public_6d926bb _public_6d926bb
#define public_6d926f7 _public_6d926f7
#define public_6d92703 _public_6d92703

PROC_DECLARE(0x6d92350, internal_6d92350, public_6d92350);
extern "C" NAKED register_t __cdecl internal_6d92350()
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
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d9239a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 8
        ret 0xC
        public_6d9239a : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x17
        jbe public_6d923b0
        mov dword ptr ds : [ebx+0xC], edi
        public_6d923b0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92703
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
        jbe public_6d923d8
        mov dword ptr ds : [ebx+0xC], edi
        public_6d923d8 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92703
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ss : [ebp+0x54]
        add eax, 4
        mov dword ptr ds : [esi], eax
        test byte ptr ss : [ebp+0x34], dl
        mov dword ptr ss : [ebp+0x58], ecx
        je public_6d92423
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d9240a
        mov dword ptr ds : [ebx+0xC], edi
        public_6d9240a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92703
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x5C], ecx
        mov dword ptr ds : [esi], eax
        jmp public_6d9242a
        public_6d92423 : nop
        mov dword ptr ss : [ebp+0x5C], 0xFFFFFFFF
        public_6d9242a : nop
        call dword ptr ds : [public_6db305c]
        test al, al
        je public_6d92504
        mov dl, byte ptr ss : [ebp+0x54]
        test byte ptr ss : [ebp+0x3C], dl
        je public_6d924df
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d92459
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6d92459 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92703
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        movsx eax, cl
        mov dword ptr ss : [ebp+0x60], eax
        lea eax, ds:[eax*4+4]
        push eax
        call public_6db1f8a
        mov ecx, dword ptr ss : [ebp+0x60]
        mov dword ptr ss : [ebp+0x64], eax
        mov edx, dword ptr ds : [ebx]
        shl ecx, 1
        add edx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d9249f
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6d9249f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92703
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
        jmp public_6d924e6
        public_6d924df : nop
        mov dword ptr ss : [ebp+0x60], 0
        public_6d924e6 : nop
        mov cl, byte ptr ss : [ebp+0x54]
        test byte ptr ss : [ebp+0x38], cl
        je public_6d92504
        lea edx, ss:[ebp+0x20]
        push edx
        mov ecx, ebp
        call public_6da1620
        lea eax, ss:[ebp+0x28]
        push eax
        mov ecx, ebp
        call public_6da1620
        public_6d92504 : nop
        call dword ptr ds : [public_6db305c]
        test al, al
        je public_6d92668
        mov eax, dword ptr ss : [ebp+0x44]
        movzx ecx, byte ptr ss : [ebp+0x54]
        mov edx, dword ptr ss : [ebp+0x40]
        or edx, eax
        test ecx, edx
        je public_6d92694
        mov edx, dword ptr ds : [ebx]
        test ecx, eax
        mov ecx, dword ptr ds : [ebx+4]
        je public_6d92563
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d92541
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6d92541 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92703
        mov eax, dword ptr ss : [ebp+0x18]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        xor eax, eax
        mov ax, cx
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6d9258e
        public_6d92563 : nop
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d92573
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6d92573 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92703
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        movzx ecx, cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d9258e : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        jbe public_6d92694
        public_6d925a2 : nop
        push 8
        call public_6db1f8a
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov ecx, eax
        mov eax, esi
        add esp, 4
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ebx], esi
        jbe public_6d925c9
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6d925c9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9265b
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+4], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6d925f9
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6d925f9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9265b
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ss : [ebp+0x4C]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6db1f8a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d92625
        mov edi, eax
        public_6d92625 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d9263d
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        public_6d9263d : nop
        mov esi, dword ptr ss : [ebp+0x50]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        inc esi
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x50], esi
        mov dword ptr ss : [esp+0x10], eax
        jb public_6d925a2
        jmp public_6d92694
        public_6d9265b : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6d92668 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d9267f
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6d9267f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92703
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x30], ecx
        mov dword ptr ss : [ebp+0x18], eax
        public_6d92694 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d926bb
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 8
        ret 0xC
        public_6d926bb : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6da16b0
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
        jbe public_6d926f7
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6d926f7 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6d92703 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6d92350)
    }
}

#undef public_6d9239a
#undef public_6d923b0
#undef public_6d923d8
#undef public_6d9240a
#undef public_6d92423
#undef public_6d9242a
#undef public_6d92459
#undef public_6d9249f
#undef public_6d924df
#undef public_6d924e6
#undef public_6d92504
#undef public_6d92541
#undef public_6d92563
#undef public_6d92573
#undef public_6d9258e
#undef public_6d925a2
#undef public_6d925c9
#undef public_6d925f9
#undef public_6d92625
#undef public_6d9263d
#undef public_6d9265b
#undef public_6d92668
#undef public_6d9267f
#undef public_6d92694
#undef public_6d926bb
#undef public_6d926f7
#undef public_6d92703
