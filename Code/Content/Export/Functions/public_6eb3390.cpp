#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3390);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6eb33c6 _public_6eb33c6
#define public_6eb33ce _public_6eb33ce
#define public_6eb33e2 _public_6eb33e2

PROC_DECLARE(0x6eb3390, internal_6eb3390, public_6eb3390);
extern "C" NAKED register_t __cdecl internal_6eb3390()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fcef08]
        sub esp, 8
        test eax, eax
        je public_6eb33e2
        push esi
        lea esi, ds:[eax+8]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+4], eax
        je public_6eb33c6
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6eb33c6
        lea eax, ss:[esp+4]
        jmp public_6eb33ce
        public_6eb33c6 : nop
        mov dword ptr ss : [esp+8], esi
        lea eax, ss:[esp+8]
        public_6eb33ce : nop
        mov edx, dword ptr ds : [public_6fcef08]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edx+0xC]
        pop esi
        je public_6eb33e2
        mov al, 1
        add esp, 8
        ret 
        public_6eb33e2 : nop
        xor al, al
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6eb3390)
    }
}

#undef public_6eb33c6
#undef public_6eb33ce
#undef public_6eb33e2
