#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_6282f00);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6280c97 _public_6280c97
#define public_6280cb8 _public_6280cb8
#define public_6280ce0 _public_6280ce0
#define public_6280cea _public_6280cea
#define public_6280d00 _public_6280d00
#define public_6280d0c _public_6280d0c
#define public_6280d19 _public_6280d19

PROC_DECLARE(0x6280bd0, internal_6280bd0, public_6280bd0);
extern "C" NAKED register_t __cdecl internal_6280bd0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], eax
        mov cl, byte ptr ds : [edi+4]
        lea esi, ds:[ebx+4]
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ds : [edi+5]
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ds : [edi+0x10]
        push 0x18
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ds : [esi+0xC], al
        call public_6391d9c
        xor edx, edx
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [eax+0x15], dl
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov ebp, dword ptr ds : [esi+8]
        push 0x18
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebp
        mov byte ptr ds : [eax+0x14], 0
        mov byte ptr ds : [eax+0x15], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov ecx, dword ptr ds : [edi+8]
        mov ebp, dword ptr ds : [ecx+4]
        mov cl, byte ptr ss : [ebp+0x15]
        add esp, 8
        test cl, cl
        mov dword ptr ss : [esp+0x18], edx
        jne public_6280cb8
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x14]
        push ecx
        push eax
        mov ecx, esi
        call public_626b3a0
        mov ebx, eax
        lea edx, ss:[ebp+0xC]
        push edx
        lea eax, ds:[ebx+0xC]
        push eax
        call public_62bee40
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], edx
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        cmp eax, ecx
        jne public_6280c97
        mov dword ptr ss : [esp+0x18], ebx
        public_6280c97 : nop
        mov ecx, dword ptr ss : [ebp]
        push ebx
        push ecx
        mov ecx, esi
        call public_6282f00
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ss : [ebp+8]
        push ebx
        push edx
        mov ecx, esi
        call public_6282f00
        mov dword ptr ds : [ebx+8], eax
        mov ebx, dword ptr ss : [esp+0x10]
        public_6280cb8 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6280d19
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], 0
        jne public_6280cea
        lea ecx, ds:[ecx]
        public_6280ce0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], 0
        je public_6280ce0
        public_6280cea : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_6280d0c
        lea esp, ss:[esp]
        public_6280d00 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        je public_6280d00
        public_6280d0c : nop
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_6280d19 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6280bd0)
    }
}

#undef public_6280c97
#undef public_6280cb8
#undef public_6280ce0
#undef public_6280cea
#undef public_6280d00
#undef public_6280d0c
#undef public_6280d19
