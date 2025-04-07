#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284390);
CLANG_FORWARD_PROC_SYMBOL(public_6284480);

#define public_62844c0 _public_62844c0
#define public_6284519 _public_6284519
#define public_628452a _public_628452a
#define public_628453b _public_628453b
#define public_628453d _public_628453d
#define public_6284563 _public_6284563

PROC_DECLARE(0x6284480, internal_6284480, public_6284480);
extern "C" NAKED register_t __cdecl internal_6284480()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 0xFFFFFFFF
        push 1
        push edx
        push eax
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_6284563
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        nop 
        public_62844c0 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x80]
        cmp eax, ebx
        je public_6284519
        mov ecx, dword ptr ss : [esp+0x34]
        lea edx, ss:[esp+0x14]
        push edx
        push ecx
        push ebp
        push eax
        call public_6284390
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [edi]
        add esp, 0x10
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [edi+8]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        faddp 
        jmp public_628452a
        public_6284519 : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        push ebp
        push esi
        push ebx
        push edi
        call public_6284480
        add esp, 0x14
        public_628452a : nop
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_628453b
        fstp dword ptr ss : [esp+0x10]
        jmp public_628453d
        public_628453b : nop
        fstp st(0)
        public_628453d : nop
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_62844c0
        pop edi
        pop ebp
        pop ebx
        public_6284563 : nop
        fld dword ptr ss : [esp+4]
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6284480)
    }
}

#undef public_62844c0
#undef public_6284519
#undef public_628452a
#undef public_628453b
#undef public_628453d
#undef public_6284563
