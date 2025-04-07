#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6340e10);

#define public_6340e30 _public_6340e30
#define public_6340e3e _public_6340e3e
#define public_6340e42 _public_6340e42
#define public_6340e50 _public_6340e50
#define public_6340e5c _public_6340e5c
#define public_6340e65 _public_6340e65

PROC_DECLARE(0x6340e10, internal_6340e10, public_6340e10);
extern "C" NAKED register_t __cdecl internal_6340e10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0xB9]
        test bl, bl
        jne public_6340e42
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xB9]
        test bl, bl
        jne public_6340e3e
        lea esp, ss:[esp]
        public_6340e30 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xB9]
        test bl, bl
        je public_6340e30
        public_6340e3e : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6340e42 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6340e5c
        lea esp, ss:[esp]
        public_6340e50 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6340e50
        public_6340e5c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6340e65
        mov dword ptr ds : [ecx], eax
        public_6340e65 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6340e10)
    }
}

#undef public_6340e30
#undef public_6340e3e
#undef public_6340e42
#undef public_6340e50
#undef public_6340e5c
#undef public_6340e65
