#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52770);
CLANG_FORWARD_PROC_SYMBOL(public_6f52890);
CLANG_FORWARD_PROC_SYMBOL(public_6f52dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f533b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f534c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53530);
CLANG_FORWARD_PROC_SYMBOL(public_6f537d0);

#define public_6f53820 _public_6f53820
#define public_6f5382d _public_6f5382d
#define public_6f5384e _public_6f5384e

PROC_DECLARE(0x6f537d0, internal_6f537d0, public_6f537d0);
extern "C" NAKED register_t __cdecl internal_6f537d0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [edi+8]
        push ebx
        call public_6f534c0
        mov edx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edx+8]
        mov esi, dword ptr ss : [esp+0x20]
        mov ecx, eax
        shl eax, 4
        mov dword ptr ds : [edx+eax], 0xFFFFFFFC
        mov edx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edx+8]
        mov ebp, dword ptr ds : [esi]
        mov dword ptr ds : [edx+eax+8], ebp
        mov eax, dword ptr ds : [esi+0x18]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6f53820
        push ecx
        push edi
        call public_6f533b0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6f53820 : nop
        xor ebp, ebp
        test eax, eax
        jle public_6f5384e
        lea eax, ds:[esi+0x24]
        mov dword ptr ss : [esp+0x18], eax
        public_6f5382d : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push edi
        call public_6f53530
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+0x18]
        add esp, 8
        inc ebp
        add ecx, 8
        cmp ebp, eax
        mov dword ptr ss : [esp+0x18], ecx
        jl public_6f5382d
        public_6f5384e : nop
        push 1
        push edi
        call public_6f52890
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        neg edx
        push edx
        push eax
        push 0x3A
        push edi
        call public_6f52dd0
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x18]
        push ecx
        push ebx
        call public_6f52770
        add esp, 0x20
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f537d0)
    }
}

#undef public_6f53820
#undef public_6f5382d
#undef public_6f5384e
