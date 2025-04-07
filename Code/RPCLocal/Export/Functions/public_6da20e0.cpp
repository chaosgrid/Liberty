#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da20e0);

#define public_6da20f9 _public_6da20f9
#define public_6da2110 _public_6da2110
#define public_6da211c _public_6da211c
#define public_6da2120 _public_6da2120
#define public_6da2130 _public_6da2130
#define public_6da213b _public_6da213b

PROC_DECLARE(0x6da20e0, internal_6da20e0, public_6da20e0);
extern "C" NAKED register_t __cdecl internal_6da20e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x48]
        test dl, dl
        push ebx
        jne public_6da20f9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6da20f9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6da20f9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x49]
        test bl, bl
        jne public_6da2120
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        jne public_6da211c
        lea esp, ss:[esp]
        public_6da2110 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        je public_6da2110
        public_6da211c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6da2120 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6da213b
        lea esp, ss:[esp]
        public_6da2130 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6da2130
        public_6da213b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6da20e0)
    }
}

#undef public_6da20f9
#undef public_6da2110
#undef public_6da211c
#undef public_6da2120
#undef public_6da2130
#undef public_6da213b
