#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5a1c50);

#define public_599b62 _public_599b62

PROC_DECLARE(0x599ac0, internal_599ac0, public_599ac0);
extern "C" NAKED register_t __cdecl internal_599ac0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, ecx
        push eax
        push esi
        call public_59dd00
        push esi
        call public_59dbf0
        mov cl, byte ptr ds : [esi+0x6C]
        and cl, 0xFB
        or cl, 3
        mov byte ptr ds : [esi+0x6C], cl
        add esp, 0xC
        mov ecx, esi
        call public_5a1c50
        mov cl, byte ptr ds : [esi+0x6C]
        mov edx, dword ptr ds : [esi]
        and cl, 0xFE
        mov eax, 0x3DCCCCCD
        mov byte ptr ds : [esi+0x6C], cl
        xor ebx, ebx
/*FIXUP push offset public_5e57c8 @0x599afd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e57c8
        mov ecx, esi
        mov dword ptr ds : [esi+0xB4], eax
        mov dword ptr ds : [esi+0xB8], eax
        mov byte ptr ds : [esi+0xE1], bl
        call dword ptr ds : [edx+0x70]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        je public_599b62
        fld dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        fst dword ptr ds : [esi+0xEC]
        mov ecx, esi
        fstp dword ptr ds : [esi+0xB4]
        fld dword ptr ds : [eax+4]
        fst dword ptr ds : [esi+0xF0]
        fstp dword ptr ds : [esi+0xB8]
        mov eax, dword ptr ds : [eax+8]
        push eax
        call dword ptr ds : [edx+0x70]
        mov byte ptr ds : [esi+0xD8], bl
        mov byte ptr ds : [esi+0xD9], bl
        mov byte ptr ds : [esi+0xDA], bl
        mov byte ptr ds : [esi+0xDB], 0xFF
        public_599b62 : nop
        pop esi
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x599ac0)
    }
}

#undef public_599b62
