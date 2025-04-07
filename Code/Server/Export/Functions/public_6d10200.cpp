#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00db0);
CLANG_FORWARD_PROC_SYMBOL(public_6d07130);
CLANG_FORWARD_PROC_SYMBOL(public_6d10200);
CLANG_FORWARD_PROC_SYMBOL(public_6d10b10);
CLANG_FORWARD_PROC_SYMBOL(public_6d10f60);
CLANG_FORWARD_PROC_SYMBOL(public_6d11220);
CLANG_FORWARD_PROC_SYMBOL(public_6d11570);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d10211 _public_6d10211
#define public_6d10229 _public_6d10229
#define public_6d10247 _public_6d10247
#define public_6d10250 _public_6d10250
#define public_6d1025a _public_6d1025a
#define public_6d1025f _public_6d1025f
#define public_6d10261 _public_6d10261
#define public_6d10265 _public_6d10265
#define public_6d10290 _public_6d10290
#define public_6d102c4 _public_6d102c4
#define public_6d102e6 _public_6d102e6
#define public_6d102f0 _public_6d102f0
#define public_6d10313 _public_6d10313

PROC_DECLARE(0x6d10200, internal_6d10200, public_6d10200);
extern "C" NAKED register_t __cdecl internal_6d10200()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6d8da30]
        sub esp, 8
        push esi
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        push edi
        je public_6d10265
        public_6d10211 : nop
        mov al, byte ptr ds : [esi+0x10C]
        test al, al
        je public_6d10229
        lea ecx, ds:[esi+0x10]
        call public_6d07130
        mov ecx, dword ptr ds : [public_6d8da30]
        public_6d10229 : nop
        mov eax, dword ptr ds : [esi+8]
        mov dl, byte ptr ds : [eax+0x111]
        test dl, dl
        jne public_6d10247
        push eax
        call public_6d11220
        mov ecx, dword ptr ds : [public_6d8da30]
        add esp, 4
        jmp public_6d1025f
        public_6d10247 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d1025a
        nop 
        public_6d10250 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6d10250
        public_6d1025a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6d10261
        public_6d1025f : nop
        mov esi, eax
        public_6d10261 : nop
        cmp esi, ecx
        jne public_6d10211
        public_6d10265 : nop
        mov edx, dword ptr ds : [public_6d8da3c]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6d102e6
        mov edx, eax
        cmp eax, edx
        jne public_6d102e6
        cmp edi, ecx
        jne public_6d102e6
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_6d8da34]
        cmp edi, eax
        mov esi, edi
        je public_6d102c4
        nop 
        public_6d10290 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_6d8da2c
        call public_6d10f60
        mov esi, dword ptr ds : [esi]
        push 0
        lea ecx, ds:[edi+0xC]
        call public_6d11570
        push edi
        call public_6d5ffb0
        mov eax, dword ptr ds : [public_6d8da34]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6d10290
        mov ecx, dword ptr ds : [public_6d8da30]
        public_6d102c4 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_6d8da30]
        mov dword ptr ds : [public_6d8da3c], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6d8da30]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_6d102e6 : nop
        cmp eax, edi
        je public_6d10313
        lea ebx, ds:[ebx]
        public_6d102f0 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_6d00db0
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6d8da2c
        call public_6d10b10
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_6d102f0
        public_6d10313 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d10200)
    }
}

#undef public_6d10211
#undef public_6d10229
#undef public_6d10247
#undef public_6d10250
#undef public_6d1025a
#undef public_6d1025f
#undef public_6d10261
#undef public_6d10265
#undef public_6d10290
#undef public_6d102c4
#undef public_6d102e6
#undef public_6d102f0
#undef public_6d10313
