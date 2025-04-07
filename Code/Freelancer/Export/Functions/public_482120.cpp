#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4795f0);
CLANG_FORWARD_PROC_SYMBOL(public_47e0e0);
CLANG_FORWARD_PROC_SYMBOL(public_47e460);
CLANG_FORWARD_PROC_SYMBOL(public_47e790);
CLANG_FORWARD_PROC_SYMBOL(public_47f240);
CLANG_FORWARD_PROC_SYMBOL(public_482120);
CLANG_FORWARD_PROC_SYMBOL(public_483580);
CLANG_FORWARD_PROC_SYMBOL(public_4c6a50);
CLANG_FORWARD_PROC_SYMBOL(public_585f20);

#define public_482192 _public_482192
#define public_482197 _public_482197
#define public_4821b2 _public_4821b2
#define public_4821b7 _public_4821b7
#define public_4821ed _public_4821ed
#define public_48221d _public_48221d
#define public_48224b _public_48224b
#define public_482298 _public_482298

PROC_DECLARE(0x482120, internal_482120, public_482120);
extern "C" NAKED register_t __cdecl internal_482120()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push edi
        push 1
        push eax
        mov esi, ecx
        call public_47e0e0
        mov ecx, dword ptr ds : [esi+0x9B8]
        xor ebx, ebx
        push ebx
        push 1
        mov dword ptr ds : [esi+0x988], 1
        mov edx, dword ptr ds : [ecx]
        push 0x38
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x988]
        push eax
        lea edi, ds:[esi+0x508]
/*FIXUP push offset public_5d0ec4 @0x48215d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push edi
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0x9CC]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push ebx
        push edi
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x978]
        cmp eax, 2
        je public_482192
        cmp eax, 3
        mov byte ptr ss : [esp+0x10], bl
        jne public_482197
        public_482192 : nop
        mov byte ptr ss : [esp+0x10], 1
        public_482197 : nop
        mov ecx, esi
        call public_47e790
        mov edi, eax
        cmp edi, ebx
        je public_4821b2
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_47e460
        add esp, 4
        jmp public_4821b7
        public_4821b2 : nop
        mov eax, 5
        public_4821b7 : nop
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push edi
        lea ecx, ds:[esi+0x330]
        call public_4c6a50
        mov ecx, dword ptr ds : [esi+0x974]
        cmp ecx, ebx
        je public_4821ed
        cmp dword ptr ds : [esi+0x978], 1
        jne public_4821ed
        cmp dword ptr ds : [ecx+0x32C], 4
        je public_4821ed
        push ebx
        push 4
        call public_47f240
        public_4821ed : nop
        mov eax, dword ptr ds : [esi+0x974]
        cmp eax, ebx
        je public_48224b
        lea ecx, ds:[eax+0x394]
        call dword ptr ds : [public_5c69a0]
        mov ecx, esi
        call public_483580
        cmp eax, ebx
        je public_48224b
        mov ecx, dword ptr ds : [esi+0x32C]
        cmp ecx, ebx
        je public_48221d
        cmp ecx, 2
        jne public_48224b
        public_48221d : nop
        mov ecx, dword ptr ds : [esi+0x974]
        mov ecx, dword ptr ds : [ecx+0x330]
        push ebx
        push eax
        call public_585f20
        cmp eax, ebx
        je public_48224b
        push ebx
        push eax
        call dword ptr ds : [public_5c6028]
        mov edx, dword ptr ds : [esi+0x974]
        add esp, 8
        mov dword ptr ds : [edx+0x394], eax
        public_48224b : nop
        mov esi, dword ptr ds : [esi+0x974]
        cmp esi, ebx
        je public_482298
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
        je public_482298
        mov dword ptr ds : [eax+0x4E8], ebx
        mov eax, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [eax+0x4EC], ebx
        public_482298 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x482120)
    }
}

#undef public_482192
#undef public_482197
#undef public_4821b2
#undef public_4821b7
#undef public_4821ed
#undef public_48221d
#undef public_48224b
#undef public_482298
