#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f5bc0);
CLANG_FORWARD_PROC_SYMBOL(public_65f68c0);

#define public_65f5bcd _public_65f5bcd
#define public_65f5bd6 _public_65f5bd6
#define public_65f5bf5 _public_65f5bf5
#define public_65f5c54 _public_65f5c54
#define public_65f5c60 _public_65f5c60

PROC_DECLARE(0x65f5bc0, internal_65f5bc0, public_65f5bc0);
extern "C" NAKED register_t __cdecl internal_65f5bc0()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jg public_65f5bd6
        public_65f5bcd : nop
        xor al, al
        pop esi
        add esp, 0x20
        ret 8
        public_65f5bd6 : nop
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        call public_65f68c0
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        test eax, eax
        jle public_65f5c60
        push ebx
        xor ebx, ebx
        public_65f5bf5 : nop
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        add ecx, ebx
        call public_65f68c0
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
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
        fadd dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+0xC]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_65f5c54
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], ecx
        public_65f5c54 : nop
        mov eax, dword ptr ds : [esi+4]
        inc edi
        add ebx, 0x34
        cmp edi, eax
        jl public_65f5bf5
        pop ebx
        public_65f5c60 : nop
        fld dword ptr ss : [esp+0xC]
        pop edi
        fcomp dword ptr ds : [public_6601318]
        fnstsw ax
        test ah, 0x41
        jne public_65f5bcd
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [edx]
        mov al, 1
        pop esi
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x65f5bc0)
    }
}

#undef public_65f5bcd
#undef public_65f5bd6
#undef public_65f5bf5
#undef public_65f5c54
#undef public_65f5c60
