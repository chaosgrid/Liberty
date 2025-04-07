#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bdd624 _public_6bdd624
#define public_6bdd638 _public_6bdd638
#define public_6bdd654 _public_6bdd654
#define public_6bdd664 _public_6bdd664
#define public_6bdd66f _public_6bdd66f
#define public_6bdd68e _public_6bdd68e
#define public_6bdd699 _public_6bdd699
#define public_6bdd6b1 _public_6bdd6b1
#define public_6bdd6c1 _public_6bdd6c1
#define public_6bdd6e0 _public_6bdd6e0
#define public_6bdd6f0 _public_6bdd6f0
#define public_6bdd719 _public_6bdd719
#define public_6bdd729 _public_6bdd729
#define public_6bdd735 _public_6bdd735
#define public_6bdd755 _public_6bdd755
#define public_6bdd765 _public_6bdd765
#define public_6bdd785 _public_6bdd785
#define public_6bdd795 _public_6bdd795
#define public_6bdd7c1 _public_6bdd7c1
#define public_6bdd7e2 _public_6bdd7e2
#define public_6bdd7f2 _public_6bdd7f2
#define public_6bdd817 _public_6bdd817
#define public_6bdd827 _public_6bdd827
#define public_6bdd866 _public_6bdd866
#define public_6bdd879 _public_6bdd879
#define public_6bdd8a2 _public_6bdd8a2
#define public_6bdd8b5 _public_6bdd8b5
#define public_6bdd8e0 _public_6bdd8e0
#define public_6bdd8ff _public_6bdd8ff
#define public_6bdd90f _public_6bdd90f
#define public_6bdd922 _public_6bdd922
#define public_6bdd94d _public_6bdd94d
#define public_6bdd95d _public_6bdd95d
#define public_6bdd968 _public_6bdd968
#define public_6bdd975 _public_6bdd975
#define public_6bdd985 _public_6bdd985
#define public_6bdd98b _public_6bdd98b
#define public_6bdd997 _public_6bdd997
#define public_6bdd9ad _public_6bdd9ad
#define public_6bdd9d6 _public_6bdd9d6
#define public_6bdd9f1 _public_6bdd9f1
#define public_6bdda08 _public_6bdda08
#define public_6bdda11 _public_6bdda11
#define public_6bdda47 _public_6bdda47

