#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_59f200);

#define public_59f2d3 _public_59f2d3

PROC_DECLARE(0x59f200, internal_59f200, public_59f200);
extern "C" NAKED register_t __cdecl internal_59f200()
{
    __asm
    {
        sub esp, 0x2C
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        mov ecx, esi
        xor bl, bl
        call public_420d60
        test al, al
        je public_59f2d3
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        lea edx, ss:[esp+0x3C]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x88]
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x90]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xC], edx
        lea edx, ss:[esp+8]
        push edx
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x28]
        push eax
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_67dbf8 @0x59f29a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [public_5c6c74]
        add esp, 0x14
        test eax, eax
        je public_59f2d3
        mov eax, dword ptr ss : [esp+0x3C]
        fild dword ptr ss : [esp+0x24]
        pop esi
        pop ebx
        fstp dword ptr ds : [eax]
        fild dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [eax+4]
        fild dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [eax+8]
        fild dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [eax+0xC]
        mov al, 1
        add esp, 0x2C
        ret 
        public_59f2d3 : nop
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x59f200)
    }
}

#undef public_59f2d3
