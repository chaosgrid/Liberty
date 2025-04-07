#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10003bd0);

#define public_10003e50 _public_10003e50
#define public_10003e6a _public_10003e6a
#define public_10003e76 _public_10003e76
#define public_10003e7e _public_10003e7e

PROC_DECLARE(0x10003e30, internal_10003e30, public_10003e30);
extern "C" NAKED register_t __cdecl internal_10003e30()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        push edi
        mov ebp, esi
        je public_10003e7e
        mov edi, dword ptr ss : [esp+0x18]
        test edi, edi
        jle public_10003e7e
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        lea ebx, ds:[ebx]
        public_10003e50 : nop
        dec edi
        test edi, edi
        jle public_10003e6a
        push 1
        push esi
        push ebx
        call public_10003bd0
        cmp eax, 1
        jne public_10003e6a
        mov al, byte ptr ds : [esi]
        inc esi
        cmp al, 0xA
        jne public_10003e50
        public_10003e6a : nop
        cmp ebp, esi
        mov byte ptr ds : [esi], 0
        pop ebx
        jne public_10003e76
        test edi, edi
        jg public_10003e7e
        public_10003e76 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        ret 0xC
        public_10003e7e : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x10003e30)
    }
}

#undef public_10003e50
#undef public_10003e6a
#undef public_10003e76
#undef public_10003e7e