PROC_DECLARE(0x6bdd5e0, internal_6bdd5e0, public_6bdd5e0);
extern "C" NAKED register_t __cdecl internal_6bdd5e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        lea ebp, ds:[ebx+0x10]
        push edi
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [ecx]
        xor edi, edi
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov eax, dword ptr ds : [ebx+0x14]
        push ebp
        push eax
        lea esi, ds:[ebx+0x18]
        push esi
        mov ecx, ebx
        call public_6bebe50
        cmp eax, edi
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6bdd624
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bdd624 : nop
        cmp dword ptr ds : [ebx+0x5C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], edi
        mov byte ptr ds : [ebx+0x54], 0
        je public_6bdd638
        mov cl, byte ptr ds : [ebx+0x34]
        mov byte ptr ds : [ebx+0x54], cl
        public_6bdd638 : nop
        call dword ptr ds : [public_6c0b080]
        test al, al
        je public_6bdd699
        mov eax, dword ptr ds : [ebx+0x60]
        test eax, eax
        je public_6bdd654
        mov al, byte ptr ds : [ebx+0x54]
        mov dl, byte ptr ds : [ebx+0x3C]
        or al, dl
        mov byte ptr ds : [ebx+0x54], al
        public_6bdd654 : nop
        mov eax, dword ptr ds : [ebx+0x24]
        cmp dword ptr ds : [eax], 0
        jne public_6bdd664
        mov ecx, dword ptr ds : [ebx+0x2C]
        cmp dword ptr ds : [ecx], 0
        je public_6bdd66f
        public_6bdd664 : nop
        mov al, byte ptr ds : [ebx+0x54]
        mov dl, byte ptr ds : [ebx+0x38]
        or al, dl
        mov byte ptr ds : [ebx+0x54], al
        public_6bdd66f : nop
        mov eax, dword ptr ds : [ebx+0x50]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6bdd699
        cmp eax, 0xFF
        jle public_6bdd68e
        mov cl, byte ptr ds : [ebx+0x54]
        mov al, byte ptr ds : [ebx+0x44]
        or cl, al
        mov byte ptr ds : [ebx+0x54], cl
        jmp public_6bdd699
        public_6bdd68e : nop
        mov al, byte ptr ds : [ebx+0x54]
        mov cl, byte ptr ds : [ebx+0x40]
        or al, cl
        mov byte ptr ds : [ebx+0x54], al
        public_6bdd699 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        mov edi, 0x16
        jbe public_6bdd6b1
        mov dword ptr ss : [ebp+0xC], edi
        public_6bdd6b1 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdd6c1
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bdd6c1 : nop
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ds : [ebx+0x54]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bdd6e0
        mov dword ptr ss : [ebp+0xC], edi
        public_6bdd6e0 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdd6f0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bdd6f0 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx+0x58]
        mov dword ptr ds : [eax], ecx
        mov dl, byte ptr ds : [ebx+0x54]
        add eax, 4
        mov dword ptr ds : [esi], eax
        test byte ptr ds : [ebx+0x34], dl
        je public_6bdd735
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bdd719
        mov dword ptr ss : [ebp+0xC], edi
        public_6bdd719 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdd729
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bdd729 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx+0x5C]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        public_6bdd735 : nop
        mov dl, byte ptr ds : [ebx+0x54]
        test byte ptr ds : [ebx+0x3C], dl
        je public_6bdd7c1
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        mov cl, byte ptr ds : [ebx+0x60]
        inc eax
        cmp eax, edx
        mov dword ptr ss : [ebp], eax
        jbe public_6bdd755
        mov dword ptr ss : [ebp+0xC], edi
        public_6bdd755 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdd765
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bdd765 : nop
        mov eax, dword ptr ds : [esi]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [ebx+0x60]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        shl eax, 1
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bdd785
        mov dword ptr ss : [ebp+0xC], edi
        public_6bdd785 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdd795
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bdd795 : nop
        mov eax, dword ptr ds : [ebx+0x60]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ds : [ebx+0x64]
        shl eax, 1
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ds : [ebx+0x18], ecx
        mov edi, 0x16
        public_6bdd7c1 : nop
        mov dl, byte ptr ds : [ebx+0x54]
        test byte ptr ds : [ebx+0x38], dl
        je public_6bdd8e0
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bdd7e2
        mov dword ptr ss : [ebp+0xC], edi
        public_6bdd7e2 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdd7f2
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bdd7f2 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [ebx+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ebx+0x20]
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov esi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add esi, edx
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp], esi
        jbe public_6bdd817
        mov dword ptr ss : [ebp+0xC], edi
        public_6bdd817 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdd827
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bdd827 : nop
        mov eax, dword ptr ds : [ebx+0x20]
        mov edi, dword ptr ds : [ebx+0x18]
        mov esi, dword ptr ds : [ebx+0x24]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ds : [ebx+0x18], ecx
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bdd866
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6bdd866 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdd879
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bdd879 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [ebx+0x28]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ds : [ebx+0x28]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bdd8a2
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6bdd8a2 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdd8b5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bdd8b5 : nop
        mov eax, dword ptr ds : [ebx+0x28]
        mov edi, dword ptr ds : [ebx+0x18]
        mov esi, dword ptr ds : [ebx+0x2C]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ds : [ebx+0x18], ecx
        mov edi, 0x16
        public_6bdd8e0 : nop
        call dword ptr ds : [public_6c0b01c]
        test al, al
        je public_6bdd922
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bdd8ff
        mov dword ptr ss : [ebp+0xC], edi
        public_6bdd8ff : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdd90f
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bdd90f : nop
        mov eax, dword ptr ds : [ebx+0x18]
        fld dword ptr ds : [ebx+0x30]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        jmp public_6bdd9f1
        public_6bdd922 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        je public_6bdd9f1
        mov dl, byte ptr ds : [ebx+0x54]
        mov al, byte ptr ds : [ebx+0x44]
        mov esi, dword ptr ss : [ebp]
        test dl, al
        mov edx, dword ptr ss : [ebp+4]
        je public_6bdd968
        add esi, 2
        mov eax, esi
        cmp eax, edx
        mov dword ptr ss : [ebp], esi
        jbe public_6bdd94d
        mov dword ptr ss : [ebp+0xC], edi
        public_6bdd94d : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdd95d
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bdd95d : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov word ptr ds : [eax], cx
        add eax, 2
        jmp public_6bdd98b
        public_6bdd968 : nop
        inc esi
        mov eax, esi
        cmp eax, edx
        mov dword ptr ss : [ebp], esi
        jbe public_6bdd975
        mov dword ptr ss : [ebp+0xC], edi
        public_6bdd975 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdd985
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bdd985 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        public_6bdd98b : nop
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        je public_6bdd9f1
        public_6bdd997 : nop
        mov eax, dword ptr ss : [ebp]
        mov esi, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx+8]
        add eax, 4
        cmp eax, esi
        mov dword ptr ss : [ebp], eax
        jbe public_6bdd9ad
        mov dword ptr ss : [ebp+0xC], edi
        public_6bdd9ad : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bdda08
        fld dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ebx+0x18]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ss : [ebp]
        mov esi, dword ptr ss : [ebp+4]
        add eax, 4
        cmp eax, esi
        mov dword ptr ss : [ebp], eax
        jbe public_6bdd9d6
        mov dword ptr ss : [ebp+0xC], edi
        public_6bdd9d6 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bdda08
        mov eax, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, dword ptr ds : [ebx+0x4C]
        jne public_6bdd997
        public_6bdd9f1 : nop
        mov eax, dword ptr ds : [ebx+0x14]
        push ebp
        push eax
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6bdda11
        public_6bdda08 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bdda11 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        call public_6bec3b0
        mov ecx, eax
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebx
        mov dword ptr ds : [ecx], ebx
        mov edx, dword ptr ss : [ebp]
        add edi, edx
        mov dword ptr ds : [ecx+0x18], edi
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        mov esi, ebx
        jbe public_6bdda47
        mov dword ptr ds : [ecx+0x10], ebp
        public_6bdda47 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6bdd5e0)
    }
}

