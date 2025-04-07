#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411a70);

#define public_411a86 _public_411a86
#define public_411a91 _public_411a91
#define public_411a95 _public_411a95
#define public_411aa0 _public_411aa0
#define public_411aac _public_411aac
#define public_411ab5 _public_411ab5

PROC_DECLARE(0x411a70, internal_411a70, public_411a70);
extern "C" NAKED register_t __cdecl internal_411a70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_411a95
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_411a91
        public_411a86 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_411a86
        public_411a91 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_411a95 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_411aac
        nop 
        public_411aa0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_411aa0
        public_411aac : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_411ab5
        mov dword ptr ds : [ecx], eax
        public_411ab5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x411a70)
    }
}

#undef public_411a86
#undef public_411a91
#undef public_411a95
#undef public_411aa0
#undef public_411aac
#undef public_411ab5
