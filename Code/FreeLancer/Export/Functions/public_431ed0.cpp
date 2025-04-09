#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_431ed0);
CLANG_FORWARD_PROC_SYMBOL(public_433400);
CLANG_FORWARD_PROC_SYMBOL(public_4339a0);

#define public_431ef0 _public_431ef0
#define public_431f03 _public_431f03
#define public_431f06 _public_431f06
#define public_431f0a _public_431f0a
#define public_431f43 _public_431f43
#define public_431f50 _public_431f50
#define public_431f58 _public_431f58
#define public_431f7c _public_431f7c

PROC_DECLARE(0x431ed0, internal_431ed0, public_431ed0);
extern "C" NAKED register_t __cdecl internal_431ed0()
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
        je public_431f0a
        lea esp, ss:[esp]
        public_431ef0 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_431f03
        mov esi, dword ptr ds : [esi]
        jmp public_431f06
        public_431f03 : nop
        mov esi, dword ptr ds : [esi+8]
        public_431f06 : nop
        cmp esi, ecx
        jne public_431ef0
        public_431f0a : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_431f58
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_431f50
        cmp edi, dword ptr ds : [edx]
        jne public_431f43
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_433400
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
        public_431f43 : nop
        lea ecx, ss:[esp+0x1C]
        call public_4339a0
        mov ecx, dword ptr ss : [esp+0x1C]
        public_431f50 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jae public_431f7c
        public_431f58 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_433400
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
        public_431f7c : nop
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
        UNREACHABLE_TRAP(0x431ed0)
    }
}

#undef public_431ef0
#undef public_431f03
#undef public_431f06
#undef public_431f0a
#undef public_431f43
#undef public_431f50
#undef public_431f58
#undef public_431f7c
