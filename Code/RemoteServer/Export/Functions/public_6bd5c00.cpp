#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5c00);

#define public_6bd5c21 _public_6bd5c21
#define public_6bd5c30 _public_6bd5c30
#define public_6bd5c48 _public_6bd5c48

PROC_DECLARE(0x6bd5c00, internal_6bd5c00, public_6bd5c00);
extern "C" NAKED register_t __cdecl internal_6bd5c00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx]
        test eax, eax
        jne public_6bd5c30
        mov al, byte ptr ss : [esp+8]
        test al, al
        je public_6bd5c21
        mov ecx, dword ptr ds : [ecx+4]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [edx], ecx
        setne al
        ret 8
        public_6bd5c21 : nop
        mov ecx, dword ptr ds : [ecx+8]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [edx], ecx
        setne al
        ret 8
        public_6bd5c30 : nop
        mov cl, byte ptr ss : [esp+8]
        test cl, cl
        je public_6bd5c48
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edx]
        xor eax, eax
        test ecx, ecx
        setne al
        ret 8
        public_6bd5c48 : nop
        mov ecx, dword ptr ds : [eax+4]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [edx], ecx
        setne al
        ret 8
        UNREACHABLE_TRAP(0x6bd5c00)
    }
}

#undef public_6bd5c21
#undef public_6bd5c30
#undef public_6bd5c48
