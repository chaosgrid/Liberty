#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_63743a0);

#define public_63743b8 _public_63743b8
#define public_63743d7 _public_63743d7
#define public_63743eb _public_63743eb
#define public_63743ee _public_63743ee
#define public_63743fc _public_63743fc
#define public_63743ff _public_63743ff
#define public_637440d _public_637440d
#define public_6374410 _public_6374410
#define public_637441e _public_637441e
#define public_6374421 _public_6374421
#define public_637443c _public_637443c
#define public_637445e _public_637445e

PROC_DECLARE(0x63743a0, internal_63743a0, public_63743a0);
extern "C" NAKED register_t __cdecl internal_63743a0()
{
    __asm
    {
        push esi
/*FIXUP push offset public_63f117c @0x63743a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f117c
        call public_6356960
        mov esi, dword ptr ds : [public_658b810]
        add esp, 4
        test esi, esi
        je public_63743d7
        public_63743b8 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_63743d7
        mov eax, dword ptr ds : [esi+0x4C]
        push eax
/*FIXUP push offset public_63f10fc @0x63743c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f10fc
        call public_6356960
        mov esi, dword ptr ds : [esi+0x30]
        add esp, 8
        test esi, esi
        jne public_63743b8
        public_63743d7 : nop
        mov eax, dword ptr ds : [public_658b840]
        test eax, eax
        je public_63743eb
        mov ecx, dword ptr ds : [eax+0x14]
        and ecx, 0xFFFFFF
        jmp public_63743ee
        public_63743eb : nop
        or ecx, 0xFFFFFFFF
        public_63743ee : nop
        mov eax, dword ptr ds : [public_658b818]
        test eax, eax
        je public_63743fc
        mov esi, dword ptr ds : [eax+0x4C]
        jmp public_63743ff
        public_63743fc : nop
        or esi, 0xFFFFFFFF
        public_63743ff : nop
        mov eax, dword ptr ds : [public_658b820]
        test eax, eax
        je public_637440d
        mov edx, dword ptr ds : [eax+0x4C]
        jmp public_6374410
        public_637440d : nop
        or edx, 0xFFFFFFFF
        public_6374410 : nop
        mov eax, dword ptr ds : [public_658b81c]
        test eax, eax
        je public_637441e
        mov eax, dword ptr ds : [eax+0x4C]
        jmp public_6374421
        public_637441e : nop
        or eax, 0xFFFFFFFF
        public_6374421 : nop
        push ecx
        push esi
        push edx
        push eax
/*FIXUP push offset public_63f1128 @0x6374425*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f1128
        call public_6356960
        mov esi, dword ptr ds : [public_658b838]
        add esp, 0x14
        test esi, esi
        je public_637445e
        public_637443c : nop
        cmp dword ptr ds : [esi], 0
        je public_637445e
        mov ecx, dword ptr ds : [esi+0x14]
        and ecx, 0xFFFFFF
        push ecx
/*FIXUP push offset public_63f10fc @0x637444b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f10fc
        call public_6356960
        mov esi, dword ptr ds : [esi]
        add esp, 8
        test esi, esi
        jne public_637443c
/*FIXUP public_637445e : nop
        push offset public_63edccc @0x637445e*/
  FIXUP public_637445e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        call public_6356960
        add esp, 4
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63743a0)
    }
}

#undef public_63743b8
#undef public_63743d7
#undef public_63743eb
#undef public_63743ee
#undef public_63743fc
#undef public_63743ff
#undef public_637440d
#undef public_6374410
#undef public_637441e
#undef public_6374421
#undef public_637443c
#undef public_637445e
