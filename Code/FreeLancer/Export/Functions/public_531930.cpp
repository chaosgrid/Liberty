#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_531930);

#define public_531946 _public_531946
#define public_531951 _public_531951
#define public_531955 _public_531955
#define public_531960 _public_531960
#define public_53196c _public_53196c
#define public_531975 _public_531975

PROC_DECLARE(0x531930, internal_531930, public_531930);
extern "C" NAKED register_t __cdecl internal_531930()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x35]
        test bl, bl
        jne public_531955
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_531951
        public_531946 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_531946
        public_531951 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_531955 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_53196c
        nop 
        public_531960 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_531960
        public_53196c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_531975
        mov dword ptr ds : [ecx], eax
        public_531975 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x531930)
    }
}

#undef public_531946
#undef public_531951
#undef public_531955
#undef public_531960
#undef public_53196c
#undef public_531975
