#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ee90);

#define public_6f3eea9 _public_6f3eea9
#define public_6f3eec0 _public_6f3eec0
#define public_6f3eecc _public_6f3eecc
#define public_6f3eed0 _public_6f3eed0
#define public_6f3eee0 _public_6f3eee0
#define public_6f3eeeb _public_6f3eeeb

PROC_DECLARE(0x6f3ee90, internal_6f3ee90, public_6f3ee90);
extern "C" NAKED register_t __cdecl internal_6f3ee90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x2C]
        test dl, dl
        push ebx
        jne public_6f3eea9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f3eea9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f3eea9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x2D]
        test bl, bl
        jne public_6f3eed0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_6f3eecc
        lea esp, ss:[esp]
        public_6f3eec0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_6f3eec0
        public_6f3eecc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f3eed0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f3eeeb
        lea esp, ss:[esp]
        public_6f3eee0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f3eee0
        public_6f3eeeb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f3ee90)
    }
}

#undef public_6f3eea9
#undef public_6f3eec0
#undef public_6f3eecc
#undef public_6f3eed0
#undef public_6f3eee0
#undef public_6f3eeeb
