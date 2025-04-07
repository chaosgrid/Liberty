#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f51270);

#define public_6f5128f _public_6f5128f
#define public_6f51296 _public_6f51296
#define public_6f5129b _public_6f5129b
#define public_6f512b5 _public_6f512b5
#define public_6f512bc _public_6f512bc
#define public_6f512c6 _public_6f512c6

PROC_DECLARE(0x6f51270, internal_6f51270, public_6f51270);
extern "C" NAKED register_t __cdecl internal_6f51270()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x18]
        dec dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x18]
        cmp dword ptr ds : [ecx], 0
        jl public_6f5128f
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov al, byte ptr ds : [edx]
        inc edx
        mov dword ptr ds : [ecx+4], edx
        jmp public_6f51296
        public_6f5128f : nop
        push ecx
        call dword ptr ds : [ecx+8]
        add esp, 4
        public_6f51296 : nop
        cmp eax, 0x23
        jne public_6f512c6
        public_6f5129b : nop
        mov eax, dword ptr ds : [esi+0x18]
        dec dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x18]
        cmp dword ptr ds : [ecx], 0
        jl public_6f512b5
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov al, byte ptr ds : [edx]
        inc edx
        mov dword ptr ds : [ecx+4], edx
        jmp public_6f512bc
        public_6f512b5 : nop
        push ecx
        call dword ptr ds : [ecx+8]
        add esp, 4
        public_6f512bc : nop
        cmp eax, 0xA
        je public_6f512c6
        cmp eax, 0xFFFFFFFF
        jne public_6f5129b
        public_6f512c6 : nop
        mov eax, dword ptr ds : [esi+0x18]
        inc dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi+0x18]
        dec dword ptr ds : [esi+4]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f51270)
    }
}

#undef public_6f5128f
#undef public_6f51296
#undef public_6f5129b
#undef public_6f512b5
#undef public_6f512bc
#undef public_6f512c6
