#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f03670);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f30b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f56f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f98450);
CLANG_FORWARD_PROC_SYMBOL(public_6fa2b20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f9846e _public_6f9846e
#define public_6f98470 _public_6f98470
#define public_6f984a0 _public_6f984a0
#define public_6f984c8 _public_6f984c8
#define public_6f984ed _public_6f984ed
#define public_6f984f1 _public_6f984f1
#define public_6f98511 _public_6f98511

PROC_DECLARE(0x6f98450, internal_6f98450, public_6f98450);
extern "C" NAKED register_t __cdecl internal_6f98450()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd3cd0]
        mov al, 1
        test al, cl
        jne public_6f9846e
        or cl, al
        mov byte ptr ds : [public_6fd3cd0], cl
        mov ecx, offset public_6fd3cd4
        jmp public_6f98470
        public_6f9846e : nop
        ret 
        nop 
        public_6f98470 : nop
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6f984ed
        mov ecx, eax
        cmp eax, ecx
        jne public_6f984ed
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f984c8
        nop 
        lea esp, ss:[esp]
        public_6f984a0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6fa2b20
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6f56f30
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f984a0
        public_6f984c8 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6f1df30
        jmp public_6f98511
        public_6f984ed : nop
        cmp eax, edi
        je public_6f98511
        public_6f984f1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f03670
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f30b60
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f984f1
        public_6f98511 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f98450)
    }
}

#undef public_6f9846e
#undef public_6f98470
#undef public_6f984a0
#undef public_6f984c8
#undef public_6f984ed
#undef public_6f984f1
#undef public_6f98511
