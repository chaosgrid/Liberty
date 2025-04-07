#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6daab8f _public_6daab8f
#define public_6daaba7 _public_6daaba7
#define public_6daabba _public_6daabba
#define public_6daabd9 _public_6daabd9
#define public_6daabec _public_6daabec
#define public_6daac0b _public_6daac0b
#define public_6daac1e _public_6daac1e
#define public_6daac3d _public_6daac3d
#define public_6daac50 _public_6daac50
#define public_6daac8f _public_6daac8f
#define public_6daaca5 _public_6daaca5
#define public_6daacf9 _public_6daacf9
#define public_6daad2a _public_6daad2a

PROC_DECLARE(0x6daab40, internal_6daab40, public_6daab40);
extern "C" NAKED register_t __cdecl internal_6daab40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
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
        je public_6daab8f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6daab8f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x16
        jbe public_6daaba7
        mov dword ptr ds : [esi+0xC], ecx
        public_6daaba7 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daabba
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6daabba : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6daabd9
        mov dword ptr ds : [esi+0xC], ecx
        public_6daabd9 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daabec
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6daabec : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6daac0b
        mov dword ptr ds : [esi+0xC], ecx
        public_6daac0b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daac1e
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6daac1e : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 0xC
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6daac3d
        mov dword ptr ds : [esi+0xC], ecx
        public_6daac3d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daac50
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6daac50 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [edi+0x30]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x34]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daac8f
        mov dword ptr ds : [esi+0xC], 0x16
        public_6daac8f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daaca5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6daaca5 : nop
        mov ebp, dword ptr ds : [ebx]
        lea ecx, ds:[edi+0x38]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx+0xC]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        call public_6d8f4f0
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add ebp, 0x10
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6daacf9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6daacf9 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x2C]
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
        jbe public_6daad2a
        mov dword ptr ds : [ecx+0x10], esi
        public_6daad2a : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6daab40)
    }
}

#undef public_6daab8f
#undef public_6daaba7
#undef public_6daabba
#undef public_6daabd9
#undef public_6daabec
#undef public_6daac0b
#undef public_6daac1e
#undef public_6daac3d
#undef public_6daac50
#undef public_6daac8f
#undef public_6daaca5
#undef public_6daacf9
#undef public_6daad2a
