#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6302df0);

#define public_6302e14 _public_6302e14
#define public_6302e24 _public_6302e24
#define public_6302e30 _public_6302e30
#define public_6302e42 _public_6302e42
#define public_6302e6a _public_6302e6a

PROC_DECLARE(0x6302df0, internal_6302df0, public_6302df0);
extern "C" NAKED register_t __cdecl internal_6302df0()
{
    __asm
    {
        sub esp, 0x104
        push esi
        mov esi, dword ptr ss : [esp+0x110]
        test esi, esi
        jne public_6302e14
        mov eax, dword ptr ss : [esp+0x10C]
        mov byte ptr ds : [eax], 0
        pop esi
        add esp, 0x104
        ret 
        public_6302e14 : nop
        mov al, byte ptr ds : [esi]
        cmp al, 0x5C
        je public_6302e24
        test al, al
        je public_6302e42
        cmp byte ptr ds : [esi+1], 0x3A
        jne public_6302e42
        public_6302e24 : nop
        mov edx, dword ptr ss : [esp+0x10C]
        mov eax, esi
        sub edx, esi
        nop 
        public_6302e30 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6302e30
        pop esi
        add esp, 0x104
        ret 
        public_6302e42 : nop
        mov eax, dword ptr ss : [esp+0x114]
        test eax, eax
        jne public_6302e6a
        mov ecx, dword ptr ds : [public_639905c]
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        jne public_6302e6a
        mov edx, dword ptr ss : [esp+0x10C]
        mov byte ptr ds : [edx], al
        pop esi
        add esp, 0x104
        ret 
        public_6302e6a : nop
        mov ecx, dword ptr ds : [eax]
        push 0x104
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x84]
        mov ecx, dword ptr ss : [esp+0x10C]
        push 0
        push esi
        lea eax, ss:[esp+0xC]
        push eax
        push 0
        push ecx
        call dword ptr ds : [public_6399208]
        add esp, 0x14
        pop esi
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x6302df0)
    }
}

#undef public_6302e14
#undef public_6302e24
#undef public_6302e30
#undef public_6302e42
#undef public_6302e6a
