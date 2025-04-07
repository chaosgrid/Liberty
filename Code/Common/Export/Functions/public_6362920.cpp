#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634e960);
CLANG_FORWARD_PROC_SYMBOL(public_634fec0);
CLANG_FORWARD_PROC_SYMBOL(public_6350250);
CLANG_FORWARD_PROC_SYMBOL(public_6362c70);

#define public_636295a _public_636295a
#define public_636299d _public_636299d
#define public_63629be _public_63629be
#define public_63629c8 _public_63629c8

PROC_DECLARE(0x6362920, internal_6362920, public_6362920);
extern "C" NAKED register_t __cdecl internal_6362920()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x80]
        lea ecx, ds:[esi+0x80]
        push edi
        call dword ptr ds : [eax+0xC]
        cmp eax, dword ptr ds : [public_658ab3c]
        jle public_636295a
        mov edi, dword ptr ss : [esp+0x14]
        push esi
        mov ecx, edi
        call public_634fec0
        push esi
        mov ecx, edi
        call public_634e960
        pop edi
        pop esi
        add esp, 8
        ret 4
        public_636295a : nop
        mov eax, dword ptr ds : [esi+0x2C]
        and eax, 0xFFFFFFF0
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFF
        inc ecx
        shl ecx, 4
        sub eax, ecx
        mov ecx, dword ptr ds : [esi+0x48]
        and ecx, 0xFFFFFFF0
        mov edx, dword ptr ds : [ecx]
        and edx, 0xFFF
        inc edx
        shl edx, 4
        sub ecx, edx
        push ebx
        mov bl, byte ptr ds : [eax+8]
        mov dl, 3
        test dl, bl
        je public_63629be
        test byte ptr ds : [ecx+8], dl
        jne public_636299d
        mov dword ptr ds : [esi+0x84], 0
        jmp public_63629c8
        public_636299d : nop
        mov edx, dword ptr ds : [eax+4]
        fld dword ptr ds : [edx+eax+0x14]
        mov edi, dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [edi+ecx+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_63629be
        mov dword ptr ds : [esi+0x84], 0
        jmp public_63629c8
        public_63629be : nop
        mov dword ptr ds : [esi+0x84], 1
        public_63629c8 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        call public_634fec0
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx]
        lea edi, ss:[esp+0x10]
        push edi
        lea edi, ss:[esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+0x44]
        push edi
        push eax
        call dword ptr ds : [edx]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x10]
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call public_6350250
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x14]
        fadd dword ptr ss : [esp+0x18]
        and eax, 0xFFD3FFFF
        or eax, 0x100000
        add esp, 4
        mov ecx, esi
        fstp dword ptr ss : [esp]
        mov dword ptr ds : [esi+0x14], eax
        call public_6362c70
        pop ebx
        pop edi
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6362920)
    }
}

#undef public_636295a
#undef public_636299d
#undef public_63629be
#undef public_63629c8
