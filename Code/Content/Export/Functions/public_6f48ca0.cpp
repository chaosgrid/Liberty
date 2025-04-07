#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f48ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50140);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d50);

#define public_6f48ce1 _public_6f48ce1
#define public_6f48cf8 _public_6f48cf8
#define public_6f48d00 _public_6f48d00
#define public_6f48d12 _public_6f48d12
#define public_6f48d4c _public_6f48d4c
#define public_6f48d56 _public_6f48d56
#define public_6f48d5f _public_6f48d5f
#define public_6f48d66 _public_6f48d66
#define public_6f48d73 _public_6f48d73
#define public_6f48d76 _public_6f48d76

PROC_DECLARE(0x6f48ca0, internal_6f48ca0, public_6f48ca0);
extern "C" NAKED register_t __cdecl internal_6f48ca0()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        test ecx, ecx
        je public_6f48d76
        mov esi, dword ptr ds : [edi+0xF0]
        mov ebp, dword ptr ss : [esp+0x20]
        push ebx
        mov ebx, dword ptr ds : [edi+0xF4]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], 0x29A
        mov dword ptr ss : [esp+0x1C], 1
        je public_6f48d00
        public_6f48ce1 : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6f50140
        test al, al
        jne public_6f48cf8
        add esi, 0x10
        cmp esi, ebx
        jne public_6f48ce1
        public_6f48cf8 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        public_6f48d00 : nop
        mov edx, dword ptr ds : [edi+0xF4]
        cmp esi, edx
        pop ebx
        je public_6f48d12
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jne public_6f48d4c
        public_6f48d12 : nop
        mov eax, dword ptr ds : [edi+0xF4]
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x10], ecx
        push edx
        lea ecx, ds:[edi+0xEC]
        push 1
        push eax
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x20], 1
        mov dword ptr ss : [esp+0x24], 0
        call public_6f69d50
        pop edi
        pop esi
        pop ebp
        add esp, 0x10
        ret 8
        public_6f48d4c : nop
        mov eax, dword ptr ds : [edi+0xF0]
        cmp eax, edx
        je public_6f48d66
        public_6f48d56 : nop
        cmp dword ptr ds : [eax], ebp
        jne public_6f48d5f
        cmp dword ptr ds : [eax+4], ecx
        je public_6f48d66
        public_6f48d5f : nop
        add eax, 0x10
        cmp eax, edx
        jne public_6f48d56
        public_6f48d66 : nop
        cmp dword ptr ds : [eax+0xC], 1
        je public_6f48d73
        mov dword ptr ds : [eax+0xC], 0
        public_6f48d73 : nop
        inc dword ptr ds : [eax+8]
        public_6f48d76 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6f48ca0)
    }
}

#undef public_6f48ce1
#undef public_6f48cf8
#undef public_6f48d00
#undef public_6f48d12
#undef public_6f48d4c
#undef public_6f48d56
#undef public_6f48d5f
#undef public_6f48d66
#undef public_6f48d73
#undef public_6f48d76
