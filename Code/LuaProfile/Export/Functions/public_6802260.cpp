#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802260);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6803ab0);
CLANG_FORWARD_PROC_SYMBOL(public_68058a0);

#define public_68022a8 _public_68022a8

PROC_DECLARE(0x6802260, internal_6802260, public_6802260);
extern "C" NAKED register_t __cdecl internal_6802260()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call public_68058a0
        mov edx, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], eax
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [eax], 0xFFFFFFFE
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+8]
        add esp, 8
        cmp ecx, edx
        jb public_68022a8
        push 1
        call public_6802870
        mov eax, dword ptr ds : [public_680e604]
        add esp, 4
        public_68022a8 : nop
        add dword ptr ds : [eax], 0x10
        jmp public_6803ab0
        UNREACHABLE_TRAP(0x6802260)
    }
}

#undef public_68022a8
