#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d21c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d3e70);

#define public_62c764d _public_62c764d
#define public_62c7689 _public_62c7689
#define public_62c76cd _public_62c76cd
#define public_62c76fe _public_62c76fe

PROC_DECLARE(0x62c7610, internal_62c7610, public_62c7610);
extern "C" NAKED register_t __cdecl internal_62c7610()
{
    __asm
    {
        sub esp, 0x100
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [eax+0x17C]
        mov dword ptr ds : [esi+0x3C], ecx
        mov edx, dword ptr ds : [eax+0x190]
        mov cl, byte ptr ds : [esi+0x38]
        test cl, cl
        mov dword ptr ds : [esi+0x40], edx
        mov eax, dword ptr ds : [eax+0x19C]
        mov dword ptr ds : [esi+0x44], eax
        je public_62c764d
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        pop esi
        add esp, 0x100
        ret 
        public_62c764d : nop
        mov eax, dword ptr ds : [esi+0x34]
        dec eax
        je public_62c76cd
        dec eax
        je public_62c7689
        dec eax
        je public_62c76cd
        mov esi, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x1580]
        mov eax, dword ptr ds : [ecx]
        add esi, 0x14FC
        call dword ptr ds : [eax+0x20]
        push eax
        lea ecx, ss:[esp+8]
/*FIXUP push offset public_639f7a8 @0x62c7672*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f7a8
        push ecx
        call dword ptr ds : [public_639931c]
        add esp, 0xC
        pop esi
        add esp, 0x100
        ret 
        public_62c7689 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        je public_62c76fe
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [esi+0x40]
        call public_62d21c0
        mov ecx, dword ptr ds : [esi+0x20]
        call public_62d3e70
        test eax, eax
        je public_62c76fe
        cmp dword ptr ds : [eax+8], 7
        jne public_62c76fe
        mov al, byte ptr ds : [esi+0x48]
        test al, al
        je public_62c76fe
        mov ecx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [ecx]
        add esi, 0xBC
        push esi
        call dword ptr ds : [eax+0x28]
        pop esi
        add esp, 0x100
        ret 
        public_62c76cd : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        test ecx, ecx
        je public_62c76fe
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [esi+0x20]
        call public_62d3e70
        test eax, eax
        je public_62c76fe
        cmp dword ptr ds : [eax+8], 2
        jne public_62c76fe
        mov al, byte ptr ds : [esi+0x48]
        test al, al
        je public_62c76fe
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [ecx]
        add esi, 0x4C
        push esi
        call dword ptr ds : [eax+0x28]
        public_62c76fe : nop
        pop esi
        add esp, 0x100
        ret 
        UNREACHABLE_TRAP(0x62c7610)
    }
}

#undef public_62c764d
#undef public_62c7689
#undef public_62c76cd
#undef public_62c76fe
