#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44cd90);

#define public_44cda6 _public_44cda6
#define public_44cdb1 _public_44cdb1
#define public_44cdb5 _public_44cdb5
#define public_44cdc0 _public_44cdc0
#define public_44cdcc _public_44cdcc
#define public_44cdd5 _public_44cdd5

PROC_DECLARE(0x44cd90, internal_44cd90, public_44cd90);
extern "C" NAKED register_t __cdecl internal_44cd90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0xE]
        test bl, bl
        jne public_44cdb5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xE]
        test bl, bl
        jne public_44cdb1
        public_44cda6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xE]
        test bl, bl
        je public_44cda6
        public_44cdb1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_44cdb5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_44cdcc
        nop 
        public_44cdc0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_44cdc0
        public_44cdcc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_44cdd5
        mov dword ptr ds : [ecx], eax
        public_44cdd5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x44cd90)
    }
}

#undef public_44cda6
#undef public_44cdb1
#undef public_44cdb5
#undef public_44cdc0
#undef public_44cdcc
#undef public_44cdd5
