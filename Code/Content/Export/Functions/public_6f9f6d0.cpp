#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9cb00);
CLANG_FORWARD_PROC_SYMBOL(public_6f9d2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9e9b0);

#define public_6f9f701 _public_6f9f701
#define public_6f9f7f3 _public_6f9f7f3
#define public_6f9f7f5 _public_6f9f7f5

PROC_DECLARE(0x6f9f6d0, internal_6f9f6d0, public_6f9f6d0);
extern "C" NAKED register_t __cdecl internal_6f9f6d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x30]
        push edi
        push eax
        mov ebp, ecx
        call public_6f4d5e0
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi]
        add esp, 4
        xor bl, bl
        test eax, eax
        je public_6f9f701
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [edi], 0
        public_6f9f701 : nop
        cmp dword ptr ds : [esi], 0xFFFFFFFF
        je public_6f9f7f5
        cmp dword ptr ds : [esi+4], 0xFFFFFFFF
        je public_6f9f7f5
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jle public_6f9f7f5
        fld dword ptr ds : [esi+0xC]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6f9f7f5
        fld dword ptr ds : [esi+0x10]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 5
        jp public_6f9f7f5
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_6f9f7f5
        fld dword ptr ds : [esi+0x18]
        fcomp dword ptr ds : [public_6fbcbc4]
        fnstsw ax
        test ah, 1
        jne public_6f9f7f5
        fld dword ptr ds : [esi+0x18]
        fcomp dword ptr ds : [public_6fbcbc8]
        fnstsw ax
        test ah, 0x41
        jp public_6f9f7f5
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_6f9f7f5
        fld dword ptr ds : [esi+0x28]
        fld dword ptr ds : [esi+0x24]
        fld dword ptr ds : [esi+0x20]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_6fb444c]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x44
        fstp st(0)
        jnp public_6f9f7f5
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6f9f7f5
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_6f9f7f5
        push esi
        mov ecx, ebp
        call public_6f9cb00
        cmp eax, 0xFFFFFFFF
        je public_6f9f7f3
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+0x18]
        mov edi, dword ptr ss : [esp+0x1C]
        push ecx
        push edx
        push eax
        push edi
        mov ecx, ebp
        call public_6f9d2b0
        test al, al
        je public_6f9f7f3
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push esi
        push edi
        mov ecx, ebp
        call public_6f9e9b0
        pop edi
        pop esi
        pop ebp
        mov bl, al
        pop ebx
        ret 0xC
        public_6f9f7f3 : nop
        xor bl, bl
        public_6f9f7f5 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f9f6d0)
    }
}

#undef public_6f9f701
#undef public_6f9f7f3
#undef public_6f9f7f5
