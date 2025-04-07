#include "Common-PCH.h"


#define public_62f96a1 _public_62f96a1
#define public_62f96c4 _public_62f96c4
#define public_62f96d1 _public_62f96d1
#define public_62f96e0 _public_62f96e0
#define public_62f96ea _public_62f96ea
#define public_62f96f1 _public_62f96f1
#define public_62f96f9 _public_62f96f9

PROC_DECLARE(0x62f9690, internal_62f9690, public_62f9690);
extern "C" NAKED register_t __cdecl internal_62f9690()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fcad8]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_62f96f9
        mov edi, dword ptr ss : [esp+0xC]
        public_62f96a1 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax]
        test al, al
        je public_62f96f9
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62f96d1
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62f96f1
        public_62f96c4 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_62f96c4
        jmp public_62f96f1
        public_62f96d1 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62f96ea
        lea esp, ss:[esp]
        public_62f96e0 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_62f96e0
        public_62f96ea : nop
        cmp dword ptr ds : [esi+8], eax
        je public_62f96f1
        mov esi, eax
        public_62f96f1 : nop
        cmp esi, dword ptr ds : [public_63fcad8]
        jne public_62f96a1
        public_62f96f9 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62f9690)
    }
}

#undef public_62f96a1
#undef public_62f96c4
#undef public_62f96d1
#undef public_62f96e0
#undef public_62f96ea
#undef public_62f96f1
#undef public_62f96f9
