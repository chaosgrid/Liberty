#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee7d80);

#define public_6ee3320 _public_6ee3320
#define public_6ee332b _public_6ee332b
#define public_6ee3345 _public_6ee3345
#define public_6ee3359 _public_6ee3359
#define public_6ee3369 _public_6ee3369
#define public_6ee3389 _public_6ee3389
#define public_6ee339d _public_6ee339d
#define public_6ee33a9 _public_6ee33a9

PROC_DECLARE(0x6ee32e0, internal_6ee32e0, public_6ee32e0);
extern "C" NAKED register_t __cdecl internal_6ee32e0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        test ebp, ebp
        je public_6ee33a9
        mov ecx, dword ptr ss : [ebp]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0x110]
        mov esi, dword ptr ds : [eax]
        push ebp
        xor ebx, ebx
        call dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, dword ptr ds : [edi+0x114]
        jae public_6ee3369
        mov eax, dword ptr ds : [edi+0x110]
        cmp esi, eax
        je public_6ee332b
        nop 
        lea esp, ss:[esp]
        public_6ee3320 : nop
        cmp ebx, ecx
        jae public_6ee332b
        mov esi, dword ptr ds : [esi]
        inc ebx
        cmp esi, eax
        jne public_6ee3320
        public_6ee332b : nop
        lea ebx, ds:[edi+0x10C]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        mov ecx, ebx
        call public_6ee7d80
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6ee3345
        mov edi, eax
        public_6ee3345 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6ee3359
        mov dword ptr ds : [eax], ebp
        public_6ee3359 : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        xor eax, eax
        pop ebp
        ret 0xC
        public_6ee3369 : nop
        mov esi, dword ptr ds : [edi+0x110]
        mov ebx, dword ptr ds : [esi+4]
        add edi, 0x10C
        push 0xC
        mov ecx, edi
        call public_6ee7d80
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6ee3389
        mov ebx, eax
        public_6ee3389 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6ee339d
        mov dword ptr ds : [eax], ebp
        public_6ee339d : nop
        inc dword ptr ds : [edi+8]
        pop edi
        pop esi
        pop ebx
        xor eax, eax
        pop ebp
        ret 0xC
        public_6ee33a9 : nop
        or eax, 0xFFFFFFFF
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ee32e0)
    }
}

#undef public_6ee3320
#undef public_6ee332b
#undef public_6ee3345
#undef public_6ee3359
#undef public_6ee3369
#undef public_6ee3389
#undef public_6ee339d
#undef public_6ee33a9
