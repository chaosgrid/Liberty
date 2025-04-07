#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6712b80);
CLANG_FORWARD_PROC_SYMBOL(public_67152f0);

#define public_6712ad2 _public_6712ad2
#define public_6712b07 _public_6712b07
#define public_6712b3c _public_6712b3c

PROC_DECLARE(0x6712ac0, internal_6712ac0, public_6712ac0);
extern "C" NAKED register_t __cdecl internal_6712ac0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x8C]
        test al, al
        jne public_6712ad2
        call public_6712b80
        public_6712ad2 : nop
        mov eax, dword ptr ds : [esi+0x88]
        mov ecx, dword ptr ds : [esi+0x80]
        sub ecx, eax
        jne public_6712b07
        mov ecx, esi
        call public_6712b80
        mov eax, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [esi+0x80]
        sub edx, eax
        jne public_6712b07
        push 0
        call public_67152f0
        add esp, 4
        pop esi
        ret 4
        public_6712b07 : nop
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[ecx+eax*2]
        push edx
        call dword ptr ds : [public_671937c]
        test eax, eax
        je public_6712b3c
        mov ecx, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [esi+0x84]
        add eax, eax
        push eax
        lea eax, ds:[edx+ecx*2]
        lea ecx, ds:[edx+ecx*2+2]
        push eax
        push ecx
        call dword ptr ds : [public_67170cc]
        add esp, 0xC
        public_6712b3c : nop
        mov edx, dword ptr ds : [esi+0x88]
        mov eax, dword ptr ds : [esi+0x84]
        mov cx, word ptr ss : [esp+8]
        mov word ptr ds : [eax+edx*2], cx
        mov eax, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [esi]
        inc eax
        mov ecx, esi
        mov dword ptr ds : [esi+0x88], eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6712ac0)
    }
}

#undef public_6712ad2
#undef public_6712b07
#undef public_6712b3c
