#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10003260);
CLANG_FORWARD_PROC_SYMBOL(public_1000a406);
CLANG_FORWARD_PROC_SYMBOL(public_1000a40c);

#define public_1000326b _public_1000326b
#define public_100032b4 _public_100032b4
#define public_100032b9 _public_100032b9
#define public_100032c6 _public_100032c6

PROC_DECLARE(0x10003260, internal_10003260, public_10003260);
extern "C" NAKED register_t __cdecl internal_10003260()
{
    __asm
    {
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        je public_1000326b
        or eax, 0xFFFFFFFF
        ret 
        public_1000326b : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_100032b9
        call public_1000a40c
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        push 0x4000
        push 1
        push ecx
        call public_1000a406
        add esp, 0x10
        test eax, eax
        mov dword ptr ds : [esi+4], eax
        jne public_100032b4
        mov edx, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [esi+0x3C], 1
        mov cl, byte ptr ds : [edx+0xC]
        or eax, 0xFFFFFFFF
        test cl, 0x20
        je public_100032c6
        mov dword ptr ds : [esi+0x38], eax
        ret 
        public_100032b4 : nop
        mov eax, dword ptr ds : [esi+0x44]
        mov dword ptr ds : [esi], eax
        public_100032b9 : nop
        dec dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        movzx eax, cl
        public_100032c6 : nop
        ret 
        UNREACHABLE_TRAP(0x10003260)
    }
}

#undef public_1000326b
#undef public_100032b4
#undef public_100032b9
#undef public_100032c6
