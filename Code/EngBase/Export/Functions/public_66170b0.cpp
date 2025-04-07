#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66139b0);
CLANG_FORWARD_PROC_SYMBOL(public_66142f0);
CLANG_FORWARD_PROC_SYMBOL(public_6617c90);
CLANG_FORWARD_PROC_SYMBOL(public_661a620);
CLANG_FORWARD_PROC_SYMBOL(public_6627a70);
CLANG_FORWARD_PROC_SYMBOL(public_6627b00);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_66170de _public_66170de
#define public_66170f4 _public_66170f4
#define public_66170fc _public_66170fc
#define public_6617106 _public_6617106
#define public_661710d _public_661710d
#define public_6617111 _public_6617111
#define public_661713a _public_661713a
#define public_6617164 _public_6617164
#define public_6617192 _public_6617192
#define public_6617196 _public_6617196
#define public_66171b7 _public_66171b7

PROC_DECLARE(0x66170b0, internal_66170b0, public_66170b0);
extern "C" NAKED register_t __cdecl internal_66170b0()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0x10]
        mov ecx, offset public_662acc4
        push ebx
        push esi
        push edi
        push eax
        call public_6627b00
        lea ecx, ss:[esp+0x1C]
        mov edi, eax
        push ecx
        mov ecx, offset public_662acc4
        call public_6627a70
        mov esi, eax
        xor ebx, ebx
        cmp esi, edi
        je public_6617111
        public_66170de : nop
        mov ecx, dword ptr ds : [eax+8]
        inc ebx
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        jne public_66170f4
        push ecx
        call public_661a620
        add esp, 4
        jmp public_661710d
        public_66170f4 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6617106
        public_66170fc : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_66170fc
        public_6617106 : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_661710d
        mov eax, ecx
        public_661710d : nop
        cmp eax, edi
        jne public_66170de
        public_6617111 : nop
        mov eax, dword ptr ds : [public_662acd4]
        mov dword ptr ss : [esp+0xC], esi
        test eax, eax
        je public_6617192
        mov ecx, dword ptr ds : [public_662acc8]
        cmp esi, dword ptr ds : [ecx]
        jne public_6617192
        cmp edi, ecx
        jne public_6617192
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_662accc]
        cmp edi, eax
        mov esi, edi
        je public_6617164
        public_661713a : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, offset public_662acc4
        push edx
        call public_66139b0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_66281d0
        mov eax, dword ptr ds : [public_662accc]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_661713a
        mov ecx, dword ptr ds : [public_662acc8]
        public_6617164 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_662acc8]
        mov dword ptr ds : [public_662acd4], 0
        pop edi
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_662acc8]
        pop esi
        mov dword ptr ds : [eax+8], eax
        mov eax, ebx
        neg eax
        sbb eax, eax
        pop ebx
        neg eax
        dec eax
        add esp, 8
        ret 8
        public_6617192 : nop
        cmp esi, edi
        je public_66171b7
        public_6617196 : nop
        lea ecx, ss:[esp+0xC]
        call public_66142f0
        lea eax, ss:[esp+0x10]
        push esi
        push eax
        mov ecx, offset public_662acc4
        call public_6617c90
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, edi
        jne public_6617196
        public_66171b7 : nop
        mov eax, ebx
        pop edi
        neg eax
        sbb eax, eax
        pop esi
        neg eax
        dec eax
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x66170b0)
    }
}

#undef public_66170de
#undef public_66170f4
#undef public_66170fc
#undef public_6617106
#undef public_661710d
#undef public_6617111
#undef public_661713a
#undef public_6617164
#undef public_6617192
#undef public_6617196
#undef public_66171b7
