#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55200);

#define public_6f55220 _public_6f55220
#define public_6f5522e _public_6f5522e
#define public_6f55232 _public_6f55232
#define public_6f55240 _public_6f55240
#define public_6f5524c _public_6f5524c
#define public_6f55255 _public_6f55255

PROC_DECLARE(0x6f55200, internal_6f55200, public_6f55200);
extern "C" NAKED register_t __cdecl internal_6f55200()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0xE5]
        test bl, bl
        jne public_6f55232
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xE5]
        test bl, bl
        jne public_6f5522e
        lea esp, ss:[esp]
        public_6f55220 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xE5]
        test bl, bl
        je public_6f55220
        public_6f5522e : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f55232 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f5524c
        lea esp, ss:[esp]
        public_6f55240 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f55240
        public_6f5524c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f55255
        mov dword ptr ds : [ecx], eax
        public_6f55255 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f55200)
    }
}

#undef public_6f55220
#undef public_6f5522e
#undef public_6f55232
#undef public_6f55240
#undef public_6f5524c
#undef public_6f55255
