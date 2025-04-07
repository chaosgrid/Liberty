#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96eb0);

#define public_6d96ec9 _public_6d96ec9
#define public_6d96ee0 _public_6d96ee0
#define public_6d96eec _public_6d96eec
#define public_6d96ef0 _public_6d96ef0
#define public_6d96f00 _public_6d96f00
#define public_6d96f0b _public_6d96f0b

PROC_DECLARE(0x6d96eb0, internal_6d96eb0, public_6d96eb0);
extern "C" NAKED register_t __cdecl internal_6d96eb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_6d96ec9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6d96ec9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6d96ec9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6d96ef0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6d96eec
        lea esp, ss:[esp]
        public_6d96ee0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6d96ee0
        public_6d96eec : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6d96ef0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6d96f0b
        lea esp, ss:[esp]
        public_6d96f00 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6d96f00
        public_6d96f0b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d96eb0)
    }
}

#undef public_6d96ec9
#undef public_6d96ee0
#undef public_6d96eec
#undef public_6d96ef0
#undef public_6d96f00
#undef public_6d96f0b
