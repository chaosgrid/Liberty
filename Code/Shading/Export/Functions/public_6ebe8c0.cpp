#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebe8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebe940);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ce4);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0cea);

#define public_6ebe8f3 _public_6ebe8f3

PROC_DECLARE(0x6ebe8c0, internal_6ebe8c0, public_6ebe8c0);
extern "C" NAKED register_t __cdecl internal_6ebe8c0()
{
    __asm
    {
        sub esp, 8
        fld dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        fst qword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi]
        fstp qword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [eax+0x14]
        add eax, 0x10
        test edx, edx
        je public_6ebe8f3
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ebe8f3 : nop
        mov ecx, dword ptr ds : [esi+8]
        fld dword ptr ds : [ecx]
        fmul qword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], edx
        mov dword ptr ss : [esp+8], 0
        fild qword ptr ss : [esp+4]
        call public_6ed0ce4
        sub esp, 8
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6ed1038]
        add esp, 8
        call public_6ed0cea
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], eax
        call public_6ebe940
        xor eax, eax
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6ebe8c0)
    }
}

#undef public_6ebe8f3
