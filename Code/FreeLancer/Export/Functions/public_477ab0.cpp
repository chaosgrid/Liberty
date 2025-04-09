#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a780);
CLANG_FORWARD_PROC_SYMBOL(public_45a7a0);
CLANG_FORWARD_PROC_SYMBOL(public_45dcb0);
CLANG_FORWARD_PROC_SYMBOL(public_477ab0);
CLANG_FORWARD_PROC_SYMBOL(public_47b410);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_477ae5 _public_477ae5
#define public_477b14 _public_477b14
#define public_477ba5 _public_477ba5
#define public_477bbf _public_477bbf
#define public_477be8 _public_477be8

PROC_DECLARE(0x477ab0, internal_477ab0, public_477ab0);
extern "C" NAKED register_t __cdecl internal_477ab0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
/*FIXUP push offset public_5cb7c4 @0x477ab5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7c4
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_477be8
/*FIXUP push offset public_5caf68 @0x477aca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf68
        call public_59da10
        mov esi, eax
        add esp, 4
        xor bl, bl
        test esi, esi
        je public_477ae5
        test byte ptr ds : [esi+0x6C], 4
        je public_477b14
        public_477ae5 : nop
        push 0
        push 0x66
        call public_45a7a0
        add esp, 4
        push eax
/*FIXUP push offset public_5caf68 @0x477af2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf68
/*FIXUP push offset public_5caf68 @0x477af7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf68
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_477be8
        and byte ptr ds : [esi+0x6C], 0xFC
        mov bl, 1
        public_477b14 : nop
        lea eax, ss:[esp+8]
        push eax
        push 0x66
        mov dword ptr ss : [esp+0x10], 0xBF23D70A
        mov dword ptr ss : [esp+0x14], 0x3EA8F5C3
        mov dword ptr ss : [esp+0x18], 0xBFA4DD2F
        call public_45a780
        mov ecx, dword ptr ds : [public_66d3f0]
        add esp, 8
        call public_45dcb0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        mov esi, eax
        mov eax, dword ptr ds : [esi+4]
        push 0
        push eax
/*FIXUP push offset public_5cb7c4 @0x477b55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7c4
/*FIXUP push offset public_5cb7c4 @0x477b5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7c4
        call public_59db20
        add esp, 0x10
        test eax, eax
        je public_477bbf
        and byte ptr ds : [eax+0x6C], 0xFC
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0x18]
        push 0
        push ecx
        mov dword ptr ds : [esi+0x360], eax
        mov eax, dword ptr ds : [esi]
        push 0x47
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x360]
        call public_47b410
        test bl, bl
        je public_477ba5
        mov ecx, esi
        call public_47b410
        public_477ba5 : nop
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_477bbf
        mov dword ptr ds : [eax+0x974], esi
        mov eax, dword ptr ds : [esi+0x360]
        and byte ptr ds : [eax+0x6C], 0xFC
        public_477bbf : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        push 0x48
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi]
        push 0
        push eax
        push 0x13
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        public_477be8 : nop
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x477ab0)
    }
}

#undef public_477ae5
#undef public_477b14
#undef public_477ba5
#undef public_477bbf
#undef public_477be8
