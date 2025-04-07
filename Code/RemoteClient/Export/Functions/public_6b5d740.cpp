#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5d78f _public_6b5d78f
#define public_6b5d7a7 _public_6b5d7a7
#define public_6b5d7ba _public_6b5d7ba
#define public_6b5d7e4 _public_6b5d7e4
#define public_6b5d7f7 _public_6b5d7f7
#define public_6b5d814 _public_6b5d814
#define public_6b5d827 _public_6b5d827
#define public_6b5d846 _public_6b5d846
#define public_6b5d859 _public_6b5d859
#define public_6b5d87a _public_6b5d87a
#define public_6b5d88d _public_6b5d88d
#define public_6b5d8da _public_6b5d8da
#define public_6b5d8f0 _public_6b5d8f0
#define public_6b5d938 _public_6b5d938
#define public_6b5d94e _public_6b5d94e
#define public_6b5d98d _public_6b5d98d
#define public_6b5d9a3 _public_6b5d9a3
#define public_6b5d9cb _public_6b5d9cb
#define public_6b5d9ee _public_6b5d9ee
#define public_6b5da21 _public_6b5da21

PROC_DECLARE(0x6b5d740, internal_6b5d740, public_6b5d740);
extern "C" NAKED register_t __cdecl internal_6b5d740()
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
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5d78f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d78f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6b5d7a7
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5d7a7 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5d7ba
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d7ba : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+0x24]
        add eax, 4
        push edx
        mov dword ptr ds : [ebx], eax
        call dword ptr ds : [public_6b6b014]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 2
        add esp, 4
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6b5d7e4
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5d7e4 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6b5d7f7
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d7f7 : nop
        mov ecx, dword ptr ds : [ebx]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5d814
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5d814 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5d827
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d827 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5d846
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5d846 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5d859
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d859 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x2C]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5d87a
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5d87a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5d88d
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d88d : nop
        mov eax, dword ptr ds : [edi+0x40]
        mov ecx, dword ptr ds : [edi+0x44]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x48]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        call public_6b3a160
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        je public_6b5d9cb
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5d8da
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5d8da : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5d8f0
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d8f0 : nop
        mov ebp, dword ptr ds : [ebx]
        lea ecx, ds:[edi+0x30]
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
        call public_6b39ec0
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5d938
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5d938 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5d94e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d94e : nop
        mov edx, dword ptr ds : [edi+0x4C]
        mov ecx, dword ptr ds : [edi+0x54]
        mov ebp, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edi+0x50]
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6b3a160
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5d98d
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5d98d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5d9a3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d9a3 : nop
        mov eax, dword ptr ds : [edi+0x58]
        mov ecx, dword ptr ds : [edi+0x5C]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x60]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        call public_6b3a160
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        public_6b5d9cb : nop
        mov ecx, dword ptr ds : [edi+0x14]
        push esi
        push ecx
        push ebx
        mov ecx, edi
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5d9ee
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d9ee : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
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
        jbe public_6b5da21
        mov dword ptr ds : [ecx+0x10], esi
        public_6b5da21 : nop
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
        UNREACHABLE_TRAP(0x6b5d740)
    }
}

#undef public_6b5d78f
#undef public_6b5d7a7
#undef public_6b5d7ba
#undef public_6b5d7e4
#undef public_6b5d7f7
#undef public_6b5d814
#undef public_6b5d827
#undef public_6b5d846
#undef public_6b5d859
#undef public_6b5d87a
#undef public_6b5d88d
#undef public_6b5d8da
#undef public_6b5d8f0
#undef public_6b5d938
#undef public_6b5d94e
#undef public_6b5d98d
#undef public_6b5d9a3
#undef public_6b5d9cb
#undef public_6b5d9ee
#undef public_6b5da21
