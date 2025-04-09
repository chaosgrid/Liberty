#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4057a0);

#define public_4057b9 _public_4057b9
#define public_4057d0 _public_4057d0
#define public_4057dc _public_4057dc
#define public_4057e0 _public_4057e0
#define public_4057f0 _public_4057f0
#define public_4057fb _public_4057fb

PROC_DECLARE(0x4057a0, internal_4057a0, public_4057a0);
extern "C" NAKED register_t __cdecl internal_4057a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x44]
        test dl, dl
        push ebx
        jne public_4057b9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_4057b9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_4057b9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x45]
        test bl, bl
        jne public_4057e0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        jne public_4057dc
        lea esp, ss:[esp]
        public_4057d0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        je public_4057d0
        public_4057dc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_4057e0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_4057fb
        lea esp, ss:[esp]
        public_4057f0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_4057f0
        public_4057fb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4057a0)
    }
}

#undef public_4057b9
#undef public_4057d0
#undef public_4057dc
#undef public_4057e0
#undef public_4057f0
#undef public_4057fb
