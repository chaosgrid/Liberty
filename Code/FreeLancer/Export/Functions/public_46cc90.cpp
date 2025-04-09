#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c010);
CLANG_FORWARD_PROC_SYMBOL(public_46cc90);
CLANG_FORWARD_PROC_SYMBOL(public_46e3c0);

#define public_46ccb0 _public_46ccb0
#define public_46ccc3 _public_46ccc3
#define public_46ccc6 _public_46ccc6
#define public_46ccca _public_46ccca
#define public_46cd03 _public_46cd03
#define public_46cd10 _public_46cd10
#define public_46cd18 _public_46cd18
#define public_46cd3c _public_46cd3c

PROC_DECLARE(0x46cc90, internal_46cc90, public_46cc90);
extern "C" NAKED register_t __cdecl internal_46cc90()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ecx
        push edi
        mov edi, edx
        mov al, 1
        je public_46ccca
        lea esp, ss:[esp]
        public_46ccb0 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        seta al
        test al, al
        je public_46ccc3
        mov esi, dword ptr ds : [esi]
        jmp public_46ccc6
        public_46ccc3 : nop
        mov esi, dword ptr ds : [esi+8]
        public_46ccc6 : nop
        cmp esi, ecx
        jne public_46ccb0
        public_46ccca : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_46cd18
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_46cd10
        cmp edi, dword ptr ds : [edx]
        jne public_46cd03
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_46e3c0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_46cd03 : nop
        lea ecx, ss:[esp+0x1C]
        call public_43c010
        mov ecx, dword ptr ss : [esp+0x1C]
        public_46cd10 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jbe public_46cd3c
        public_46cd18 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_46e3c0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_46cd3c : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        xor dl, dl
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x46cc90)
    }
}

#undef public_46ccb0
#undef public_46ccc3
#undef public_46ccc6
#undef public_46ccca
#undef public_46cd03
#undef public_46cd10
#undef public_46cd18
#undef public_46cd3c
