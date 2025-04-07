#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b74190);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

#define public_6b71fda _public_6b71fda
#define public_6b71fe5 _public_6b71fe5
#define public_6b7200d _public_6b7200d
#define public_6b7203b _public_6b7203b
#define public_6b7204a _public_6b7204a
#define public_6b7204c _public_6b7204c
#define public_6b72066 _public_6b72066

PROC_DECLARE(0x6b71f50, internal_6b71f50, public_6b71f50);
extern "C" NAKED register_t __cdecl internal_6b71f50()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        lea eax, ds:[esi+0x488]
        lea ecx, ds:[esi+0x480]
        push eax
        mov eax, dword ptr ds : [edi]
        lea edx, ds:[esi+0x478]
        push ecx
        push edx
        push eax
        call dword ptr ds : [public_6b79020]
        test eax, eax
        je public_6b72066
        mov ebp, dword ptr ds : [edi+8]
        xor ebx, ebx
        cmp ebp, ebx
        je public_6b72066
        mov ecx, dword ptr ds : [edi+0xC]
        cmp ecx, 0x38
        jbe public_6b72066
        mov dword ptr ds : [esi+4], ebp
        mov eax, dword ptr ss : [ebp+0x14]
        cmp eax, 0xC
        jne public_6b72066
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ecx
        jae public_6b72066
        cmp dword ptr ss : [ebp+0x18], ecx
        jae public_6b72066
        lea ecx, ds:[eax+ebp]
        cmp ecx, ebx
        je public_6b7204a
        mov edi, dword ptr ds : [esi+0x1C]
        cmp edi, ebx
        je public_6b71fe5
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_6b71fe5
        public_6b71fda : nop
        cmp dword ptr ds : [eax+0xC], ebx
        je public_6b7203b
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_6b71fda
        public_6b71fe5 : nop
        mov edi, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x10], offset public_6b791f4
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], ebx
        mov ebx, dword ptr ds : [edi+4]
        push 0x14
        call public_6b782ac
        add esp, 4
        mov dword ptr ds : [eax], edi
        test ebx, ebx
        jne public_6b7200d
        mov ebx, eax
        public_6b7200d : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push eax
        call public_6b74190
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [esi+0x14]
        add esp, 8
        inc edx
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [eax+4]
        add eax, 8
        jmp public_6b7204c
        public_6b7203b : nop
        dec edi
        add eax, 8
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ebx
        jmp public_6b7204c
        public_6b7204a : nop
        xor eax, eax
        public_6b7204c : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0xC], eax
        pop edi
        mov al, 1
        mov edx, dword ptr ds : [ecx+0x18]
        add edx, ebp
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        public_6b72066 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6b71f50)
    }
}

#undef public_6b71fda
#undef public_6b71fe5
#undef public_6b7200d
#undef public_6b7203b
#undef public_6b7204a
#undef public_6b7204c
#undef public_6b72066
