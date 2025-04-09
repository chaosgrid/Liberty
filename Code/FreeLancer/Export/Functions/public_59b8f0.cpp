#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fb80);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_59b962 _public_59b962
#define public_59ba0e _public_59ba0e
#define public_59ba75 _public_59ba75

PROC_DECLARE(0x59b8f0, internal_59b8f0, public_59b8f0);
extern "C" NAKED register_t __cdecl internal_59b8f0()
{
    __asm
    {
        sub esp, 0x94
        push ebx
        mov ebx, ecx
        fld dword ptr ds : [ebx+0x3E4]
        push ebp
        fmul dword ptr ds : [public_5c75e0]
        mov ebp, dword ptr ss : [esp+0xA0]
        push esi
        push edi
        mov ecx, 0xC
        mov esi, ebp
        lea edi, ss:[esp+0x74]
        lea eax, ss:[ebp+0x24]
        rep movsd
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [public_67dbc0]
        fstp dword ptr ss : [esp+0x28]
        test eax, eax
        fld dword ptr ds : [ebx+0x3E8]
        fmul dword ptr ds : [public_5cef60]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        fstp dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x30], 0
        jne public_59b962
        call public_5b73e0
        mov dword ptr ds : [public_67dbc0], eax
        public_59b962 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x28]
        push edx
        push ebp
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x98], eax
        fadd dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x9C], ecx
        fadd dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x74]
        push ecx
        mov ecx, ebx
        fstp dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0xA4], edx
        call dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x98]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x14]
        fld dword ptr ds : [ebx+0x3E4]
        fmul dword ptr ds : [public_5cef60]
        mov eax, dword ptr ds : [public_67dbc0]
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ebx+0x3E8]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x14]
        jne public_59ba0e
        call public_5b73e0
        mov dword ptr ds : [public_67dbc0], eax
        public_59ba0e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        lea esi, ds:[ebx+0x3C]
        push esi
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ds : [ebx+0x3E4]
        fmul dword ptr ds : [public_5c75e0]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ebx+0x3E8]
        mov dword ptr ss : [esp+0x4C], eax
        fmul dword ptr ds : [public_5cef60]
        mov eax, dword ptr ds : [public_67dbc0]
        test eax, eax
        mov dword ptr ss : [esp+0x50], ecx
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x18], 0
        jne public_59ba75
        call public_5b73e0
        mov dword ptr ds : [public_67dbc0], eax
        public_59ba75 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push esi
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x58], eax
        mov dword ptr ss : [esp+0x5C], ecx
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov ecx, dword ptr ds : [public_67dbf8]
        mov dword ptr ss : [esp+0x68], edx
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x4C]
        push eax
/*FIXUP push offset public_67dbf8 @0x59bab8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [ecx+0x34]
        lea edx, ss:[esp+0x58]
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        mov eax, dword ptr ds : [public_67dbf8]
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
/*FIXUP push offset public_67dbf8 @0x59bad9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [eax+0x34]
        fld dword ptr ss : [esp+0x40]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x64], eax
        call public_5b7ec0
        fld dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x68], eax
        call public_5b7ec0
        fld dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x6C], eax
        call public_5b7ec0
        push 1
        lea ecx, ss:[esp+0x68]
        push ecx
        lea ecx, ds:[ebx+0x324]
        mov dword ptr ss : [esp+0x78], eax
        call public_40fb80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x94
        ret 4
        UNREACHABLE_TRAP(0x59b8f0)
    }
}

#undef public_59b962
#undef public_59ba0e
#undef public_59ba75
