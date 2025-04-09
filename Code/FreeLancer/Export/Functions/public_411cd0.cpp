#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411cd0);

#define public_411cf3 _public_411cf3
#define public_411d0a _public_411d0a
#define public_411d21 _public_411d21
#define public_411d38 _public_411d38

PROC_DECLARE(0x411cd0, internal_411cd0, public_411cd0);
extern "C" NAKED register_t __cdecl internal_411cd0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ds : [public_5c6d24]
/*FIXUP push offset public_5c8b14 @0x411cdc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b14
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_411cf3
        pop edi
        mov eax, 0xFFFFFFFE
        pop esi
        ret 
/*FIXUP public_411cf3 : nop
        push offset public_5c8b0c @0x411cf3*/
  FIXUP public_411cf3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b0c
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_411d0a
        pop edi
        mov eax, 1
        pop esi
        ret 
/*FIXUP public_411d0a : nop
        push offset public_5c8b04 @0x411d0a*/
  FIXUP public_411d0a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b04
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_411d21
        pop edi
        mov eax, 2
        pop esi
        ret 
/*FIXUP public_411d21 : nop
        push offset public_5c8af8 @0x411d21*/
  FIXUP public_411d21 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8af8
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_411d38
        pop edi
        mov eax, 3
        pop esi
        ret 
        public_411d38 : nop
        push esi
        push 0x2EC
/*FIXUP push offset public_5c8a08 @0x411d3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8a08
        mov eax, 0x100001
/*FIXUP push offset public_5c8ac0 @0x411d48*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ac0
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x411cd0)
    }
}

#undef public_411cf3
#undef public_411d0a
#undef public_411d21
#undef public_411d38
