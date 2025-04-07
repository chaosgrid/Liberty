#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85720);

#define public_6d85741 _public_6d85741
#define public_6d85750 _public_6d85750
#define public_6d85768 _public_6d85768

PROC_DECLARE(0x6d85720, internal_6d85720, public_6d85720);
extern "C" NAKED register_t __cdecl internal_6d85720()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx]
        test eax, eax
        jne public_6d85750
        mov al, byte ptr ss : [esp+8]
        test al, al
        je public_6d85741
        mov ecx, dword ptr ds : [ecx+4]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [edx], ecx
        setne al
        ret 8
        public_6d85741 : nop
        mov ecx, dword ptr ds : [ecx+8]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [edx], ecx
        setne al
        ret 8
        public_6d85750 : nop
        mov cl, byte ptr ss : [esp+8]
        test cl, cl
        je public_6d85768
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edx]
        xor eax, eax
        test ecx, ecx
        setne al
        ret 8
        public_6d85768 : nop
        mov ecx, dword ptr ds : [eax+4]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [edx], ecx
        setne al
        ret 8
        UNREACHABLE_TRAP(0x6d85720)
    }
}

#undef public_6d85741
#undef public_6d85750
#undef public_6d85768
