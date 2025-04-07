#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd9e00);
CLANG_FORWARD_PROC_SYMBOL(public_6bd9e60);
CLANG_FORWARD_PROC_SYMBOL(public_6bd9eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bd9f20);

#define public_6bd9640 _public_6bd9640
#define public_6bd9652 _public_6bd9652
#define public_6bd9670 _public_6bd9670
#define public_6bd96a0 _public_6bd96a0
#define public_6bd96b2 _public_6bd96b2
#define public_6bd96d0 _public_6bd96d0
#define public_6bd972f _public_6bd972f
#define public_6bd9733 _public_6bd9733
#define public_6bd9771 _public_6bd9771
#define public_6bd9797 _public_6bd9797

PROC_DECLARE(0x6bd9600, internal_6bd9600, public_6bd9600);
extern "C" NAKED register_t __cdecl internal_6bd9600()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [ebp+4], eax
        mov cl, byte ptr ds : [ebx+8]
        mov byte ptr ss : [ebp+8], cl
        mov edx, dword ptr ds : [ebx+0xC]
        lea ecx, ds:[ebx+0x14]
        lea eax, ss:[ebp+0x14]
        cmp eax, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp+0xC], edx
        je public_6bd9670
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_6bd9652
        nop 
        public_6bd9640 : nop
        cmp esi, ecx
        je public_6bd9652
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_6bd9640
        public_6bd9652 : nop
        push edi
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[ebp+0x14]
        call public_6bd9e60
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        push edi
        lea ecx, ss:[ebp+0x14]
        call public_6bd9e00
        public_6bd9670 : nop
        lea esi, ds:[ebx+0x20]
        lea edi, ss:[ebp+0x20]
        mov ecx, 6
        rep movsd
        mov edx, dword ptr ds : [ebx+0x38]
        lea ecx, ds:[ebx+0x40]
        lea eax, ss:[ebp+0x40]
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x38], edx
        je public_6bd96d0
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_6bd96b2
        nop 
        public_6bd96a0 : nop
        cmp esi, ecx
        je public_6bd96b2
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_6bd96a0
        public_6bd96b2 : nop
        push edi
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[ebp+0x40]
        call public_6bd9e60
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        push edi
        lea ecx, ss:[ebp+0x40]
        call public_6bd9e00
        public_6bd96d0 : nop
        lea esi, ds:[ebx+0x4C]
        lea edi, ss:[ebp+0x4C]
        mov ecx, 6
        rep movsd
        mov edx, dword ptr ds : [ebx+0x64]
        mov dword ptr ss : [ebp+0x64], edx
        lea eax, ds:[ebx+0x68]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x68]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ds : [ebx+0x78]
        mov dword ptr ss : [ebp+0x78], ecx
        mov edx, dword ptr ds : [ebx+0x7C]
        lea eax, ds:[ebx+0x80]
        lea ecx, ss:[ebp+0x80]
        cmp ecx, eax
        mov dword ptr ss : [ebp+0x7C], edx
        je public_6bd9797
        mov ebx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov eax, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], eax
        je public_6bd9771
        jmp public_6bd9733
        public_6bd972f : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_6bd9733 : nop
        cmp edi, eax
        je public_6bd9771
        mov eax, dword ptr ds : [public_6c0b1b8]
        mov edx, dword ptr ds : [eax]
        push edx
        push 0
        lea ebp, ds:[edi+8]
        lea ecx, ds:[esi+8]
        push ebp
        call dword ptr ds : [public_6c0b1bc]
        mov eax, dword ptr ds : [public_6c0b1b8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        add ebp, 0x10
        push ebp
        lea ecx, ds:[esi+0x18]
        call dword ptr ds : [public_6c0b1bc]
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        mov edi, dword ptr ds : [edi]
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6bd972f
        public_6bd9771 : nop
        push ebx
        push esi
        lea edx, ss:[esp+0x20]
        lea esi, ss:[ebp+0x80]
        push edx
        mov ecx, esi
        call public_6bd9f20
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push edi
        push ebx
        mov ecx, esi
        call public_6bd9eb0
        mov ebx, dword ptr ss : [esp+0x20]
        public_6bd9797 : nop
        mov cl, byte ptr ds : [ebx+0x8C]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x8C], cl
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6bd9600)
    }
}

#undef public_6bd9640
#undef public_6bd9652
#undef public_6bd9670
#undef public_6bd96a0
#undef public_6bd96b2
#undef public_6bd96d0
#undef public_6bd972f
#undef public_6bd9733
#undef public_6bd9771
#undef public_6bd9797
