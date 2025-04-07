#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b50e50);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a3f8);

#define public_6b62689 _public_6b62689
#define public_6b626b0 _public_6b626b0
#define public_6b626c3 _public_6b626c3
#define public_6b626e5 _public_6b626e5
#define public_6b626f8 _public_6b626f8
#define public_6b6272a _public_6b6272a
#define public_6b6273d _public_6b6273d
#define public_6b62773 _public_6b62773
#define public_6b62798 _public_6b62798
#define public_6b627ca _public_6b627ca
#define public_6b62817 _public_6b62817
#define public_6b6282a _public_6b6282a
#define public_6b62857 _public_6b62857
#define public_6b6286a _public_6b6286a
#define public_6b62896 _public_6b62896
#define public_6b628b9 _public_6b628b9
#define public_6b628ea _public_6b628ea
#define public_6b628f6 _public_6b628f6

PROC_DECLARE(0x6b62640, internal_6b62640, public_6b62640);
extern "C" NAKED register_t __cdecl internal_6b62640()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea ebx, ss:[ebp+0x10]
        mov dword ptr ds : [ebx+4], edi
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        call public_6b4e740
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b62689
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b62689 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push edi
        push ecx
        mov ecx, ebp
        call public_6b50e50
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b626b0
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b626b0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b626c3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b626c3 : nop
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ss : [ebp+0x9C]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b626e5
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b626e5 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b626f8
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b626f8 : nop
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ss : [ebp+0x9D]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        jne public_6b62896
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b6272a
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b6272a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b6273d
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b6273d : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0xB0]
        mov dword ptr ds : [eax], edx
        fld dword ptr ss : [ebp+0xB4]
        fmul qword ptr ds : [public_6b6c1e0]
        add eax, 4
        mov dword ptr ds : [esi], eax
        call public_6b6a3f8
        mov ecx, dword ptr ds : [ebx]
        mov dl, al
        mov eax, dword ptr ds : [ebx+4]
        inc ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx], ecx
        mov eax, 0x16
        jbe public_6b62773
        mov dword ptr ds : [ebx+0xC], eax
        public_6b62773 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6b628f6
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [esi], ecx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6b62798
        mov dword ptr ds : [ebx+0xC], eax
        public_6b62798 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6b628f6
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0xA0]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [ebp+0xA0]
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, ecx
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6b627ca
        mov dword ptr ds : [ebx+0xC], eax
        public_6b627ca : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6b628f6
        mov eax, dword ptr ss : [ebp+0xA0]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0xA4]
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
        mov dword ptr ss : [ebp+0x18], ecx
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b62817
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b62817 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b6282a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b6282a : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0xA8]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [ebp+0xA8]
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b62857
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b62857 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b6286a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b6286a : nop
        mov eax, dword ptr ss : [ebp+0xA8]
        mov edi, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ss : [ebp+0xAC]
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
        mov dword ptr ss : [ebp+0x18], ecx
        public_6b62896 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6b4e790
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b628b9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b628b9 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [ebx]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jbe public_6b628ea
        mov dword ptr ds : [ecx+0x10], ebx
        public_6b628ea : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6b628f6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b62640)
    }
}

#undef public_6b62689
#undef public_6b626b0
#undef public_6b626c3
#undef public_6b626e5
#undef public_6b626f8
#undef public_6b6272a
#undef public_6b6273d
#undef public_6b62773
#undef public_6b62798
#undef public_6b627ca
#undef public_6b62817
#undef public_6b6282a
#undef public_6b62857
#undef public_6b6286a
#undef public_6b62896
#undef public_6b628b9
#undef public_6b628ea
#undef public_6b628f6
