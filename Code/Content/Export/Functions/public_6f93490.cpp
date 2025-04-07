#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f934b4 _public_6f934b4
#define public_6f934c6 _public_6f934c6
#define public_6f934d0 _public_6f934d0
#define public_6f934fb _public_6f934fb
#define public_6f93500 _public_6f93500
#define public_6f93515 _public_6f93515
#define public_6f9352c _public_6f9352c
#define public_6f9353d _public_6f9353d

PROC_DECLARE(0x6f93490, internal_6f93490, public_6f93490);
extern "C" NAKED register_t __cdecl internal_6f93490()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ebp, ecx
        push esi
        push edi
        je public_6f9353d
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_6f934c6
        public_6f934b4 : nop
        cmp ebx, ecx
        je public_6f934c6
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_6f934b4
        public_6f934c6 : nop
        cmp eax, esi
        mov edi, eax
        je public_6f934fb
        lea esp, ss:[esp]
        public_6f934d0 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6f934d0
        mov ecx, dword ptr ss : [esp+0x14]
        public_6f934fb : nop
        cmp ebx, ecx
        je public_6f9353d
        nop 
        public_6f93500 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f93515
        mov edi, eax
        public_6f93515 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f9352c
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_6f9352c : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6f93500
        public_6f9353d : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f93490)
    }
}

#undef public_6f934b4
#undef public_6f934c6
#undef public_6f934d0
#undef public_6f934fb
#undef public_6f93500
#undef public_6f93515
#undef public_6f9352c
#undef public_6f9353d
