#include "Common-PCH.h"


#define public_62c7740 _public_62c7740
#define public_62c7770 _public_62c7770
#define public_62c7773 _public_62c7773
#define public_62c7781 _public_62c7781

PROC_DECLARE(0x62c7710, internal_62c7710, public_62c7710);
extern "C" NAKED register_t __cdecl internal_62c7710()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [ecx+0x17C]
        mov dword ptr ds : [eax+0x3C], edx
        mov edx, dword ptr ds : [ecx+0x190]
        mov dword ptr ds : [eax+0x40], edx
        mov dl, byte ptr ds : [eax+0x38]
        test dl, dl
        mov ecx, dword ptr ds : [ecx+0x19C]
        mov dword ptr ds : [eax+0x44], ecx
        je public_62c7740
        test ecx, ecx
        je public_62c7770
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x58]
        public_62c7740 : nop
        mov ecx, dword ptr ds : [eax+0x34]
        dec ecx
        je public_62c7781
        dec ecx
        je public_62c7773
        dec ecx
        je public_62c7781
/*FIXUP push offset public_639f810 @0x62c774c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f810
        push 0x504
/*FIXUP push offset public_639f71c @0x62c7756*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f71c
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x62c7760*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62c7770 : nop
        ret 4
        public_62c7773 : nop
        mov eax, dword ptr ds : [eax+0x40]
        test eax, eax
        je public_62c7770
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        jmp dword ptr ds : [edx+0x58]
        public_62c7781 : nop
        mov eax, dword ptr ds : [eax+0x3C]
        test eax, eax
        je public_62c7770
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        jmp dword ptr ds : [edx+0x58]
        UNREACHABLE_TRAP(0x62c7710)
    }
}

#undef public_62c7740
#undef public_62c7770
#undef public_62c7773
#undef public_62c7781
