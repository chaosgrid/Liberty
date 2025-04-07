#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4795f0);
CLANG_FORWARD_PROC_SYMBOL(public_47e0e0);
CLANG_FORWARD_PROC_SYMBOL(public_47e460);
CLANG_FORWARD_PROC_SYMBOL(public_47e790);
CLANG_FORWARD_PROC_SYMBOL(public_4c6a50);

#define public_47e112 _public_47e112
#define public_47e130 _public_47e130
#define public_47e135 _public_47e135
#define public_47e161 _public_47e161
#define public_47e17f _public_47e17f
#define public_47e1c6 _public_47e1c6
#define public_47e1e1 _public_47e1e1
#define public_47e1e6 _public_47e1e6
#define public_47e245 _public_47e245
#define public_47e25d _public_47e25d

PROC_DECLARE(0x47e0e0, internal_47e0e0, public_47e0e0);
extern "C" NAKED register_t __cdecl internal_47e0e0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push ebx
        mov edi, ecx
        call public_4795f0
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, 0xFFFFFFFF
        jne public_47e112
        mov ecx, dword ptr ds : [edi+0x3D0]
        cmp ecx, ebx
        mov dword ptr ds : [edi+0x3C4], ebx
        je public_47e112
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 0x38
        call dword ptr ds : [eax+0xA8]
        public_47e112 : nop
        mov eax, dword ptr ds : [edi+0x360]
        cmp eax, ebx
        je public_47e130
        mov ecx, dword ptr ds : [eax+0x978]
        cmp ecx, 2
        je public_47e130
        cmp ecx, 3
        mov byte ptr ss : [esp+0x10], bl
        jne public_47e135
        public_47e130 : nop
        mov byte ptr ss : [esp+0x10], 1
        public_47e135 : nop
        mov ecx, dword ptr ds : [edi+0x3C4]
        add ecx, esi
        cmp eax, ebx
        mov dword ptr ds : [edi+0x4F4], ebx
        mov dword ptr ds : [edi+0x3A4], ecx
        je public_47e1c6
        push ebp
        mov ecx, edi
        mov ebp, 1
        call public_47e790
        cmp eax, ebx
        je public_47e161
        mov ebp, dword ptr ds : [eax+0x14]
        public_47e161 : nop
        cmp ebp, 1
        mov esi, dword ptr ds : [edi+0x360]
        jle public_47e17f
        mov ecx, dword ptr ds : [esi+0x9B8]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push 1
        push 0x37
        call dword ptr ds : [edx+0xA8]
        public_47e17f : nop
        mov ecx, dword ptr ds : [esi+0x9B8]
        push ebx
        push ebp
        mov dword ptr ds : [esi+0x988], ebp
        mov eax, dword ptr ds : [ecx]
        push 0x38
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x988]
        push ecx
        lea ebp, ds:[esi+0x508]
/*FIXUP push offset public_5d0ec4 @0x47e1a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push ebp
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0x9CC]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push ebx
        push ebp
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        pop ebp
        public_47e1c6 : nop
        mov ecx, edi
        call public_47e790
        mov esi, eax
        cmp esi, ebx
        je public_47e1e1
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_47e460
        add esp, 4
        jmp public_47e1e6
        public_47e1e1 : nop
        mov eax, 5
        public_47e1e6 : nop
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push esi
        lea ecx, ds:[edi+0x330]
        call public_4c6a50
        mov esi, dword ptr ds : [edi+0x360]
        cmp esi, ebx
        je public_47e25d
        push 5
        push ebx
        push ebx
        lea ecx, ds:[esi+0x330]
        mov dword ptr ds : [esi+0x3A4], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x4F4], ebx
        call public_4c6a50
        push ebx
        mov ecx, esi
        call public_4795f0
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, ebx
        je public_47e245
        mov dword ptr ds : [eax+0x4E8], ebx
        mov ecx, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [ecx+0x4EC], ebx
        public_47e245 : nop
        mov edx, dword ptr ds : [edi+0x360]
        mov dword ptr ds : [edx+0x4E8], ebx
        mov eax, dword ptr ds : [edi+0x360]
        mov dword ptr ds : [eax+0x4EC], ebx
        public_47e25d : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x47e0e0)
    }
}

#undef public_47e112
#undef public_47e130
#undef public_47e135
#undef public_47e161
#undef public_47e17f
#undef public_47e1c6
#undef public_47e1e1
#undef public_47e1e6
#undef public_47e245
#undef public_47e25d
