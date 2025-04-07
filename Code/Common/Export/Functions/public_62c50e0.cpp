#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c50e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e1630);
CLANG_FORWARD_PROC_SYMBOL(public_62e1680);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);

#define public_62c5121 _public_62c5121
#define public_62c5123 _public_62c5123
#define public_62c5387 _public_62c5387
#define public_62c53df _public_62c53df

PROC_DECLARE(0x62c50e0, internal_62c50e0, public_62c50e0);
extern "C" NAKED register_t __cdecl internal_62c50e0()
{
    __asm
    {
        sub esp, 0xC0
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+0x43C]
        cmp edx, 0xFFFFFFFF
        push ebp
        jl public_62c53df
        mov eax, dword ptr ds : [ebx+0x324]
        test eax, eax
        je public_62c53df
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c53df
        mov eax, dword ptr ds : [ebx+0x324]
        test eax, eax
        je public_62c5121
        lea ecx, ds:[eax-8]
        jmp public_62c5123
        public_62c5121 : nop
        xor ecx, ecx
        public_62c5123 : nop
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        lea esi, ds:[ebx+0x408]
        push esi
        lea esi, ss:[esp+0xA4]
        push esi
        lea esi, ss:[esp+0x78]
        push esi
        lea esi, ss:[esp+0x4C]
        push esi
        lea esi, ds:[ebx+0x440]
        push esi
        push edx
        call dword ptr ds : [eax+0xC8]
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x68]
        lea eax, ds:[ebx+0x3FC]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0x94]
        lea ebp, ds:[ebx+0x3CC]
        lea edi, ds:[ebx+0x40C]
        mov ecx, 9
        lea esi, ss:[esp+0x40]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x98]
        mov edx, ebp
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x9C]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ss : [esp+0xC4]
        lea edi, ds:[ebx+0x3D8]
        mov ecx, 9
        lea esi, ss:[esp+0x70]
        rep movsd
        lea eax, ds:[ebx+0x39C]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0xC8]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0xCC]
        mov dword ptr ds : [ecx+8], edx
        lea edi, ds:[ebx+0x3A8]
        mov ecx, 9
        lea esi, ss:[esp+0xA0]
        rep movsd
        test dword ptr ds : [ebx+0x32C], 0x200100
        pop edi
        mov byte ptr ds : [ebx+0x344], 0
        pop esi
        jne public_62c5387
        fld dword ptr ss : [ebp+8]
        sub esp, 0xC
        fsub dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ds : [ebx+0x404]
        sub esp, 0xC
        fsub dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+0x400]
        fsub dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx+0x3FC]
        fsub dword ptr ss : [ebp]
        fstp dword ptr ss : [esp]
        call public_628b030
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        call public_62e1680
        add esp, 8
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_62e1680
        add esp, 8
        push eax
        call public_62e1630
        add esp, 8
        call public_6391fc2
        fcomp dword ptr ds : [public_639f53c]
        fnstsw ax
        test ah, 5
        jp public_62c5387
        fld dword ptr ds : [ebx+0x3B0]
        sub esp, 0xC
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [ebx+0x3BC]
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [ebx+0x3C8]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ebx+0x3E0]
        fld dword ptr ds : [ebx+0x3EC]
        fld dword ptr ds : [ebx+0x3F8]
        fld dword ptr ds : [ebx+0x414]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0x420]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ebx+0x42C]
        fadd st, st(1)
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fadd st, st(1)
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fadd st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld dword ptr ss : [esp+0x10]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x14]
        fchs 
        push ecx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x30]
        fchs 
        push edx
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fchs 
        fstp dword ptr ss : [esp+0x24]
        call public_62e1630
        fcomp dword ptr ds : [public_639f538]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_62c5387
        mov byte ptr ds : [ebx+0x344], 1
        public_62c5387 : nop
        test byte ptr ds : [ebx+0x32C], 0x40
        je public_62c53df
        fld dword ptr ds : [ebx+0x3FC]
        lea eax, ss:[esp+8]
        fsub dword ptr ss : [ebp]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ebx+0x400]
        fsub dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0x404]
        fsub dword ptr ss : [ebp+8]
        fstp dword ptr ss : [esp+0x18]
        call public_62e1680
        mov edx, dword ptr ds : [eax]
        add esp, 8
        add ebx, 0x38C
        mov dword ptr ds : [ebx], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], edx
        public_62c53df : nop
        pop ebp
        pop ebx
        add esp, 0xC0
        ret 
        UNREACHABLE_TRAP(0x62c50e0)
    }
}

#undef public_62c5121
#undef public_62c5123
#undef public_62c5387
#undef public_62c53df
