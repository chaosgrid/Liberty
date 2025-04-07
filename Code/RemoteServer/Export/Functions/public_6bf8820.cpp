#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c08640);
CLANG_FORWARD_PROC_SYMBOL(public_6c09ee8);

#define public_6bf8869 _public_6bf8869
#define public_6bf8890 _public_6bf8890
#define public_6bf88a3 _public_6bf88a3
#define public_6bf88c5 _public_6bf88c5
#define public_6bf88d8 _public_6bf88d8
#define public_6bf890a _public_6bf890a
#define public_6bf891d _public_6bf891d
#define public_6bf8953 _public_6bf8953
#define public_6bf8978 _public_6bf8978
#define public_6bf89aa _public_6bf89aa
#define public_6bf89f7 _public_6bf89f7
#define public_6bf8a0a _public_6bf8a0a
#define public_6bf8a37 _public_6bf8a37
#define public_6bf8a4a _public_6bf8a4a
#define public_6bf8a76 _public_6bf8a76
#define public_6bf8a99 _public_6bf8a99
#define public_6bf8aca _public_6bf8aca
#define public_6bf8ad6 _public_6bf8ad6

PROC_DECLARE(0x6bf8820, internal_6bf8820, public_6bf8820);
extern "C" NAKED register_t __cdecl internal_6bf8820()
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
        call public_6bebe50
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bf8869
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf8869 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push edi
        push ecx
        mov ecx, ebp
        call public_6c08640
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bf8890
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bf8890 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bf88a3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf88a3 : nop
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
        jbe public_6bf88c5
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bf88c5 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bf88d8
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf88d8 : nop
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ss : [ebp+0x9D]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_6c0b080]
        test al, al
        jne public_6bf8a76
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bf890a
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bf890a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bf891d
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf891d : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0xB0]
        mov dword ptr ds : [eax], edx
        fld dword ptr ss : [ebp+0xB4]
        fmul qword ptr ds : [public_6c0df40]
        add eax, 4
        mov dword ptr ds : [esi], eax
        call public_6c09ee8
        mov ecx, dword ptr ds : [ebx]
        mov dl, al
        mov eax, dword ptr ds : [ebx+4]
        inc ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx], ecx
        mov eax, 0x16
        jbe public_6bf8953
        mov dword ptr ds : [ebx+0xC], eax
        public_6bf8953 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6bf8ad6
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
        jbe public_6bf8978
        mov dword ptr ds : [ebx+0xC], eax
        public_6bf8978 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6bf8ad6
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
        jbe public_6bf89aa
        mov dword ptr ds : [ebx+0xC], eax
        public_6bf89aa : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6bf8ad6
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
        jbe public_6bf89f7
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bf89f7 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bf8a0a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf8a0a : nop
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
        jbe public_6bf8a37
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bf8a37 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bf8a4a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf8a4a : nop
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
        public_6bf8a76 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6bebea0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bf8a99
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf8a99 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6bec3b0
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
        jbe public_6bf8aca
        mov dword ptr ds : [ecx+0x10], ebx
        public_6bf8aca : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6bf8ad6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bf8820)
    }
}

#undef public_6bf8869
#undef public_6bf8890
#undef public_6bf88a3
#undef public_6bf88c5
#undef public_6bf88d8
#undef public_6bf890a
#undef public_6bf891d
#undef public_6bf8953
#undef public_6bf8978
#undef public_6bf89aa
#undef public_6bf89f7
#undef public_6bf8a0a
#undef public_6bf8a37
#undef public_6bf8a4a
#undef public_6bf8a76
#undef public_6bf8a99
#undef public_6bf8aca
#undef public_6bf8ad6
