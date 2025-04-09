#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5150);
CLANG_FORWARD_PROC_SYMBOL(public_4fd0d0);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_515200);
CLANG_FORWARD_PROC_SYMBOL(public_516910);
CLANG_FORWARD_PROC_SYMBOL(public_516d10);
CLANG_FORWARD_PROC_SYMBOL(public_5379b0);

#define public_516930 _public_516930
#define public_51694a _public_51694a
#define public_51694c _public_51694c
#define public_51695a _public_51695a
#define public_51695f _public_51695f
#define public_516960 _public_516960
#define public_516976 _public_516976
#define public_51697d _public_51697d
#define public_5169b5 _public_5169b5
#define public_5169c6 _public_5169c6
#define public_5169d7 _public_5169d7
#define public_5169e3 _public_5169e3
#define public_516a24 _public_516a24
#define public_516a38 _public_516a38
#define public_516a3f _public_516a3f
#define public_516a6b _public_516a6b
#define public_516a7c _public_516a7c
#define public_516a8d _public_516a8d
#define public_516a99 _public_516a99
#define public_516abf _public_516abf
#define public_516ad3 _public_516ad3
#define public_516ada _public_516ada

PROC_DECLARE(0x516910, internal_516910, public_516910);
extern "C" NAKED register_t __cdecl internal_516910()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [ebp+0xB8]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_51694a
        mov edi, dword ptr ds : [public_5c6618]
        lea ecx, ds:[ecx]
        public_516930 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        call edi
        add esp, 4
        test eax, eax
        jne public_51695a
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0xB8]
        jne public_516930
        public_51694a : nop
        xor esi, esi
        public_51694c : nop
        mov al, byte ptr ss : [esp+0x48]
        test al, al
        mov eax, dword ptr ds : [esi+0x30]
        jne public_51695f
        inc eax
        jmp public_516960
        public_51695a : nop
        mov esi, dword ptr ds : [esi+8]
        jmp public_51694c
        public_51695f : nop
        dec eax
        public_516960 : nop
        test eax, eax
        mov dword ptr ds : [esi+0x30], eax
        je public_516976
        mov ecx, dword ptr ds : [esi+8]
        push 0x28
        add ecx, 0x28
        call public_4fd0d0
        jmp public_51697d
        public_516976 : nop
        mov ecx, esi
        call public_516d10
        public_51697d : nop
        mov ecx, dword ptr ds : [esi+0x30]
        push 0
        test ecx, ecx
        push 1
        push ebp
        sete bl
        call public_515200
        add esp, 0xC
        test eax, eax
        je public_516a3f
        test bl, bl
        mov byte ptr ds : [eax+0x1D], bl
        jne public_516a3f
        lea esi, ds:[eax+0x30]
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_5169b5
        test byte ptr ds : [eax+8], 2
        je public_5169d7
        public_5169b5 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_5169c6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x14]
        test al, al
        jne public_5169d7
        public_5169c6 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_516a3f
        mov ecx, dword ptr ds : [eax+0xD4]
        test ecx, ecx
        jne public_516a3f
        public_5169d7 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_5169e3
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_5169e3 : nop
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_516a24
        lea ecx, ss:[esp+0x10]
        call public_4215b0
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov edx, dword ptr ds : [edi]
        push 0xFFFFFFFF
        mov ecx, edi
        call dword ptr ds : [edx+0x94]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_516a24 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_516a38
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_516a38 : nop
        mov ecx, esi
        call public_502d90
        public_516a3f : nop
        push 0
        push 0
        push ebp
        call public_515200
        add esp, 0xC
        test eax, eax
        je public_516ada
        test bl, bl
        mov byte ptr ds : [eax+0x1D], bl
        jne public_516ada
        lea esi, ds:[eax+0x30]
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_516a6b
        test byte ptr ds : [eax+8], 2
        je public_516a8d
        public_516a6b : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_516a7c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_516a8d
        public_516a7c : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_516ada
        mov ecx, dword ptr ds : [eax+0xD4]
        test ecx, ecx
        jne public_516ada
        public_516a8d : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_516a99
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_516a99 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_516abf
        mov edi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        call public_4b5150
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push 0xFFFFFFFF
        call dword ptr ds : [edi+0x94]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_516abf : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_516ad3
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        public_516ad3 : nop
        mov ecx, esi
        call public_502d90
        public_516ada : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x516910)
    }
}

#undef public_516930
#undef public_51694a
#undef public_51694c
#undef public_51695a
#undef public_51695f
#undef public_516960
#undef public_516976
#undef public_51697d
#undef public_5169b5
#undef public_5169c6
#undef public_5169d7
#undef public_5169e3
#undef public_516a24
#undef public_516a38
#undef public_516a3f
#undef public_516a6b
#undef public_516a7c
#undef public_516a8d
#undef public_516a99
#undef public_516abf
#undef public_516ad3
#undef public_516ada
