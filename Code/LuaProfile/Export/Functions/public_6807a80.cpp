#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a90);
CLANG_FORWARD_PROC_SYMBOL(public_6806e90);
CLANG_FORWARD_PROC_SYMBOL(public_6806ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6807a80);
CLANG_FORWARD_PROC_SYMBOL(public_6808540);

#define public_6807ad3 _public_6807ad3
#define public_6807ae7 _public_6807ae7
#define public_6807afb _public_6807afb

PROC_DECLARE(0x6807a80, internal_6807a80, public_6807a80);
extern "C" NAKED register_t __cdecl internal_6807a80()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push 0x110
        push esi
        call public_6806a90
        add esp, 8
        test eax, eax
        je public_6807afb
        push esi
        call public_6806e90
        lea eax, ss:[esp+8]
        push eax
        push esi
        call public_6808540
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 0xC
        test ecx, ecx
        jle public_6807ad3
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx]
        mov eax, dword ptr ds : [eax+0x10]
        mov byte ptr ds : [eax+ecx-2], 3
        mov ecx, dword ptr ds : [esi+8]
        mov dl, byte ptr ds : [ecx+0x14]
        mov ecx, dword ptr ss : [esp+8]
        mov byte ptr ds : [eax+ecx-1], dl
        jmp public_6807ae7
        public_6807ad3 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx+0x14]
        push 0
        push eax
        push 1
        push esi
        call public_6806ed0
        add esp, 0x10
        public_6807ae7 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+0x14]
        push 0x3B
        push esi
        mov dword ptr ds : [eax+0xC], ecx
        call public_6806a90
        add esp, 8
        public_6807afb : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6807a80)
    }
}

#undef public_6807ad3
#undef public_6807ae7
#undef public_6807afb
