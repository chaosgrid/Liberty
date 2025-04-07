#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d3420);
CLANG_FORWARD_PROC_SYMBOL(public_62d3d70);
CLANG_FORWARD_PROC_SYMBOL(public_62ec970);

#define public_62d3db9 _public_62d3db9
#define public_62d3de3 _public_62d3de3
#define public_62d3e0b _public_62d3e0b
#define public_62d3e18 _public_62d3e18
#define public_62d3e47 _public_62d3e47

PROC_DECLARE(0x62d3d70, internal_62d3d70, public_62d3d70);
extern "C" NAKED register_t __cdecl internal_62d3d70()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        mov ecx, ebx
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0xC4]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        mov byte ptr ss : [esp+0xB], 1
        jne public_62d3de3
        mov dword ptr ds : [esi+0xCC], eax
        mov eax, dword ptr ds : [esi+0xC0]
        cmp eax, 0xFFFFFFFF
        je public_62d3db9
        mov ecx, dword ptr ds : [esi+eax*4+0x174]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x5C]
        public_62d3db9 : nop
        mov eax, dword ptr ds : [esi+0x120]
        push 0
        push 0
        push eax
        mov ecx, esi
        call public_62d3420
        mov ecx, dword ptr ds : [esi+8]
        push 0
        add ecx, 0x1364
        call public_62ec970
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_62d3de3 : nop
        cmp dword ptr ds : [esi+0xC8], 1
        jne public_62d3e0b
        cmp eax, 1
        jne public_62d3e0b
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx+8]
        push ecx
        push 0
        push edx
        mov ecx, esi
        call public_62d3420
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_62d3e0b : nop
        push ebp
        push edi
        lea edi, ds:[esi+0x174]
        mov ebp, 0x15
        public_62d3e18 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x5C]
        add edi, 4
        dec ebp
        jne public_62d3e18
        cmp dword ptr ds : [ebx], 1
        pop edi
        pop ebp
        jne public_62d3e47
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi+0xCC]
        push ecx
        push 1
        push edx
        mov ecx, esi
        call public_62d3420
        pop esi
        pop ebx
        pop ecx
        ret 8
        public_62d3e47 : nop
        mov eax, dword ptr ds : [esi+0x120]
        push 0
        push 0
        push eax
        mov ecx, esi
        call public_62d3420
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62d3d70)
    }
}

#undef public_62d3db9
#undef public_62d3de3
#undef public_62d3e0b
#undef public_62d3e18
#undef public_62d3e47
