#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c2b0);

#define public_6d5c2c2 _public_6d5c2c2
#define public_6d5c2f5 _public_6d5c2f5
#define public_6d5c302 _public_6d5c302
#define public_6d5c310 _public_6d5c310
#define public_6d5c31a _public_6d5c31a
#define public_6d5c321 _public_6d5c321
#define public_6d5c327 _public_6d5c327

PROC_DECLARE(0x6d5c2b0, internal_6d5c2b0, public_6d5c2b0);
extern "C" NAKED register_t __cdecl internal_6d5c2b0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d5c327
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6d5c2c2 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        push 1
        push edi
        lea ecx, ds:[eax+ecx-0x418]
        call public_6d4f4e0
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x11]
        test cl, cl
        jne public_6d5c302
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x11]
        test cl, cl
        jne public_6d5c321
        public_6d5c2f5 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x11]
        test cl, cl
        je public_6d5c2f5
        jmp public_6d5c321
        public_6d5c302 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d5c31a
        lea ebx, ds:[ebx]
        public_6d5c310 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6d5c310
        public_6d5c31a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6d5c321
        mov esi, eax
        public_6d5c321 : nop
        cmp esi, dword ptr ds : [ebx+0xC]
        jne public_6d5c2c2
        pop edi
        public_6d5c327 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d5c2b0)
    }
}

#undef public_6d5c2c2
#undef public_6d5c2f5
#undef public_6d5c302
#undef public_6d5c310
#undef public_6d5c31a
#undef public_6d5c321
#undef public_6d5c327
