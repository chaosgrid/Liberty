#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c2dc);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c341);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c3d1);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c45d);

#define public_6d4c48b _public_6d4c48b
#define public_6d4c49f _public_6d4c49f
#define public_6d4c4a8 _public_6d4c4a8
#define public_6d4c4bc _public_6d4c4bc
#define public_6d4c4c5 _public_6d4c4c5
#define public_6d4c4ee _public_6d4c4ee
#define public_6d4c4fa _public_6d4c4fa

PROC_DECLARE(0x6d4c45d, internal_6d4c45d, public_6d4c45d);
extern "C" NAKED register_t __cdecl internal_6d4c45d()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        push ebx
        xor ebx, ebx
        sub ecx, ebx
        push esi
        mov esi, dword ptr ds : [eax+0x188]
        je public_6d4c4c5
        dec ecx
        dec ecx
        je public_6d4c4a8
        dec ecx
        je public_6d4c48b
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x14], 4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        pop ecx
        jmp public_6d4c4fa
        public_6d4c48b : nop
        cmp dword ptr ds : [esi+8], ebx
        jne public_6d4c49f
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x14], 4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        pop ecx
        public_6d4c49f : nop
        mov dword ptr ds : [esi+4], offset _public_6d4c341
        jmp public_6d4c4fa
        public_6d4c4a8 : nop
        cmp dword ptr ds : [esi+8], ebx
        jne public_6d4c4bc
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x14], 4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        pop ecx
        public_6d4c4bc : nop
        mov dword ptr ds : [esi+4], offset _public_6d4c3d1
        jmp public_6d4c4fa
        public_6d4c4c5 : nop
        cmp byte ptr ds : [eax+0x4A], bl
        je public_6d4c4ee
        cmp dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+4], offset _public_6d4c2dc
        jne public_6d4c4fa
        mov ecx, dword ptr ds : [eax+4]
        push 1
        push dword ptr ds : [esi+0x10]
        push ebx
        push dword ptr ds : [esi+8]
        push eax
        call dword ptr ds : [ecx+0x1C]
        add esp, 0x14
        mov dword ptr ds : [esi+0xC], eax
        jmp public_6d4c4fa
        public_6d4c4ee : nop
        mov eax, dword ptr ds : [eax+0x19C]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], eax
        public_6d4c4fa : nop
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x14], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d4c45d)
    }
}

#undef public_6d4c48b
#undef public_6d4c49f
#undef public_6d4c4a8
#undef public_6d4c4bc
#undef public_6d4c4c5
#undef public_6d4c4ee
#undef public_6d4c4fa
