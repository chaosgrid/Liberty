#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7c10);

#define public_6cf3b9e _public_6cf3b9e
#define public_6cf3bad _public_6cf3bad
#define public_6cf3bec _public_6cf3bec
#define public_6cf3bee _public_6cf3bee
#define public_6cf3c55 _public_6cf3c55

PROC_DECLARE(0x6cf3aa0, internal_6cf3aa0, public_6cf3aa0);
extern "C" NAKED register_t __cdecl internal_6cf3aa0()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x20]
        test al, al
        push edi
        je public_6cf3c55
        mov eax, dword ptr ds : [esi-0x60]
        lea ecx, ss:[esp+0x1C]
        lea edi, ds:[esi-0x60]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        fld dword ptr ds : [esi+0x2C]
        fsub dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x28]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x24]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_6ce7c10
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi-0x50]
        fmul dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [public_6d6419c]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6d65520]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fstp dword ptr ss : [esp+0xC]
        call edi
        fld dword ptr ds : [eax+0x90]
        fsub dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cf3c55
        mov ecx, dword ptr ds : [esi-0x50]
        call edi
        fld dword ptr ds : [eax+0x90]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jne public_6cf3b9e
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+8], eax
        jmp public_6cf3bad
        public_6cf3b9e : nop
        mov ecx, dword ptr ds : [esi-0x50]
        call edi
        fld dword ptr ds : [eax+0x90]
        fstp dword ptr ss : [esp+8]
        public_6cf3bad : nop
        mov ecx, dword ptr ds : [esi-0x50]
        push ebx
        push ebp
        call edi
        fld dword ptr ds : [eax+0x8C]
        fcomp dword ptr ds : [public_6d6572c]
        mov ebp, dword ptr ss : [esp+0x44]
        fnstsw ax
        test ah, 0x44
        jnp public_6cf3bee
        mov ecx, dword ptr ds : [esi-0x50]
        call edi
        fld dword ptr ds : [eax+0x8C]
        fmul dword ptr ss : [ebp]
        fld dword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6cf3bec
        fstp dword ptr ss : [esp+0x10]
        jmp public_6cf3bee
        public_6cf3bec : nop
        fstp st(0)
        public_6cf3bee : nop
        mov ecx, dword ptr ds : [esi-0x50]
        call edi
        mov ecx, dword ptr ds : [esi-0x50]
        mov ebx, eax
        call edi
        fld dword ptr ds : [eax+0x80]
        fdiv dword ptr ds : [ebx+0x20]
        mov ecx, dword ptr ds : [esi-0x50]
        mov edx, dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [edx+0x98]
        add eax, 0xA4
        fmul dword ptr ss : [ebp]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x14]
        pop ebp
        pop ebx
        fmulp 
        fadd dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x30]
        fxch 
        fmul st, st(2)
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fmul st, st(1)
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        fstp st(0)
        public_6cf3c55 : nop
        pop edi
        pop esi
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x6cf3aa0)
    }
}

#undef public_6cf3b9e
#undef public_6cf3bad
#undef public_6cf3bec
#undef public_6cf3bee
#undef public_6cf3c55
