#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dae667 _public_6dae667
#define public_6dae67e _public_6dae67e
#define public_6dae690 _public_6dae690
#define public_6dae6b3 _public_6dae6b3
#define public_6dae6c5 _public_6dae6c5
#define public_6dae6ea _public_6dae6ea
#define public_6dae6fc _public_6dae6fc
#define public_6dae727 _public_6dae727
#define public_6dae758 _public_6dae758

PROC_DECLARE(0x6dae620, internal_6dae620, public_6dae620);
extern "C" NAKED register_t __cdecl internal_6dae620()
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
        je public_6dae667
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dae667 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dae67e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6dae67e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dae690
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dae690 : nop
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
        jbe public_6dae6b3
        mov dword ptr ds : [esi+0xC], 0x16
        public_6dae6b3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dae6c5
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dae6c5 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x24]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dae6ea
        mov dword ptr ds : [esi+0xC], 0x16
        public_6dae6ea : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dae6fc
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dae6fc : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dae727
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dae727 : nop
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
        jbe public_6dae758
        mov dword ptr ds : [ecx+0x10], esi
        public_6dae758 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6dae620)
    }
}

#undef public_6dae667
#undef public_6dae67e
#undef public_6dae690
#undef public_6dae6b3
#undef public_6dae6c5
#undef public_6dae6ea
#undef public_6dae6fc
#undef public_6dae727
#undef public_6dae758
