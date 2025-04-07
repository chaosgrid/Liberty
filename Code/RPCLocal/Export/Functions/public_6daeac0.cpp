#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6daeb0f _public_6daeb0f
#define public_6daeb26 _public_6daeb26
#define public_6daeb3c _public_6daeb3c
#define public_6daeb5f _public_6daeb5f
#define public_6daeb75 _public_6daeb75
#define public_6daebb5 _public_6daebb5
#define public_6daebc8 _public_6daebc8
#define public_6daebe7 _public_6daebe7
#define public_6daebfa _public_6daebfa
#define public_6daec19 _public_6daec19
#define public_6daec2c _public_6daec2c
#define public_6daec58 _public_6daec58
#define public_6daec89 _public_6daec89

PROC_DECLARE(0x6daeac0, internal_6daeac0, public_6daeac0);
extern "C" NAKED register_t __cdecl internal_6daeac0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
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
        je public_6daeb0f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6daeb0f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daeb26
        mov dword ptr ds : [esi+0xC], 0x16
        public_6daeb26 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daeb3c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6daeb3c : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daeb5f
        mov dword ptr ds : [esi+0xC], 0x16
        public_6daeb5f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daeb75
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6daeb75 : nop
        mov edx, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov ebp, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edi+0x28]
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6daebb5
        mov dword ptr ds : [esi+0xC], ebp
        public_6daebb5 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daebc8
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6daebc8 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daebe7
        mov dword ptr ds : [esi+0xC], ebp
        public_6daebe7 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daebfa
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6daebfa : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daec19
        mov dword ptr ds : [esi+0xC], ebp
        public_6daec19 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daec2c
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6daec2c : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x38]
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
        je public_6daec58
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6daec58 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x28]
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
        jbe public_6daec89
        mov dword ptr ds : [ecx+0x10], esi
        public_6daec89 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6daeac0)
    }
}

#undef public_6daeb0f
#undef public_6daeb26
#undef public_6daeb3c
#undef public_6daeb5f
#undef public_6daeb75
#undef public_6daebb5
#undef public_6daebc8
#undef public_6daebe7
#undef public_6daebfa
#undef public_6daec19
#undef public_6daec2c
#undef public_6daec58
#undef public_6daec89
