#include "RP8-PCH.h"


#define public_6d4a4df _public_6d4a4df
#define public_6d4a4fc _public_6d4a4fc
#define public_6d4a53d _public_6d4a53d
#define public_6d4a54a _public_6d4a54a
#define public_6d4a56f _public_6d4a56f
#define public_6d4a574 _public_6d4a574
#define public_6d4a576 _public_6d4a576

PROC_DECLARE(0x6d4a497, internal_6d4a497, public_6d4a497);
extern "C" NAKED register_t __cdecl internal_6d4a497()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        push ebx
        xor ebx, ebx
        cmp byte ptr ds : [esi+0xC8], bl
        push edi
        mov edi, dword ptr ds : [esi+0x184]
        mov byte ptr ss : [ebp-1], bl
        je public_6d4a574
        cmp dword ptr ds : [esi+0x8C], ebx
        je public_6d4a574
        cmp dword ptr ds : [edi+0x70], ebx
        jne public_6d4a4df
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[eax+eax*2]
        shl eax, 3
        push eax
        push 1
        push esi
        call dword ptr ds : [ecx]
        add esp, 0xC
        mov dword ptr ds : [edi+0x70], eax
        public_6d4a4df : nop
        cmp dword ptr ds : [esi+0x20], ebx
        mov eax, dword ptr ds : [edi+0x70]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [esi+0xC4]
        mov dword ptr ss : [ebp-0x10], ebx
        jle public_6d4a56f
        add eax, 0x4C
        mov dword ptr ss : [ebp-0xC], ebx
        mov dword ptr ss : [ebp-0x14], eax
        public_6d4a4fc : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_6d4a574
        cmp word ptr ds : [eax], bx
        je public_6d4a574
        cmp word ptr ds : [eax+2], bx
        je public_6d4a574
        cmp word ptr ds : [eax+0x10], bx
        je public_6d4a574
        cmp word ptr ds : [eax+0x20], bx
        je public_6d4a574
        cmp word ptr ds : [eax+0x12], bx
        je public_6d4a574
        cmp word ptr ds : [eax+4], bx
        je public_6d4a574
        mov eax, dword ptr ds : [esi+0x8C]
        add eax, dword ptr ss : [ebp-0xC]
        cmp dword ptr ds : [eax], ebx
        jl public_6d4a574
        mov edx, dword ptr ss : [ebp-8]
        push 5
        lea ecx, ds:[eax+4]
        sub edx, eax
        pop eax
        public_6d4a53d : nop
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx+ecx], edi
        cmp dword ptr ds : [ecx], ebx
        je public_6d4a54a
        mov byte ptr ss : [ebp-1], 1
        public_6d4a54a : nop
        add ecx, 4
        dec eax
        jne public_6d4a53d
        add dword ptr ss : [ebp-8], 0x18
        inc dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-0x10]
        add dword ptr ss : [ebp-0xC], 0x100
        add eax, 0x54
        cmp ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [ebp-0x14], eax
        jl public_6d4a4fc
        public_6d4a56f : nop
        mov al, byte ptr ss : [ebp-1]
        jmp public_6d4a576
        public_6d4a574 : nop
        xor al, al
        public_6d4a576 : nop
        pop edi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4a497)
    }
}

#undef public_6d4a4df
#undef public_6d4a4fc
#undef public_6d4a53d
#undef public_6d4a54a
#undef public_6d4a56f
#undef public_6d4a574
#undef public_6d4a576