#undef public_6bdd624
#undef public_6bdd638
#undef public_6bdd654
#undef public_6bdd664
#undef public_6bdd66f
#undef public_6bdd68e
#undef public_6bdd699
#undef public_6bdd6b1
#undef public_6bdd6c1
#undef public_6bdd6e0
#undef public_6bdd6f0
#undef public_6bdd719
#undef public_6bdd729
#undef public_6bdd735
#undef public_6bdd755
#undef public_6bdd765
#undef public_6bdd785
#undef public_6bdd795
#undef public_6bdd7c1
#undef public_6bdd7e2
#undef public_6bdd7f2
#undef public_6bdd817
#undef public_6bdd827
#undef public_6bdd866
#undef public_6bdd879
#undef public_6bdd8a2
#undef public_6bdd8b5
#undef public_6bdd8e0
#undef public_6bdd8ff
#undef public_6bdd90f
#undef public_6bdd922
#undef public_6bdd94d
#undef public_6bdd95d
#undef public_6bdd968
#undef public_6bdd975
#undef public_6bdd985
#undef public_6bdd98b
#undef public_6bdd997
#undef public_6bdd9ad
#undef public_6bdd9d6
#undef public_6bdd9f1
#undef public_6bdda08
#undef public_6bdda11
#undef public_6bdda47
