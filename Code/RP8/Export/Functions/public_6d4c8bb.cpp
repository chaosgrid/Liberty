#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c8bb);

#define public_6d4c8e6 _public_6d4c8e6
#define public_6d4c8ea _public_6d4c8ea
#define public_6d4c8f7 _public_6d4c8f7
#define public_6d4c8fa _public_6d4c8fa
#define public_6d4c94a _public_6d4c94a
#define public_6d4c97c _public_6d4c97c
#define public_6d4c9c0 _public_6d4c9c0

PROC_DECLARE(0x6d4c8bb, internal_6d4c8bb, public_6d4c8bb);
extern "C" NAKED register_t __cdecl internal_6d4c8bb()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [eax]
        and dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x110], 0
        jle public_6d4c9c0
        mov eax, dword ptr ss : [ebp+0x10]
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0xC], eax
        public_6d4c8e6 : nop
        and dword ptr ss : [ebp+0x14], 0
        public_6d4c8ea : nop
        cmp dword ptr ss : [ebp+0x14], 0
        mov edx, dword ptr ds : [eax]
        jne public_6d4c8f7
        mov edi, dword ptr ds : [eax-4]
        jmp public_6d4c8fa
        public_6d4c8f7 : nop
        mov edi, dword ptr ds : [eax+4]
        public_6d4c8fa : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-0x14]
        mov esi, dword ptr ds : [eax+ecx*4]
        movzx ecx, byte ptr ds : [edx]
        movzx eax, byte ptr ds : [edi]
        inc dword ptr ss : [ebp-4]
        lea ecx, ds:[ecx+ecx*2]
        add ecx, eax
        inc edi
        movzx ebx, byte ptr ds : [edi]
        inc edx
        movzx eax, byte ptr ds : [edx]
        lea eax, ds:[eax+eax*2]
        add eax, ebx
        lea ebx, ds:[ecx*4+8]
        sar ebx, 4
        mov byte ptr ds : [esi], bl
        inc edi
        inc edx
        lea ebx, ds:[eax+ecx*2]
        lea ebx, ds:[ecx+ebx+7]
        sar ebx, 4
        inc esi
        mov byte ptr ds : [esi], bl
        mov ebx, dword ptr ss : [ebp+0xC]
        mov ebx, dword ptr ds : [ebx+0x28]
        inc esi
        dec ebx
        dec ebx
        mov dword ptr ss : [ebp-8], eax
        je public_6d4c97c
        mov dword ptr ss : [ebp-0x10], ebx
        public_6d4c94a : nop
        movzx eax, byte ptr ds : [edx]
        movzx ebx, byte ptr ds : [edi]
        lea eax, ds:[eax+eax*2]
        add eax, ebx
        mov ebx, dword ptr ss : [ebp-8]
        lea ebx, ds:[ebx+ebx*2]
        lea ecx, ds:[ebx+ecx+8]
        sar ecx, 4
        mov byte ptr ds : [esi], cl
        inc edi
        inc edx
        inc esi
        lea ecx, ds:[ebx+eax+7]
        sar ecx, 4
        mov byte ptr ds : [esi], cl
        mov ecx, dword ptr ss : [ebp-8]
        inc esi
        dec dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-8], eax
        jne public_6d4c94a
        public_6d4c97c : nop
        lea ecx, ds:[ecx+eax*2]
        lea ecx, ds:[eax+ecx+8]
        lea eax, ds:[eax*4+7]
        sar eax, 4
        sar ecx, 4
        inc dword ptr ss : [ebp+0x14]
        cmp dword ptr ss : [ebp+0x14], 2
        mov byte ptr ds : [esi], cl
        mov byte ptr ds : [esi+1], al
        mov eax, dword ptr ss : [ebp-0xC]
        jl public_6d4c8ea
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-4]
        add eax, 4
        cmp edx, dword ptr ds : [ecx+0x110]
        mov dword ptr ss : [ebp-0xC], eax
        jl public_6d4c8e6
        pop edi
        pop esi
        pop ebx
        public_6d4c9c0 : nop
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4c8bb)
    }
}

#undef public_6d4c8e6
#undef public_6d4c8ea
#undef public_6d4c8f7
#undef public_6d4c8fa
#undef public_6d4c94a
#undef public_6d4c97c
#undef public_6d4c9c0
