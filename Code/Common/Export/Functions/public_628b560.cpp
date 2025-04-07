#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b560);
CLANG_FORWARD_PROC_SYMBOL(public_6343700);
CLANG_FORWARD_PROC_SYMBOL(public_6345710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628b5e4 _public_628b5e4
#define public_628b5f8 _public_628b5f8
#define public_628b606 _public_628b606

PROC_DECLARE(0x628b560, internal_628b560, public_628b560);
extern "C" NAKED register_t __cdecl internal_628b560()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        test ebx, ebx
        mov eax, 1
        je public_628b606
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, dword ptr ds : [ebx+4]
        call public_6345710
        mov esi, dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ebx+4]
        fsub dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x54]
        fld dword ptr ds : [esi+0x30]
        push ecx
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x34]
        fsub dword ptr ss : [esp+0x1C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_6343700
        mov edi, dword ptr ds : [esi+0x7C]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6391d9c
        add esp, 0x10
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_628b5e4
        mov ebp, eax
        public_628b5e4 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_628b5f8
        mov dword ptr ds : [eax], ebx
        public_628b5f8 : nop
        inc dword ptr ds : [esi+0x80]
        pop edi
        mov dword ptr ds : [ebx+0x14], esi
        pop esi
        xor eax, eax
        pop ebp
        public_628b606 : nop
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x628b560)
    }
}

#undef public_628b5e4
#undef public_628b5f8
#undef public_628b606
