#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3b90);
CLANG_FORWARD_PROC_SYMBOL(public_65d4540);
CLANG_FORWARD_PROC_SYMBOL(public_65d4790);
CLANG_FORWARD_PROC_SYMBOL(public_65d5020);

#define public_65d3baa _public_65d3baa
#define public_65d3bc4 _public_65d3bc4
#define public_65d3bc7 _public_65d3bc7
#define public_65d3bcc _public_65d3bcc
#define public_65d3bf7 _public_65d3bf7
#define public_65d3c2a _public_65d3c2a
#define public_65d3c33 _public_65d3c33
#define public_65d3c68 _public_65d3c68

PROC_DECLARE(0x65d3b90, internal_65d3b90, public_65d3b90);
extern "C" NAKED register_t __cdecl internal_65d3b90()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr ss : [esp+0x1C]
        mov al, 1
        mov ebx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ecx
        je public_65d3bcc
        public_65d3baa : nop
        lea eax, ds:[esi+0xC]
        mov ecx, ebp
        push eax
        mov ebx, esi
        call public_65d5020
        test eax, eax
        setl al
        test al, al
        je public_65d3bc4
        mov esi, dword ptr ds : [esi]
        jmp public_65d3bc7
        public_65d3bc4 : nop
        mov esi, dword ptr ds : [esi+8]
        public_65d3bc7 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_65d3baa
        public_65d3bcc : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_65d3bf7
        push ebp
        push ebx
        lea ecx, ss:[esp+0x18]
        push esi
        push ecx
        mov ecx, edi
        call public_65d4540
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        mov dl, 1
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_65d3bf7 : nop
        test al, al
        mov dword ptr ss : [esp+0x1C], ebx
        je public_65d3c33
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx]
        jne public_65d3c2a
        push ebp
        push ebx
        lea eax, ss:[esp+0x18]
        push esi
        push eax
        mov ecx, edi
        call public_65d4540
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        mov dl, 1
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_65d3c2a : nop
        lea ecx, ss:[esp+0x1C]
        call public_65d4790
        public_65d3c33 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ebp
        add ecx, 0xC
        call public_65d5020
        test eax, eax
        jge public_65d3c68
        push ebp
        push ebx
        lea edx, ss:[esp+0x18]
        push esi
        push edx
        mov ecx, edi
        call public_65d4540
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        mov dl, 1
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_65d3c68 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        xor dl, dl
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x65d3b90)
    }
}

#undef public_65d3baa
#undef public_65d3bc4
#undef public_65d3bc7
#undef public_65d3bcc
#undef public_65d3bf7
#undef public_65d3c2a
#undef public_65d3c33
#undef public_65d3c68
