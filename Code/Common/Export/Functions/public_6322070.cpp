#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6322070);
CLANG_FORWARD_PROC_SYMBOL(public_6323930);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6322152 _public_6322152
#define public_6322176 _public_6322176
#define public_63221a0 _public_63221a0
#define public_63221aa _public_63221aa
#define public_63221c0 _public_63221c0
#define public_63221cc _public_63221cc
#define public_63221d9 _public_63221d9

PROC_DECLARE(0x6322070, internal_6322070, public_6322070);
extern "C" NAKED register_t __cdecl internal_6322070()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov ecx, 5
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [ebx+0x14], eax
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ebx+0x18], ecx
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [ebx+0x1C], edx
        mov al, byte ptr ss : [ebp+0x20]
        lea esi, ds:[ebx+0x20]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ss : [ebp+0x21]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ss : [ebp+0x2C]
        push 0x18
        mov byte ptr ds : [esi+0xC], dl
        call public_6391d9c
        xor edx, edx
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [eax+0x15], dl
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edi, dword ptr ds : [esi+8]
        push 0x18
        call public_6391d9c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], 0
        mov byte ptr ds : [eax+0x15], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov edx, dword ptr ss : [ebp+0x24]
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x18], ecx
        mov cl, byte ptr ds : [edi+0x15]
        add esp, 8
        test cl, cl
        jne public_6322176
        xor edx, edx
        mov dl, byte ptr ds : [edi+0x14]
        mov ecx, esi
        push edx
        push eax
        call public_626b3a0
        lea ecx, ds:[edi+0xC]
        mov dword ptr ss : [esp+0x18], eax
        push ecx
        add eax, 0xC
        push eax
        call public_62bee40
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        cmp edx, ecx
        jne public_6322152
        mov dword ptr ss : [esp+0x10], eax
        public_6322152 : nop
        push eax
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, esi
        call public_6323930
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call public_6323930
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], eax
        public_6322176 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp+0x30]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_63221d9
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], 0
        jne public_63221aa
        nop 
        lea esp, ss:[esp]
        public_63221a0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], 0
        je public_63221a0
        public_63221aa : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_63221cc
        lea esp, ss:[esp]
        public_63221c0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        je public_63221c0
        public_63221cc : nop
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_63221d9 : nop
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
        UNREACHABLE_TRAP(0x6322070)
    }
}

#undef public_6322152
#undef public_6322176
#undef public_63221a0
#undef public_63221aa
#undef public_63221c0
#undef public_63221cc
#undef public_63221d9
