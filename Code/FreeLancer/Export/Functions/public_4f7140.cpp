#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425a20);
CLANG_FORWARD_PROC_SYMBOL(public_4f7140);

#define public_4f7150 _public_4f7150
#define public_4f7160 _public_4f7160
#define public_4f719a _public_4f719a
#define public_4f719f _public_4f719f
#define public_4f71b2 _public_4f71b2
#define public_4f71bc _public_4f71bc
#define public_4f71c1 _public_4f71c1
#define public_4f71d9 _public_4f71d9
#define public_4f71e0 _public_4f71e0
#define public_4f7205 _public_4f7205

PROC_DECLARE(0x4f7140, internal_4f7140, public_4f7140);
extern "C" NAKED register_t __cdecl internal_4f7140()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebp, offset public_674ce4
        xor ebx, ebx
        push edi
        nop 
        lea esp, ss:[esp]
        public_4f7150 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebx
        je public_4f71e0
        nop 
        lea esp, ss:[esp]
        public_4f7160 : nop
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        cmp dword ptr ds : [esi+0x68], ebx
        je public_4f71d9
        mov ecx, dword ptr ds : [esi+0x5C]
        lea eax, ds:[esi+0x60]
        cmp eax, ebx
        lea ecx, ds:[ecx+ecx*2]
        mov dword ptr ds : [esi+0x68], ebx
        lea edx, ds : [ecx*4+public_674ce0]
        je public_4f71c1
        mov ecx, dword ptr ds : [eax]
        cmp ecx, ebx
        jne public_4f719f
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        mov dword ptr ds : [edx+4], ecx
        je public_4f719a
        mov dword ptr ds : [ecx], ebx
        jmp public_4f71bc
        public_4f719a : nop
        mov dword ptr ds : [edx+8], ebx
        jmp public_4f71bc
        public_4f719f : nop
        mov edi, dword ptr ds : [eax+4]
        cmp edi, ebx
        jne public_4f71b2
        cmp ecx, ebx
        mov dword ptr ds : [edx+8], ecx
        je public_4f71bc
        mov dword ptr ds : [ecx+4], ebx
        jmp public_4f71bc
        public_4f71b2 : nop
        mov dword ptr ds : [ecx+4], edi
        mov ecx, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        public_4f71bc : nop
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        public_4f71c1 : nop
        dec dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0x58]
        dec ecx
        mov eax, ecx
        cmp eax, ebx
        mov dword ptr ds : [esi+0x58], ecx
        jg public_4f71d9
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        public_4f71d9 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebx
        jne public_4f7160
        public_4f71e0 : nop
        add ebp, 0xC
        cmp ebp, offset public_674f18
        jl public_4f7150
        mov eax, dword ptr ds : [public_674cdc]
        cmp eax, ebx
        pop edi
        je public_4f7205
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_674cdc], ebx
        public_4f7205 : nop
        mov ecx, offset public_674f24
        call public_425a20
        mov esi, dword ptr ds : [public_5c60bc]
        mov ecx, offset public_674ccc
        call esi
        mov ecx, offset public_674cbc
        call esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4f7140)
    }
}

#undef public_4f7150
#undef public_4f7160
#undef public_4f719a
#undef public_4f719f
#undef public_4f71b2
#undef public_4f71bc
#undef public_4f71c1
#undef public_4f71d9
#undef public_4f71e0
#undef public_4f7205
