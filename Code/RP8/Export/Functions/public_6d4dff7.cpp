#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4dff7);

#define public_6d4e023 _public_6d4e023
#define public_6d4e09e _public_6d4e09e
#define public_6d4e0ab _public_6d4e0ab
#define public_6d4e0b8 _public_6d4e0b8
#define public_6d4e0c6 _public_6d4e0c6
#define public_6d4e10e _public_6d4e10e

PROC_DECLARE(0x6d4dff7, internal_6d4dff7, public_6d4dff7);
extern "C" NAKED register_t __cdecl internal_6d4dff7()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x228
        and dword ptr ss : [ebp-8], 0
        cmp dword ptr ss : [ebp+0x18], 0
        push edi
        mov ecx, 0x80
        mov eax, 0x7FFFFFFF
        lea edi, ss:[ebp-0x228]
        rep stosd
        jle public_6d4e10e
        push ebx
        push esi
        public_6d4e023 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        mov ecx, dword ptr ss : [ebp-8]
        movzx ebx, byte ptr ds : [ecx+eax]
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+0x74]
        mov eax, dword ptr ds : [edx]
        movzx eax, byte ptr ds : [ebx+eax]
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, eax
        mov eax, dword ptr ds : [edx+4]
        movzx esi, byte ptr ds : [eax+ebx]
        mov eax, dword ptr ss : [ebp+0x10]
        sub eax, esi
        lea esi, ds:[eax+eax*2]
        mov eax, dword ptr ds : [edx+8]
        movzx eax, byte ptr ds : [eax+ebx]
        mov edx, dword ptr ss : [ebp+0x14]
        sub edx, eax
        mov dword ptr ss : [ebp-4], esi
        imul esi, esi
        mov eax, edx
        imul eax, edx
        add eax, esi
        shl ecx, 1
        mov esi, ecx
        imul esi, ecx
        add eax, esi
        mov esi, dword ptr ss : [ebp-4]
        add edx, 4
        lea edi, ss:[ebp-0x228]
        lea esi, ds:[esi+esi*2+0x12]
        add ecx, 8
        shl esi, 3
        shl edx, 4
        mov dword ptr ss : [ebp-0x10], edi
        mov edi, dword ptr ss : [ebp+0x20]
        shl ecx, 5
        mov dword ptr ss : [ebp-0x1C], edi
        mov dword ptr ss : [ebp-4], ecx
        mov dword ptr ss : [ebp-0x24], 4
        public_6d4e09e : nop
        mov dword ptr ss : [ebp-0x18], eax
        mov dword ptr ss : [ebp-0xC], esi
        mov dword ptr ss : [ebp-0x28], 8
        public_6d4e0ab : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x14], edx
        mov dword ptr ss : [ebp-0x20], 4
        public_6d4e0b8 : nop
        mov edi, dword ptr ss : [ebp-0x10]
        cmp ecx, dword ptr ds : [edi]
        jge public_6d4e0c6
        mov dword ptr ds : [edi], ecx
        mov edi, dword ptr ss : [ebp-0x1C]
        mov byte ptr ds : [edi], bl
        public_6d4e0c6 : nop
        add ecx, dword ptr ss : [ebp-0x14]
        add dword ptr ss : [ebp-0x14], 0x80
        add dword ptr ss : [ebp-0x10], 4
        inc dword ptr ss : [ebp-0x1C]
        dec dword ptr ss : [ebp-0x20]
        jne public_6d4e0b8
        mov ecx, dword ptr ss : [ebp-0xC]
        add dword ptr ss : [ebp-0x18], ecx
        add dword ptr ss : [ebp-0xC], 0x120
        dec dword ptr ss : [ebp-0x28]
        jne public_6d4e0ab
        add eax, dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-4], 0x200
        dec dword ptr ss : [ebp-0x24]
        jne public_6d4e09e
        inc dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-8]
        cmp eax, dword ptr ss : [ebp+0x18]
        jl public_6d4e023
        pop esi
        pop ebx
        public_6d4e10e : nop
        pop edi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4dff7)
    }
}

#undef public_6d4e023
#undef public_6d4e09e
#undef public_6d4e0ab
#undef public_6d4e0b8
#undef public_6d4e0c6
#undef public_6d4e10e
