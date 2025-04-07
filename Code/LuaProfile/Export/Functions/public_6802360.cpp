#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802360);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6803ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6804ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6805640);

#define public_6802377 _public_6802377
#define public_68023bb _public_68023bb

PROC_DECLARE(0x6802360, internal_6802360, public_6802360);
extern "C" NAKED register_t __cdecl internal_6802360()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        jge public_6802377
        cmp esi, 0xFFFFFFFF
        je public_6802377
        push esi
        call public_6804ed0
        add esp, 4
        public_6802377 : nop
        mov eax, dword ptr ss : [esp+8]
        push esi
        push eax
        call public_6805640
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], 0
        mov eax, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        cmp edx, ecx
        pop esi
        jb public_68023bb
        push 1
        call public_6802870
        mov eax, dword ptr ds : [public_680e604]
        add esp, 4
        public_68023bb : nop
        add dword ptr ds : [eax], 0x10
        jmp public_6803ab0
        UNREACHABLE_TRAP(0x6802360)
    }
}

#undef public_6802377
#undef public_68023bb
