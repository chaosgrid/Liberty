#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b59002 _public_6b59002
#define public_6b59019 _public_6b59019
#define public_6b59046 _public_6b59046
#define public_6b59079 _public_6b59079
#define public_6b590ad _public_6b590ad
#define public_6b590cd _public_6b590cd
#define public_6b5910b _public_6b5910b
#define public_6b59117 _public_6b59117

PROC_DECLARE(0x6b58fc0, internal_6b58fc0, public_6b58fc0);
extern "C" NAKED register_t __cdecl internal_6b58fc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebp, ecx
        lea ebx, ss:[ebp+0x10]
        push ebx
        push edi
        lea esi, ss:[ebp+0x18]
        push esi
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b59002
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b59002 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b59019
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6b59019 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b59117
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, ecx
        test eax, eax
        mov dword ptr ss : [ebp+0x24], ecx
        jbe public_6b590ad
        mov edx, dword ptr ds : [ebx]
        add edx, eax
        cmp edx, dword ptr ds : [ebx+4]
        jbe public_6b59046
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6b59046 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b59117
        mov eax, dword ptr ss : [ebp+0x24]
        push eax
        call public_6b6a134
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ss : [ebp+0x20], eax
        mov edx, dword ptr ds : [ebx]
        add edx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b59079
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6b59079 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b59117
        mov eax, dword ptr ss : [ebp+0x24]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp+0x20]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        public_6b590ad : nop
        push ebx
        push edi
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b590cd
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b590cd : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6b4ecd0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ds : [ebx]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add eax, 2
        cmp ebx, eax
        jbe public_6b5910b
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6b5910b : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b59117 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b58fc0)
    }
}

#undef public_6b59002
#undef public_6b59019
#undef public_6b59046
#undef public_6b59079
#undef public_6b590ad
#undef public_6b590cd
#undef public_6b5910b
#undef public_6b59117
