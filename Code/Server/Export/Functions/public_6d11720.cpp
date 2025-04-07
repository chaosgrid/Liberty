#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11720);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d11730 _public_6d11730
#define public_6d11739 _public_6d11739
#define public_6d1173b _public_6d1173b
#define public_6d1176a _public_6d1176a
#define public_6d11773 _public_6d11773
#define public_6d11789 _public_6d11789
#define public_6d11791 _public_6d11791
#define public_6d1179b _public_6d1179b
#define public_6d117af _public_6d117af
#define public_6d117b8 _public_6d117b8

PROC_DECLARE(0x6d11720, internal_6d11720, public_6d11720);
extern "C" NAKED register_t __cdecl internal_6d11720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        lea ebx, ds:[ebx]
        public_6d11730 : nop
        test esi, esi
        jne public_6d11739
        mov esi, dword ptr ds : [edi+4]
        jmp public_6d1173b
        public_6d11739 : nop
        mov esi, dword ptr ds : [esi]
        public_6d1173b : nop
        test esi, esi
        je public_6d117b8
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, dword ptr ds : [ecx]
        jne public_6d11730
        test esi, esi
        je public_6d117b8
        mov edx, ecx
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, esi
        jne public_6d11773
        mov eax, dword ptr ds : [esi]
        test eax, eax
        mov dword ptr ds : [edi+4], eax
        jne public_6d1176a
        mov dword ptr ds : [edi+8], eax
        jmp public_6d1179b
        public_6d1176a : nop
        mov dword ptr ds : [eax+4], 0
        jmp public_6d1179b
        public_6d11773 : nop
        mov eax, dword ptr ds : [edi+8]
        cmp eax, esi
        jne public_6d11791
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov dword ptr ds : [edi+8], eax
        jne public_6d11789
        mov dword ptr ds : [edi+4], eax
        jmp public_6d1179b
        public_6d11789 : nop
        mov dword ptr ds : [eax], 0
        jmp public_6d1179b
        public_6d11791 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [ecx+4], eax
        public_6d1179b : nop
        mov al, byte ptr ds : [edi+0xC]
        test al, al
        je public_6d117af
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [edi+0x10], esi
        pop edi
        pop esi
        ret 4
        public_6d117af : nop
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d117b8 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d11720)
    }
}

#undef public_6d11730
#undef public_6d11739
#undef public_6d1173b
#undef public_6d1176a
#undef public_6d11773
#undef public_6d11789
#undef public_6d11791
#undef public_6d1179b
#undef public_6d117af
#undef public_6d117b8
