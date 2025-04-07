#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16120);

#define public_6d16141 _public_6d16141
#define public_6d16150 _public_6d16150
#define public_6d16168 _public_6d16168

PROC_DECLARE(0x6d16120, internal_6d16120, public_6d16120);
extern "C" NAKED register_t __cdecl internal_6d16120()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx]
        test eax, eax
        jne public_6d16150
        mov al, byte ptr ss : [esp+8]
        test al, al
        je public_6d16141
        mov ecx, dword ptr ds : [ecx+4]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [edx], ecx
        setne al
        ret 8
        public_6d16141 : nop
        mov ecx, dword ptr ds : [ecx+8]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [edx], ecx
        setne al
        ret 8
        public_6d16150 : nop
        mov cl, byte ptr ss : [esp+8]
        test cl, cl
        je public_6d16168
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edx]
        xor eax, eax
        test ecx, ecx
        setne al
        ret 8
        public_6d16168 : nop
        mov ecx, dword ptr ds : [eax+4]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [edx], ecx
        setne al
        ret 8
        UNREACHABLE_TRAP(0x6d16120)
    }
}

#undef public_6d16141
#undef public_6d16150
#undef public_6d16168
