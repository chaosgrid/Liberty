#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);

#define public_65c4070 _public_65c4070
#define public_65c4082 _public_65c4082
#define public_65c4088 _public_65c4088
#define public_65c40b7 _public_65c40b7
#define public_65c40c0 _public_65c40c0
#define public_65c40d5 _public_65c40d5
#define public_65c40ec _public_65c40ec
#define public_65c4101 _public_65c4101
#define public_65c4130 _public_65c4130

PROC_DECLARE(0x65c4030, internal_65c4030, public_65c4030);
extern "C" NAKED register_t __cdecl internal_65c4030()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx+4]
        push ebx
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp+8], ecx
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [ebp+0xC], eax
        lea ecx, ds:[edx+0x14]
        lea eax, ss:[ebp+0x14]
        cmp eax, ecx
        push esi
        push edi
        je public_65c4101
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_65c4082
        lea ecx, ds:[ecx]
        public_65c4070 : nop
        cmp ebx, ecx
        je public_65c4082
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_65c4070
        public_65c4082 : nop
        cmp eax, esi
        mov edi, eax
        je public_65c40b7
        public_65c4088 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_65c6a60
        mov ecx, dword ptr ss : [ebp+0x1C]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+0x1C], ecx
        jne public_65c4088
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        public_65c40b7 : nop
        cmp ebx, ecx
        je public_65c4101
        nop 
        lea esp, ss:[esp]
        public_65c40c0 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_65c6a66
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_65c40d5
        mov edi, eax
        public_65c40d5 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_65c40ec
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_65c40ec : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+0x1C], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_65c40c0
        mov edx, dword ptr ss : [esp+0x18]
        public_65c4101 : nop
        lea esi, ds:[edx+0x20]
        lea edi, ss:[ebp+0x20]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [edx+0x38]
        mov dword ptr ss : [ebp+0x38], eax
        mov ecx, dword ptr ds : [edx+0x3C]
        mov dword ptr ss : [ebp+0x3C], ecx
        mov eax, dword ptr ds : [edx+0x40]
        mov ecx, edx
        mov dword ptr ss : [ebp+0x40], eax
        lea eax, ss:[ebp+0x44]
        sub ecx, ebp
        mov esi, 3
        lea esp, ss:[esp]
        public_65c4130 : nop
        mov edi, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax], edi
        add eax, 4
        dec esi
        jne public_65c4130
        mov ecx, dword ptr ds : [edx+0x50]
        mov dword ptr ss : [ebp+0x50], ecx
        mov eax, dword ptr ds : [edx+0x58]
        mov dword ptr ss : [ebp+0x58], eax
        mov ecx, dword ptr ds : [edx+0x5C]
        pop edi
        mov dword ptr ss : [ebp+0x5C], ecx
        mov dl, byte ptr ds : [edx+0x60]
        pop esi
        mov byte ptr ss : [ebp+0x60], dl
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x65c4030)
    }
}

#undef public_65c4070
#undef public_65c4082
#undef public_65c4088
#undef public_65c40b7
#undef public_65c40c0
#undef public_65c40d5
#undef public_65c40ec
#undef public_65c4101
#undef public_65c4130
