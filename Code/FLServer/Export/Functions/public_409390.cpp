#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ab0);

#define public_4093b9 _public_4093b9
#define public_4093bb _public_4093bb

PROC_DECLARE(0x409390, internal_409390, public_409390);
extern "C" NAKED register_t __cdecl internal_409390()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        lea eax, ds:[esi+0x60]
        push eax
        push 0x414
        push edi
        call public_418ab0
        lea ecx, ds:[esi+0xA0]
        test ecx, ecx
        je public_4093b9
        lea eax, ds:[esi+0xA4]
        jmp public_4093bb
        public_4093b9 : nop
        xor eax, eax
        public_4093bb : nop
        push eax
        push 0x410
        push edi
        call public_418ab0
        lea edx, ds:[esi+0x140]
        push edx
        push 0x411
        push edi
        call public_418ab0
        add esi, 0x1C0
        push esi
        push 0x40D
        push edi
        call public_418ab0
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x409390)
    }
}

#undef public_4093b9
#undef public_4093bb
