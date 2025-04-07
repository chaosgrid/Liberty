#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6319bd0);

#define public_6319be9 _public_6319be9
#define public_6319c00 _public_6319c00
#define public_6319c0c _public_6319c0c
#define public_6319c10 _public_6319c10
#define public_6319c20 _public_6319c20
#define public_6319c2b _public_6319c2b

PROC_DECLARE(0x6319bd0, internal_6319bd0, public_6319bd0);
extern "C" NAKED register_t __cdecl internal_6319bd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x74]
        test dl, dl
        push ebx
        jne public_6319be9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6319be9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6319be9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x75]
        test bl, bl
        jne public_6319c10
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x75]
        test bl, bl
        jne public_6319c0c
        lea esp, ss:[esp]
        public_6319c00 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x75]
        test bl, bl
        je public_6319c00
        public_6319c0c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6319c10 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6319c2b
        lea esp, ss:[esp]
        public_6319c20 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6319c20
        public_6319c2b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6319bd0)
    }
}

#undef public_6319be9
#undef public_6319c00
#undef public_6319c0c
#undef public_6319c10
#undef public_6319c20
#undef public_6319c2b
