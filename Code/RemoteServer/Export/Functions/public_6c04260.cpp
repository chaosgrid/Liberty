#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c042aa _public_6c042aa
#define public_6c042c1 _public_6c042c1
#define public_6c042d4 _public_6c042d4
#define public_6c04318 _public_6c04318
#define public_6c0432b _public_6c0432b
#define public_6c0434b _public_6c0434b
#define public_6c0435e _public_6c0435e
#define public_6c04393 _public_6c04393
#define public_6c043a6 _public_6c043a6
#define public_6c043c9 _public_6c043c9
#define public_6c043ea _public_6c043ea
#define public_6c043fd _public_6c043fd
#define public_6c04423 _public_6c04423
#define public_6c04446 _public_6c04446
#define public_6c0447a _public_6c0447a

PROC_DECLARE(0x6c04260, internal_6c04260, public_6c04260);
extern "C" NAKED register_t __cdecl internal_6c04260()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebp, ds:[ebx+0x10]
        push esi
        push edi
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        mov eax, dword ptr ds : [ebx+0x14]
        push ebp
        push eax
        lea edi, ds:[ebx+0x18]
        push edi
        mov ecx, ebx
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6c042aa
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c042aa : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6c042c1
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6c042c1 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6c042d4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c042d4 : nop
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [ebx+0x420]
        mov esi, dword ptr ds : [public_6c0b210]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [edi], eax
        lea eax, ds:[ebx+0x20]
        push eax
        call esi
        mov byte ptr ss : [esp+0x1C], al
        lea eax, ds:[ebx+0x220]
        push eax
        call esi
        mov esi, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        add esp, 8
        inc esi
        mov ecx, esi
        cmp ecx, edx
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [ebp], esi
        jbe public_6c04318
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6c04318 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        je public_6c0432b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c0432b : nop
        mov ecx, dword ptr ds : [edi]
        mov dl, byte ptr ss : [esp+0x18]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [edi], ecx
        mov ecx, dword ptr ss : [ebp]
        mov esi, dword ptr ss : [ebp+4]
        inc ecx
        cmp ecx, esi
        mov dword ptr ss : [ebp], ecx
        jbe public_6c0434b
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6c0434b : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        je public_6c0435e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c0435e : nop
        mov ecx, dword ptr ds : [edi]
        mov byte ptr ds : [ecx], al
        inc ecx
        test dl, dl
        mov dword ptr ds : [edi], ecx
        je public_6c043c9
        lea esi, ds:[ebx+0x20]
        push esi
        call dword ptr ds : [public_6c0b234]
        movzx eax, byte ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        shl eax, 1
        add ecx, eax
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [ebp], ecx
        jbe public_6c04393
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6c04393 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        je public_6c043a6
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c043a6 : nop
        mov edi, dword ptr ds : [edi]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov al, byte ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+0x18], ecx
        public_6c043c9 : nop
        test al, al
        je public_6c04423
        mov esi, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        movzx eax, al
        shl eax, 1
        add esi, eax
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ss : [ebp], esi
        jbe public_6c043ea
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6c043ea : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        je public_6c043fd
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c043fd : nop
        mov edi, dword ptr ds : [ebx+0x18]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        lea esi, ds:[ebx+0x220]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ds : [ebx+0x18], ecx
        public_6c04423 : nop
        mov edx, dword ptr ds : [ebx+0x14]
        push ebp
        push edx
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6c04446
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c04446 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ss : [ebp]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jbe public_6c0447a
        mov dword ptr ds : [ecx+0x10], ebp
        public_6c0447a : nop
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
        UNREACHABLE_TRAP(0x6c04260)
    }
}

#undef public_6c042aa
#undef public_6c042c1
#undef public_6c042d4
#undef public_6c04318
#undef public_6c0432b
#undef public_6c0434b
#undef public_6c0435e
#undef public_6c04393
#undef public_6c043a6
#undef public_6c043c9
#undef public_6c043ea
#undef public_6c043fd
#undef public_6c04423
#undef public_6c04446
#undef public_6c0447a
