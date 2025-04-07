#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b55ef9 _public_6b55ef9
#define public_6b55f1a _public_6b55f1a
#define public_6b55f32 _public_6b55f32
#define public_6b55f42 _public_6b55f42
#define public_6b55f61 _public_6b55f61
#define public_6b55f71 _public_6b55f71
#define public_6b55f90 _public_6b55f90
#define public_6b55fa0 _public_6b55fa0
#define public_6b55fbf _public_6b55fbf
#define public_6b55fcf _public_6b55fcf
#define public_6b55ff8 _public_6b55ff8
#define public_6b5602b _public_6b5602b

PROC_DECLARE(0x6b55eb0, internal_6b55eb0, public_6b55eb0);
extern "C" NAKED register_t __cdecl internal_6b55eb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
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
        je public_6b55ef9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b55ef9 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        push ecx
        push esi
        lea edx, ds:[edi+0x20]
        push edx
        push ebx
        mov ecx, edi
        call public_6b4e8d0
        test eax, eax
        je public_6b55f1a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b55f1a : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6b55f32
        mov dword ptr ds : [esi+0xC], ebp
        public_6b55f32 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b55f42
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b55f42 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x50]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b55f61
        mov dword ptr ds : [esi+0xC], ebp
        public_6b55f61 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b55f71
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b55f71 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x54]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b55f90
        mov dword ptr ds : [esi+0xC], ebp
        public_6b55f90 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b55fa0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b55fa0 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x58]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b55fbf
        mov dword ptr ds : [esi+0xC], ebp
        public_6b55fbf : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b55fcf
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b55fcf : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b55ff8
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b55ff8 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6b5602b
        mov dword ptr ds : [ecx+0x10], esi
        public_6b5602b : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b55eb0)
    }
}

#undef public_6b55ef9
#undef public_6b55f1a
#undef public_6b55f32
#undef public_6b55f42
#undef public_6b55f61
#undef public_6b55f71
#undef public_6b55f90
#undef public_6b55fa0
#undef public_6b55fbf
#undef public_6b55fcf
#undef public_6b55ff8
#undef public_6b5602b
