#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6377cf0);

#define public_6377d3d _public_6377d3d
#define public_6377d6c _public_6377d6c
#define public_6377d93 _public_6377d93
#define public_6377dbf _public_6377dbf

PROC_DECLARE(0x6377cf0, internal_6377cf0, public_6377cf0);
extern "C" NAKED register_t __cdecl internal_6377cf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC8
        push esi
        mov esi, dword ptr ds : [public_639931c]
        push edi
        push eax
        lea ecx, ss:[esp+0xC]
/*FIXUP push offset public_63f2e24 @0x6377d07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2e24
        push ecx
        call esi
        mov eax, dword ptr ss : [esp+0xE4]
        add esp, 0xC
        test eax, eax
        je public_6377d3d
        mov edx, dword ptr ds : [eax]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+8]
        repne scasb
        not ecx
        push edx
        dec ecx
        lea eax, ss:[esp+ecx+0xC]
/*FIXUP push offset public_63f10fc @0x6377d32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f10fc
        push eax
        call esi
        add esp, 0xC
        public_6377d3d : nop
        mov eax, dword ptr ss : [esp+0xDC]
        test eax, eax
        je public_6377d6c
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        push ecx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0xC]
        repne scasb
        not ecx
        push edx
        dec ecx
        lea eax, ss:[esp+ecx+0x10]
/*FIXUP push offset public_63f2e1c @0x6377d61*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2e1c
        push eax
        call esi
        add esp, 0x10
        public_6377d6c : nop
        mov edx, dword ptr ds : [public_658b668]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+8]
        repne scasb
        not ecx
        dec ecx
        add edx, ecx
        mov esi, 0x1FF
        sub esi, ecx
        mov dword ptr ds : [public_658b668], edx
        jns public_6377d93
        xor esi, esi
        public_6377d93 : nop
        cmp dword ptr ds : [public_658b668], 0x50
        mov edi, dword ptr ds : [public_6399230]
        jl public_6377dbf
        test esi, esi
        jle public_6377dbf
        mov eax, esi
        push eax
/*FIXUP push offset public_63edccc @0x6377da9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
/*FIXUP push offset public_658b468 @0x6377dae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b468
        mov dword ptr ds : [public_658b668], ecx
        dec esi
        call edi
        add esp, 0xC
        public_6377dbf : nop
        push esi
        lea ecx, ss:[esp+0xC]
        push ecx
/*FIXUP push offset public_658b468 @0x6377dc5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b468
        call edi
        add esp, 0xC
        pop edi
        pop esi
        add esp, 0xC8
        ret 
        UNREACHABLE_TRAP(0x6377cf0)
    }
}

#undef public_6377d3d
#undef public_6377d6c
#undef public_6377d93
#undef public_6377dbf
