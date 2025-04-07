#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec89c6 _public_6ec89c6
#define public_6ec89f8 _public_6ec89f8

PROC_DECLARE(0x6ec8990, internal_6ec8990, public_6ec8990);
extern "C" NAKED register_t __cdecl internal_6ec8990()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push edi
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f15940
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x80]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+8], 0x3F000000
        mov dword ptr ss : [esp+0xC], eax
        je public_6ec89c6
        fild dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+8]
        jmp public_6ec89f8
        public_6ec89c6 : nop
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 0xC
        push ecx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec89f8
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+8]
        call public_6f481e0
        cmp edi, eax
        jne public_6ec89f8
        test edi, 0x3FFFFFFF
        jne public_6ec89f8
        mov dword ptr ss : [esp+8], 0x3F800000
        public_6ec89f8 : nop
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi+0x78]
        push 1
        push eax
        push 0
        push 1
        lea ecx, ds:[esi+0x7C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x74]
        push edx
        lea eax, ds:[esi+0x40]
        push eax
        push ecx
        push edi
        push 0
        call dword ptr ds : [public_6fb33d8]
        add esp, 0x28
        pop edi
        mov al, 1
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ec8990)
    }
}

#undef public_6ec89c6
#undef public_6ec89f8
