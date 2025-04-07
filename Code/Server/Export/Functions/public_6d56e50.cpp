#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4500);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4520);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5620);
CLANG_FORWARD_PROC_SYMBOL(public_6d56e50);

#define public_6d56e76 _public_6d56e76
#define public_6d56e87 _public_6d56e87
#define public_6d56e9e _public_6d56e9e
#define public_6d56ed1 _public_6d56ed1
#define public_6d56ee1 _public_6d56ee1
#define public_6d56ef5 _public_6d56ef5
#define public_6d56f10 _public_6d56f10
#define public_6d56f30 _public_6d56f30
#define public_6d56f4a _public_6d56f4a
#define public_6d56f60 _public_6d56f60

PROC_DECLARE(0x6d56e50, internal_6d56e50, public_6d56e50);
extern "C" NAKED register_t __cdecl internal_6d56e50()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [ebx]
        push ebp
        xor ebp, ebp
        push esi
        mov esi, ecx
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jbe public_6d56e76
        or edi, 0xFFFFFFFF
        public_6d56e76 : nop
        cmp esi, ebx
        jne public_6d56ee1
        or ebx, 0xFFFFFFFF
        cmp edi, ebp
        jbe public_6d56e87
        call dword ptr ds : [public_6d64b04]
        public_6d56e87 : nop
        mov ecx, esi
        call public_6ce5620
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, 0xFFFFFFFF
        jae public_6d56e9e
        mov ebx, eax
        cmp ebx, ebp
        jbe public_6d56ed1
        public_6d56e9e : nop
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ebx+edi]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6ce3ac0
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push ebp
        sub edi, ebx
        push edi
        mov ecx, esi
        call public_6ce4520
        test al, al
        je public_6d56ed1
        push edi
        mov ecx, esi
        call public_6ce4500
        public_6d56ed1 : nop
        mov ecx, esi
        call public_6ce5620
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6d56ee1 : nop
        cmp edi, ebp
        jbe public_6d56f30
        cmp edi, eax
        jne public_6d56f30
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6d56ef5
        mov eax, offset public_6d64efc
        public_6d56ef5 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6d56f30
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6d56f10
        mov eax, offset public_6d64efc
        public_6d56f10 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov cl, byte ptr ds : [eax-1]
        inc cl
        pop edi
        mov byte ptr ds : [eax-1], cl
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6d56f30 : nop
        push 1
        push edi
        mov ecx, esi
        call public_6ce4520
        test al, al
        je public_6d56f60
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_6d56f4a
        mov ebx, offset public_6d64efc
        public_6d56f4a : nop
        mov edx, dword ptr ds : [esi+4]
        push edi
        push ebx
        push edx
        call public_6ce1960
        add esp, 0xC
        push edi
        mov ecx, esi
        call public_6ce4500
        public_6d56f60 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d56e50)
    }
}

#undef public_6d56e76
#undef public_6d56e87
#undef public_6d56e9e
#undef public_6d56ed1
#undef public_6d56ee1
#undef public_6d56ef5
#undef public_6d56f10
#undef public_6d56f30
#undef public_6d56f4a
#undef public_6d56f60
