#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebd50);
CLANG_FORWARD_PROC_SYMBOL(public_6bec500);
CLANG_FORWARD_PROC_SYMBOL(public_6bec720);
CLANG_FORWARD_PROC_SYMBOL(public_6becaf0);
CLANG_FORWARD_PROC_SYMBOL(public_6beceb0);
CLANG_FORWARD_PROC_SYMBOL(public_6becf20);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bebd6e _public_6bebd6e
#define public_6bebd70 _public_6bebd70
#define public_6bebda0 _public_6bebda0
#define public_6bebdc8 _public_6bebdc8
#define public_6bebded _public_6bebded
#define public_6bebdf1 _public_6bebdf1
#define public_6bebe11 _public_6bebe11

PROC_DECLARE(0x6bebd50, internal_6bebd50, public_6bebd50);
extern "C" NAKED register_t __cdecl internal_6bebd50()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6c13bb8]
        mov al, 1
        test al, cl
        jne public_6bebd6e
        or cl, al
        mov byte ptr ds : [public_6c13bb8], cl
        mov ecx, offset public_6c13ba4
        jmp public_6bebd70
        public_6bebd6e : nop
        ret 
        nop 
        public_6bebd70 : nop
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
        je public_6bebded
        mov ecx, eax
        cmp eax, ecx
        jne public_6bebded
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6bebdc8
        nop 
        lea esp, ss:[esp]
        public_6bebda0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6becaf0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0x10]
        call public_6becf20
        push ebx
        call public_6c09aaa
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6bebda0
        public_6bebdc8 : nop
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
        call public_6bec500
        jmp public_6bebe11
        public_6bebded : nop
        cmp eax, edi
        je public_6bebe11
        public_6bebdf1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6beceb0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6bec720
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6bebdf1
        public_6bebe11 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6c09aaa
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6c09aaa
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6bebd50)
    }
}

#undef public_6bebd6e
#undef public_6bebd70
#undef public_6bebda0
#undef public_6bebdc8
#undef public_6bebded
#undef public_6bebdf1
#undef public_6bebe11
