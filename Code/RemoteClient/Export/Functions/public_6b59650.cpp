#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b59692 _public_6b59692
#define public_6b596a9 _public_6b596a9
#define public_6b596d7 _public_6b596d7
#define public_6b59709 _public_6b59709
#define public_6b59745 _public_6b59745
#define public_6b59751 _public_6b59751

PROC_DECLARE(0x6b59650, internal_6b59650, public_6b59650);
extern "C" NAKED register_t __cdecl internal_6b59650()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x10]
        push esi
        push ebp
        lea ebx, ds:[edi+0x18]
        push ebx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b59692
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b59692 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b596a9
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b596a9 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b59751
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b596d7
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b596d7 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b59751
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        push esi
        push ebp
        add eax, 2
        push ebx
        mov ecx, edi
        mov word ptr ds : [edi+0x24], dx
        mov dword ptr ds : [ebx], eax
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b59709
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b59709 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ds : [esi]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add edx, 2
        cmp esi, edx
        jbe public_6b59745
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b59745 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b59751 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b59650)
    }
}

#undef public_6b59692
#undef public_6b596a9
#undef public_6b596d7
#undef public_6b59709
#undef public_6b59745
#undef public_6b59751
