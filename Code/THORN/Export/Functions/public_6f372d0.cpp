#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f372d0);

#define public_6f372e9 _public_6f372e9
#define public_6f37300 _public_6f37300
#define public_6f3730c _public_6f3730c
#define public_6f37310 _public_6f37310
#define public_6f37320 _public_6f37320
#define public_6f3732b _public_6f3732b

PROC_DECLARE(0x6f372d0, internal_6f372d0, public_6f372d0);
extern "C" NAKED register_t __cdecl internal_6f372d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x20]
        test dl, dl
        push ebx
        jne public_6f372e9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f372e9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f372e9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_6f37310
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6f3730c
        lea esp, ss:[esp]
        public_6f37300 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6f37300
        public_6f3730c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f37310 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f3732b
        lea esp, ss:[esp]
        public_6f37320 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f37320
        public_6f3732b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f372d0)
    }
}

#undef public_6f372e9
#undef public_6f37300
#undef public_6f3730c
#undef public_6f37310
#undef public_6f37320
#undef public_6f3732b
