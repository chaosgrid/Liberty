#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b740);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4edc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f090);

#define public_6f4b788 _public_6f4b788

PROC_DECLARE(0x6f4b740, internal_6f4b740, public_6f4b740);
extern "C" NAKED register_t __cdecl internal_6f4b740()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call public_6f4f090
        mov edx, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], eax
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [eax], 0xFFFFFFFE
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+8]
        add esp, 8
        cmp ecx, edx
        jb public_6f4b788
        push 1
        call public_6f4c260
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f4b788 : nop
        add dword ptr ds : [eax], 0x10
        jmp public_6f4edc0
        UNREACHABLE_TRAP(0x6f4b740)
    }
}

#undef public_6f4b788
