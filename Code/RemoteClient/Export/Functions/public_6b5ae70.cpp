#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5aeb7 _public_6b5aeb7
#define public_6b5aece _public_6b5aece
#define public_6b5aee0 _public_6b5aee0
#define public_6b5af03 _public_6b5af03
#define public_6b5af15 _public_6b5af15
#define public_6b5af3a _public_6b5af3a
#define public_6b5af4c _public_6b5af4c
#define public_6b5af79 _public_6b5af79
#define public_6b5afaa _public_6b5afaa

PROC_DECLARE(0x6b5ae70, internal_6b5ae70, public_6b5ae70);
extern "C" NAKED register_t __cdecl internal_6b5ae70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5aeb7
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5aeb7 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5aece
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5aece : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5aee0
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5aee0 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5af03
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5af03 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5af15
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5af15 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x24]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5af3a
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5af3a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5af4c
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5af4c : nop
        mov eax, dword ptr ds : [ebx]
        mov cx, word ptr ds : [edi+0x26]
        mov word ptr ds : [eax], cx
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add eax, 2
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5af79
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5af79 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6b5afaa
        mov dword ptr ds : [ecx+0x10], esi
        public_6b5afaa : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b5ae70)
    }
}

#undef public_6b5aeb7
#undef public_6b5aece
#undef public_6b5aee0
#undef public_6b5af03
#undef public_6b5af15
#undef public_6b5af3a
#undef public_6b5af4c
#undef public_6b5af79
#undef public_6b5afaa
