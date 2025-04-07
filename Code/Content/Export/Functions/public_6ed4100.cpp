#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed4100);
CLANG_FORWARD_PROC_SYMBOL(public_6f48d80);

#define public_6ed414d _public_6ed414d
#define public_6ed4158 _public_6ed4158

PROC_DECLARE(0x6ed4100, internal_6ed4100, public_6ed4100);
extern "C" NAKED register_t __cdecl internal_6ed4100()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+0xDC]
        cmp eax, dword ptr ds : [esi]
        jl public_6ed4158
        cmp eax, dword ptr ds : [esi+4]
        jg public_6ed4158
        mov eax, dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [eax*4+public_6fce350]
        fnstsw ax
        test ah, 1
        jne public_6ed4158
        mov edx, dword ptr ds : [esi+0xC]
        push edx
        call public_6f48d80
        cmp eax, 1
        jae public_6ed4158
        cmp dword ptr ds : [esi], 0
        jle public_6ed414d
        cmp dword ptr ds : [esi+4], 0x2A
        jge public_6ed414d
        mov eax, 0x40
        pop esi
        ret 8
        public_6ed414d : nop
        mov esi, dword ptr ds : [esi+8]
        inc esi
        lea eax, ds:[esi+esi*4]
        pop esi
        ret 8
        public_6ed4158 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ed4100)
    }
}

#undef public_6ed414d
#undef public_6ed4158
