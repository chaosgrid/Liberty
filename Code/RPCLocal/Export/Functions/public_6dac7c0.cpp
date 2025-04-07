#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6da3720);
CLANG_FORWARD_PROC_SYMBOL(public_6db20de);

#define public_6dac809 _public_6dac809
#define public_6dac830 _public_6dac830
#define public_6dac843 _public_6dac843
#define public_6dac865 _public_6dac865
#define public_6dac878 _public_6dac878
#define public_6dac8aa _public_6dac8aa
#define public_6dac8bd _public_6dac8bd
#define public_6dac8f3 _public_6dac8f3
#define public_6dac918 _public_6dac918
#define public_6dac94a _public_6dac94a
#define public_6dac997 _public_6dac997
#define public_6dac9aa _public_6dac9aa
#define public_6dac9d7 _public_6dac9d7
#define public_6dac9ea _public_6dac9ea
#define public_6daca16 _public_6daca16
#define public_6daca39 _public_6daca39
#define public_6daca6a _public_6daca6a
#define public_6daca76 _public_6daca76

PROC_DECLARE(0x6dac7c0, internal_6dac7c0, public_6dac7c0);
extern "C" NAKED register_t __cdecl internal_6dac7c0()
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
        call public_6da1380
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6dac809
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dac809 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push edi
        push ecx
        mov ecx, ebp
        call public_6da3720
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6dac830
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6dac830 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6dac843
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dac843 : nop
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
        jbe public_6dac865
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6dac865 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6dac878
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dac878 : nop
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ss : [ebp+0x9D]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_6db305c]
        test al, al
        jne public_6daca16
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6dac8aa
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6dac8aa : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6dac8bd
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dac8bd : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0xB0]
        mov dword ptr ds : [eax], edx
        fld dword ptr ss : [ebp+0xB4]
        fmul qword ptr ds : [public_6db3fd8]
        add eax, 4
        mov dword ptr ds : [esi], eax
        call public_6db20de
        mov ecx, dword ptr ds : [ebx]
        mov dl, al
        mov eax, dword ptr ds : [ebx+4]
        inc ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx], ecx
        mov eax, 0x16
        jbe public_6dac8f3
        mov dword ptr ds : [ebx+0xC], eax
        public_6dac8f3 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6daca76
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
        jbe public_6dac918
        mov dword ptr ds : [ebx+0xC], eax
        public_6dac918 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6daca76
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
        jbe public_6dac94a
        mov dword ptr ds : [ebx+0xC], eax
        public_6dac94a : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6daca76
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
        jbe public_6dac997
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6dac997 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6dac9aa
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dac9aa : nop
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
        jbe public_6dac9d7
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6dac9d7 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6dac9ea
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dac9ea : nop
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
        public_6daca16 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6daca39
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daca39 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6da16b0
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
        jbe public_6daca6a
        mov dword ptr ds : [ecx+0x10], ebx
        public_6daca6a : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6daca76 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6dac7c0)
    }
}

#undef public_6dac809
#undef public_6dac830
#undef public_6dac843
#undef public_6dac865
#undef public_6dac878
#undef public_6dac8aa
#undef public_6dac8bd
#undef public_6dac8f3
#undef public_6dac918
#undef public_6dac94a
#undef public_6dac997
#undef public_6dac9aa
#undef public_6dac9d7
#undef public_6dac9ea
#undef public_6daca16
#undef public_6daca39
#undef public_6daca6a
#undef public_6daca76
