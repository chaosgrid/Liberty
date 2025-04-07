#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409840);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_4143c0);
CLANG_FORWARD_PROC_SYMBOL(public_414530);
CLANG_FORWARD_PROC_SYMBOL(public_418996);

#define public_414385 _public_414385

PROC_DECLARE(0x414330, internal_414330, public_414330);
extern "C" NAKED register_t __cdecl internal_414330()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        call public_418996
        mov eax, dword ptr ds : [esi+0x90]
        mov edi, dword ptr ds : [public_41bbe8]
        push 0x10000
        push 0
        push 0x445
        push eax
        call edi
        mov ecx, dword ptr ds : [esi+0x90]
        push 0x200
        push 0
        push 0x435
        push ecx
        call edi
        lea edi, ds:[esi+0x60]
        push edi
        mov ecx, offset public_4294ec
        call public_414530
        mov dword ptr ds : [eax], esi
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        jne public_414385
        mov edi, offset public_41c3f4
        public_414385 : nop
        mov edx, dword ptr ds : [esi+0x110]
        push edi
        push edx
        call public_409840
        add esp, 8
        call public_40cdc0
        mov eax, dword ptr ds : [public_41bb80]
        mov dword ptr ds : [eax], offset _public_4143c0
        call public_40ce70
        pop edi
        mov eax, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x414330)
    }
}

#undef public_414385
