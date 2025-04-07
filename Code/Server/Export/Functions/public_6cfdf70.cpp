#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdf70);

#define public_6cfdf89 _public_6cfdf89
#define public_6cfdfa0 _public_6cfdfa0
#define public_6cfdfac _public_6cfdfac
#define public_6cfdfb0 _public_6cfdfb0
#define public_6cfdfc0 _public_6cfdfc0
#define public_6cfdfcb _public_6cfdfcb

PROC_DECLARE(0x6cfdf70, internal_6cfdf70, public_6cfdf70);
extern "C" NAKED register_t __cdecl internal_6cfdf70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_6cfdf89
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6cfdf89
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6cfdf89 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6cfdfb0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6cfdfac
        lea esp, ss:[esp]
        public_6cfdfa0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6cfdfa0
        public_6cfdfac : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6cfdfb0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6cfdfcb
        lea esp, ss:[esp]
        public_6cfdfc0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6cfdfc0
        public_6cfdfcb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6cfdf70)
    }
}

#undef public_6cfdf89
#undef public_6cfdfa0
#undef public_6cfdfac
#undef public_6cfdfb0
#undef public_6cfdfc0
#undef public_6cfdfcb
