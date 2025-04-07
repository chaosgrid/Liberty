#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6f14980);
CLANG_FORWARD_PROC_SYMBOL(public_6f14e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f15560);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ec5b64 _public_6ec5b64
#define public_6ec5b7d _public_6ec5b7d
#define public_6ec5b81 _public_6ec5b81
#define public_6ec5baa _public_6ec5baa
#define public_6ec5bf6 _public_6ec5bf6
#define public_6ec5c0a _public_6ec5c0a
#define public_6ec5c48 _public_6ec5c48
#define public_6ec5c6d _public_6ec5c6d
#define public_6ec5c88 _public_6ec5c88
#define public_6ec5ca7 _public_6ec5ca7

PROC_DECLARE(0x6ec5b40, internal_6ec5b40, public_6ec5b40);
extern "C" NAKED register_t __cdecl internal_6ec5b40()
{
    __asm
    {
        sub esp, 0x4C
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax+0xA8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], edx
        cmp edx, dword ptr ds : [eax+0xA8]
        je public_6ec5ca7
        push ebp
        push esi
        push edi
        public_6ec5b64 : nop
        mov esi, dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [esi+0x180]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6ec5c88
        jmp public_6ec5b81
        public_6ec5b7d : nop
        mov edx, dword ptr ss : [esp+0x10]
        public_6ec5b81 : nop
        mov eax, dword ptr ds : [eax+8]
        cmp eax, dword ptr ds : [ebx+0xC]
        je public_6ec5baa
        push 0
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+0x180]
        jne public_6ec5b7d
        jmp public_6ec5c88
        public_6ec5baa : nop
        mov edx, dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 0xD4
        push edx
        call public_6f15560
        xor esi, esi
        cmp eax, esi
        je public_6ec5c88
        mov cl, byte ptr ds : [ebx+0x10]
        test cl, cl
        mov byte ptr ds : [eax+0x48], cl
        je public_6ec5c6d
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x10]
        add eax, 0xD8
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ss : [esp+0x2C], 0
        jne public_6ec5bf6
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ss : [esp+0x2C], 0
        jmp public_6ec5c0a
        public_6ec5bf6 : nop
        push eax
        lea ecx, ss:[esp+0x30]
        push 0x30
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x28], eax
        public_6ec5c0a : nop
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ss:[esp+0x28]
        push edx
        call public_6f14980
        test eax, eax
        jne public_6ec5c88
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x24], esi
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x20], ecx
        mov edi, dword ptr ds : [esi+0x20]
        mov ebp, dword ptr ds : [edi+4]
        add esi, 0x1C
        push 0x10
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6ec5c48
        mov ebp, eax
        public_6ec5c48 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_6f305b0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+8], eax
        jmp public_6ec5c88
        public_6ec5c6d : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [ebx+4]
        push edx
        call public_6f14e30
        public_6ec5c88 : nop
        lea ecx, ss:[esp+0x10]
        call public_6f1fa00
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xA8]
        jne public_6ec5b64
        pop edi
        pop esi
        pop ebp
        public_6ec5ca7 : nop
        mov al, 1
        pop ebx
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x6ec5b40)
    }
}

#undef public_6ec5b64
#undef public_6ec5b7d
#undef public_6ec5b81
#undef public_6ec5baa
#undef public_6ec5bf6
#undef public_6ec5c0a
#undef public_6ec5c48
#undef public_6ec5c6d
#undef public_6ec5c88
#undef public_6ec5ca7
