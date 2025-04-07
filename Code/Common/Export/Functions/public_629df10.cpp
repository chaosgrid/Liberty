#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6274100);
CLANG_FORWARD_PROC_SYMBOL(public_62ed500);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_629df20 _public_629df20
#define public_629df3b _public_629df3b
#define public_629df5c _public_629df5c
#define public_629df89 _public_629df89
#define public_629df9a _public_629df9a
#define public_629dfc1 _public_629dfc1
#define public_629e00d _public_629e00d

PROC_DECLARE(0x629df10, internal_629df10, public_629df10);
extern "C" NAKED register_t __cdecl internal_629df10()
{
    __asm
    {
        sub esp, 0x6C
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        dec eax
        push edi
        je public_629df9a
        dec eax
        je public_629df5c
        public_629df20 : nop
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [public_63fc22c]
        add edi, 8
        test eax, eax
        jne public_629df3b
        call public_6391cf0
        mov dword ptr ds : [public_63fc22c], eax
        public_629df3b : nop
        mov ecx, dword ptr ds : [eax]
        add esi, 0x20
        push esi
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        mov esi, dword ptr ss : [esp+0x40]
        jmp public_629e00d
        public_629df5c : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_629df20
        add eax, 0xFFFFFF64
        test eax, eax
        je public_629df20
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        je public_629df89
        lea eax, ds:[esi-0x9C]
        add eax, 0x2C
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax+8]
        jmp public_629e00d
        public_629df89 : nop
        xor eax, eax
        mov eax, 0x2C
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax+8]
        jmp public_629e00d
        public_629df9a : nop
        push ebx
        mov ebx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [ebx+4]
        push 0
        lea ecx, ss:[esp+0x4C]
        add edi, 8
        call public_62ed500
        mov eax, dword ptr ds : [public_63fc22c]
        test eax, eax
        jne public_629dfc1
        call public_6391cf0
        mov dword ptr ds : [public_63fc22c], eax
        public_629dfc1 : nop
        mov ecx, dword ptr ds : [eax]
        add ebx, 0x20
        push ebx
        push edi
        lea edx, ss:[esp+0x50]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6274100
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [esi+0x10]
        pop ebx
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+8]
        fadd dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x10]
        public_629e00d : nop
        mov eax, dword ptr ss : [esp+0x78]
        mov edi, eax
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        pop edi
        pop esi
        add esp, 0x6C
        ret 4
        UNREACHABLE_TRAP(0x629df10)
    }
}

#undef public_629df20
#undef public_629df3b
#undef public_629df5c
#undef public_629df89
#undef public_629df9a
#undef public_629dfc1
#undef public_629e00d
