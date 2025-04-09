#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_431cd0);
CLANG_FORWARD_PROC_SYMBOL(public_4330e0);
CLANG_FORWARD_PROC_SYMBOL(public_433940);

#define public_431cf0 _public_431cf0
#define public_431d03 _public_431d03
#define public_431d06 _public_431d06
#define public_431d0a _public_431d0a
#define public_431d43 _public_431d43
#define public_431d50 _public_431d50
#define public_431d58 _public_431d58
#define public_431d7c _public_431d7c

PROC_DECLARE(0x431cd0, internal_431cd0, public_431cd0);
extern "C" NAKED register_t __cdecl internal_431cd0()
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
        je public_431d0a
        lea esp, ss:[esp]
        public_431cf0 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_431d03
        mov esi, dword ptr ds : [esi]
        jmp public_431d06
        public_431d03 : nop
        mov esi, dword ptr ds : [esi+8]
        public_431d06 : nop
        cmp esi, ecx
        jne public_431cf0
        public_431d0a : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_431d58
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_431d50
        cmp edi, dword ptr ds : [edx]
        jne public_431d43
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_4330e0
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
        public_431d43 : nop
        lea ecx, ss:[esp+0x1C]
        call public_433940
        mov ecx, dword ptr ss : [esp+0x1C]
        public_431d50 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jae public_431d7c
        public_431d58 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_4330e0
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
        public_431d7c : nop
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
        UNREACHABLE_TRAP(0x431cd0)
    }
}

#undef public_431cf0
#undef public_431d03
#undef public_431d06
#undef public_431d0a
#undef public_431d43
#undef public_431d50
#undef public_431d58
#undef public_431d7c
