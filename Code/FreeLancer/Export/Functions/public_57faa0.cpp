#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57faa0);

#define public_57fab9 _public_57fab9
#define public_57fad0 _public_57fad0
#define public_57fadc _public_57fadc
#define public_57fae0 _public_57fae0
#define public_57faf0 _public_57faf0
#define public_57fafb _public_57fafb

PROC_DECLARE(0x57faa0, internal_57faa0, public_57faa0);
extern "C" NAKED register_t __cdecl internal_57faa0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0xE]
        test dl, dl
        push ebx
        jne public_57fab9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_57fab9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_57fab9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0xF]
        test bl, bl
        jne public_57fae0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0xF]
        test bl, bl
        jne public_57fadc
        lea esp, ss:[esp]
        public_57fad0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0xF]
        test bl, bl
        je public_57fad0
        public_57fadc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_57fae0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_57fafb
        lea esp, ss:[esp]
        public_57faf0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_57faf0
        public_57fafb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x57faa0)
    }
}

#undef public_57fab9
#undef public_57fad0
#undef public_57fadc
#undef public_57fae0
#undef public_57faf0
#undef public_57fafb
