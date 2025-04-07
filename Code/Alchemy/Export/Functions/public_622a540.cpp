#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a540);

#define public_622a559 _public_622a559
#define public_622a56c _public_622a56c
#define public_622a578 _public_622a578
#define public_622a57c _public_622a57c
#define public_622a585 _public_622a585
#define public_622a590 _public_622a590

PROC_DECLARE(0x622a540, internal_622a540, public_622a540);
extern "C" NAKED register_t __cdecl internal_622a540()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        jne public_622a559
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_622a559
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_622a559 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_622a57c
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_622a578
        public_622a56c : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_622a56c
        public_622a578 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_622a57c : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_622a590
        public_622a585 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_622a585
        public_622a590 : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x622a540)
    }
}

#undef public_622a559
#undef public_622a56c
#undef public_622a578
#undef public_622a57c
#undef public_622a585
#undef public_622a590
