#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43ce90);

#define public_43ceb1 _public_43ceb1
#define public_43cec0 _public_43cec0
#define public_43ced8 _public_43ced8

PROC_DECLARE(0x43ce90, internal_43ce90, public_43ce90);
extern "C" NAKED register_t __cdecl internal_43ce90()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx]
        test eax, eax
        jne public_43cec0
        mov al, byte ptr ss : [esp+8]
        test al, al
        je public_43ceb1
        mov ecx, dword ptr ds : [ecx+4]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [edx], ecx
        setne al
        ret 8
        public_43ceb1 : nop
        mov ecx, dword ptr ds : [ecx+8]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [edx], ecx
        setne al
        ret 8
        public_43cec0 : nop
        mov cl, byte ptr ss : [esp+8]
        test cl, cl
        je public_43ced8
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edx]
        xor eax, eax
        test ecx, ecx
        setne al
        ret 8
        public_43ced8 : nop
        mov ecx, dword ptr ds : [eax+4]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [edx], ecx
        setne al
        ret 8
        UNREACHABLE_TRAP(0x43ce90)
    }
}

#undef public_43ceb1
#undef public_43cec0
#undef public_43ced8
