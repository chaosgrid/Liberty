#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6290480);

#define public_6290496 _public_6290496
#define public_62904a1 _public_62904a1
#define public_62904a5 _public_62904a5
#define public_62904b0 _public_62904b0
#define public_62904bc _public_62904bc
#define public_62904c5 _public_62904c5

PROC_DECLARE(0x6290480, internal_6290480, public_6290480);
extern "C" NAKED register_t __cdecl internal_6290480()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x55]
        test bl, bl
        jne public_62904a5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        jne public_62904a1
        public_6290496 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        je public_6290496
        public_62904a1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_62904a5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_62904bc
        nop 
        public_62904b0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_62904b0
        public_62904bc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_62904c5
        mov dword ptr ds : [ecx], eax
        public_62904c5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6290480)
    }
}

#undef public_6290496
#undef public_62904a1
#undef public_62904a5
#undef public_62904b0
#undef public_62904bc
#undef public_62904c5
