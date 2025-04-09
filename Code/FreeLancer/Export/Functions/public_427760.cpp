#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427760);

#define public_427779 _public_427779
#define public_427790 _public_427790
#define public_42779c _public_42779c
#define public_4277a0 _public_4277a0
#define public_4277b0 _public_4277b0
#define public_4277bb _public_4277bb

PROC_DECLARE(0x427760, internal_427760, public_427760);
extern "C" NAKED register_t __cdecl internal_427760()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x58]
        test dl, dl
        push ebx
        jne public_427779
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_427779
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_427779 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x59]
        test bl, bl
        jne public_4277a0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x59]
        test bl, bl
        jne public_42779c
        lea esp, ss:[esp]
        public_427790 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x59]
        test bl, bl
        je public_427790
        public_42779c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_4277a0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_4277bb
        lea esp, ss:[esp]
        public_4277b0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_4277b0
        public_4277bb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x427760)
    }
}

#undef public_427779
#undef public_427790
#undef public_42779c
#undef public_4277a0
#undef public_4277b0
#undef public_4277bb
