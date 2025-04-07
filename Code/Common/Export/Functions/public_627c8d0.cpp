#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627c8d0);

#define public_627c8f1 _public_627c8f1
#define public_627c900 _public_627c900
#define public_627c918 _public_627c918

PROC_DECLARE(0x627c8d0, internal_627c8d0, public_627c8d0);
extern "C" NAKED register_t __cdecl internal_627c8d0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx]
        test eax, eax
        jne public_627c900
        mov al, byte ptr ss : [esp+8]
        test al, al
        je public_627c8f1
        mov ecx, dword ptr ds : [ecx+4]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [edx], ecx
        setne al
        ret 8
        public_627c8f1 : nop
        mov ecx, dword ptr ds : [ecx+8]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [edx], ecx
        setne al
        ret 8
        public_627c900 : nop
        mov cl, byte ptr ss : [esp+8]
        test cl, cl
        je public_627c918
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edx]
        xor eax, eax
        test ecx, ecx
        setne al
        ret 8
        public_627c918 : nop
        mov ecx, dword ptr ds : [eax+4]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [edx], ecx
        setne al
        ret 8
        UNREACHABLE_TRAP(0x627c8d0)
    }
}

#undef public_627c8f1
#undef public_627c900
#undef public_627c918
