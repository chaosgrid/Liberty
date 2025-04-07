#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d08a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d9b0);

#define public_6d0da47 _public_6d0da47
#define public_6d0da5a _public_6d0da5a
#define public_6d0db24 _public_6d0db24

PROC_DECLARE(0x6d0d9b0, internal_6d0d9b0, public_6d0d9b0);
extern "C" NAKED register_t __cdecl internal_6d0d9b0()
{
    __asm
    {
        sub esp, 0x78
        push ebx
        xor ebx, ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov byte ptr ss : [esp+0x84], 1
        mov byte ptr ss : [esp+0x85], bl
        call dword ptr ds : [public_6d642ec]
        mov edx, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [public_6d642fc]
        mov ecx, edx
        and ecx, 0x3FFFFFFF
        inc edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ss : [esp+0x94]
        push eax
        mov dword ptr ss : [esp+0x20], ecx
        call edi
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        mov dword ptr ss : [esp+0x28], esi
        je public_6d0db24
        mov eax, dword ptr ss : [esp+0x90]
        cmp eax, ebx
        mov ecx, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ss : [esp+0x98]
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], edx
        je public_6d0da47
        push eax
        call edi
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jne public_6d0da5a
        public_6d0da47 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x1C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        je public_6d0db24
        public_6d0da5a : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ds : [edx]
        mov esi, dword ptr ds : [public_6d6469c]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x48], eax
        lea eax, ss:[esp+0x10]
        push 0x41A00000
        push eax
        mov dword ptr ss : [esp+0x54], ecx
        mov dword ptr ss : [esp+0x58], edx
        mov dword ptr ss : [esp+0x7C], 0x3F800000
        mov dword ptr ss : [esp+0x6C], 0x3F800000
        mov dword ptr ss : [esp+0x5C], 0x3F800000
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x60], 0
        call esi
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x44], ecx
        lea ecx, ss:[esp+0x18]
        push 0x40400000
        push ecx
        mov dword ptr ss : [esp+0x50], edx
        mov dword ptr ss : [esp+0x54], eax
        call esi
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        add esp, 0x10
        mov dword ptr ss : [esp+0x78], edx
        mov edx, dword ptr ds : [eax+8]
        push 1
        lea eax, ss:[esp+0x20]
        push eax
        push 3
        mov dword ptr ss : [esp+0x88], ecx
        push ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x90], edx
        call public_6d08a40
        public_6d0db24 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x78
        ret 0x10
        UNREACHABLE_TRAP(0x6d0d9b0)
    }
}

#undef public_6d0da47
#undef public_6d0da5a
#undef public_6d0db24
