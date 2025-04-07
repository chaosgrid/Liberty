#include "Common-PCH.h"


#define public_62c75b0 _public_62c75b0
#define public_62c75ec _public_62c75ec
#define public_62c75fd _public_62c75fd
#define public_62c7607 _public_62c7607

PROC_DECLARE(0x62c7570, internal_62c7570, public_62c7570);
extern "C" NAKED register_t __cdecl internal_62c7570()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [ecx+0x17C]
        mov dword ptr ds : [eax+0x3C], edx
        mov edx, dword ptr ds : [ecx+0x190]
        mov dword ptr ds : [eax+0x40], edx
        mov dl, byte ptr ds : [eax+0x2C]
        mov ecx, dword ptr ds : [ecx+0x19C]
        sub esp, 0x100
        test dl, dl
        mov dword ptr ds : [eax+0x44], ecx
        je public_62c7607
        mov dl, byte ptr ds : [eax+0x38]
        test dl, dl
        je public_62c75b0
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        add esp, 0x100
        ret 
        public_62c75b0 : nop
        mov ecx, dword ptr ds : [eax+0x34]
        dec ecx
        je public_62c75fd
        dec ecx
        je public_62c75ec
        dec ecx
        je public_62c75fd
        mov eax, dword ptr ds : [eax+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        push eax
        lea eax, ss:[esp+4]
/*FIXUP push offset public_639f7a8 @0x62c75d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f7a8
        push eax
        call dword ptr ds : [public_639931c]
        add esp, 0xC
        add esp, 0x100
        ret 
        public_62c75ec : nop
        mov eax, dword ptr ds : [eax+0x40]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        add esp, 0x100
        ret 
        public_62c75fd : nop
        mov eax, dword ptr ds : [eax+0x3C]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_62c7607 : nop
        add esp, 0x100
        ret 
        UNREACHABLE_TRAP(0x62c7570)
    }
}

#undef public_62c75b0
#undef public_62c75ec
#undef public_62c75fd
#undef public_62c7607
