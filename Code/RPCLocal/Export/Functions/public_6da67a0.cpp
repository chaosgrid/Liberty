#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da67e7 _public_6da67e7
#define public_6da67fe _public_6da67fe
#define public_6da6810 _public_6da6810
#define public_6da6833 _public_6da6833
#define public_6da6845 _public_6da6845
#define public_6da6868 _public_6da6868
#define public_6da687a _public_6da687a
#define public_6da68a3 _public_6da68a3
#define public_6da68d4 _public_6da68d4

PROC_DECLARE(0x6da67a0, internal_6da67a0, public_6da67a0);
extern "C" NAKED register_t __cdecl internal_6da67a0()
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
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da67e7
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da67e7 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da67fe
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da67fe : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da6810
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da6810 : nop
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
        jbe public_6da6833
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da6833 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da6845
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da6845 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x26]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da6868
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da6868 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da687a
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da687a : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x24]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da68a3
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da68a3 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6da16b0
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
        jbe public_6da68d4
        mov dword ptr ds : [ecx+0x10], esi
        public_6da68d4 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6da67a0)
    }
}

#undef public_6da67e7
#undef public_6da67fe
#undef public_6da6810
#undef public_6da6833
#undef public_6da6845
#undef public_6da6868
#undef public_6da687a
#undef public_6da68a3
#undef public_6da68d4
