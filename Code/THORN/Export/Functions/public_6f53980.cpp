#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52990);
CLANG_FORWARD_PROC_SYMBOL(public_6f52d90);
CLANG_FORWARD_PROC_SYMBOL(public_6f52dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53980);
CLANG_FORWARD_PROC_SYMBOL(public_6f54440);

#define public_6f539d3 _public_6f539d3
#define public_6f539e7 _public_6f539e7
#define public_6f539fb _public_6f539fb

PROC_DECLARE(0x6f53980, internal_6f53980, public_6f53980);
extern "C" NAKED register_t __cdecl internal_6f53980()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push 0x110
        push esi
        call public_6f52990
        add esp, 8
        test eax, eax
        je public_6f539fb
        push esi
        call public_6f52d90
        lea eax, ss:[esp+8]
        push eax
        push esi
        call public_6f54440
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 0xC
        test ecx, ecx
        jle public_6f539d3
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx]
        mov eax, dword ptr ds : [eax+0x10]
        mov byte ptr ds : [eax+ecx-2], 3
        mov ecx, dword ptr ds : [esi+8]
        mov dl, byte ptr ds : [ecx+0x14]
        mov ecx, dword ptr ss : [esp+8]
        mov byte ptr ds : [eax+ecx-1], dl
        jmp public_6f539e7
        public_6f539d3 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx+0x14]
        push 0
        push eax
        push 1
        push esi
        call public_6f52dd0
        add esp, 0x10
        public_6f539e7 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+0x14]
        push 0x3B
        push esi
        mov dword ptr ds : [eax+0xC], ecx
        call public_6f52990
        add esp, 8
        public_6f539fb : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f53980)
    }
}

#undef public_6f539d3
#undef public_6f539e7
#undef public_6f539fb
