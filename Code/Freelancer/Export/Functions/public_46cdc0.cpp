#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a020);
CLANG_FORWARD_PROC_SYMBOL(public_46cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_46e670);

#define public_46cde0 _public_46cde0
#define public_46cdf3 _public_46cdf3
#define public_46cdf6 _public_46cdf6
#define public_46cdfa _public_46cdfa
#define public_46ce33 _public_46ce33
#define public_46ce40 _public_46ce40
#define public_46ce48 _public_46ce48
#define public_46ce6c _public_46ce6c

PROC_DECLARE(0x46cdc0, internal_46cdc0, public_46cdc0);
extern "C" NAKED register_t __cdecl internal_46cdc0()
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
        je public_46cdfa
        lea esp, ss:[esp]
        public_46cde0 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        seta al
        test al, al
        je public_46cdf3
        mov esi, dword ptr ds : [esi]
        jmp public_46cdf6
        public_46cdf3 : nop
        mov esi, dword ptr ds : [esi+8]
        public_46cdf6 : nop
        cmp esi, ecx
        jne public_46cde0
        public_46cdfa : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_46ce48
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_46ce40
        cmp edi, dword ptr ds : [edx]
        jne public_46ce33
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_46e670
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
        public_46ce33 : nop
        lea ecx, ss:[esp+0x1C]
        call public_45a020
        mov ecx, dword ptr ss : [esp+0x1C]
        public_46ce40 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jbe public_46ce6c
        public_46ce48 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_46e670
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
        public_46ce6c : nop
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
        UNREACHABLE_TRAP(0x46cdc0)
    }
}

#undef public_46cde0
#undef public_46cdf3
#undef public_46cdf6
#undef public_46cdfa
#undef public_46ce33
#undef public_46ce40
#undef public_46ce48
#undef public_46ce6c
