#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_454bb0);
CLANG_FORWARD_PROC_SYMBOL(public_456150);
CLANG_FORWARD_PROC_SYMBOL(public_456650);
CLANG_FORWARD_PROC_SYMBOL(public_456a40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_456668 _public_456668
#define public_45668b _public_45668b
#define public_4566b2 _public_4566b2
#define public_4566b8 _public_4566b8
#define public_4566bd _public_4566bd
#define public_4566e0 _public_4566e0
#define public_456710 _public_456710
#define public_45671f _public_45671f
#define public_456727 _public_456727
#define public_45672e _public_45672e

PROC_DECLARE(0x456650, internal_456650, public_456650);
extern "C" NAKED register_t __cdecl internal_456650()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        je public_4566bd
        mov ebx, dword ptr ss : [esp+0x18]
        public_456668 : nop
        mov edi, dword ptr ds : [esi+8]
        push ebx
        mov ecx, edi
        call public_456150
        test al, al
        je public_4566b2
        test edi, edi
        je public_45668b
        mov ecx, edi
        call public_454bb0
        push edi
        call public_5b7e1d
        add esp, 4
        public_45668b : nop
        mov edi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], edi
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0xC]
        add esp, 4
        dec eax
        mov dword ptr ss : [ebp+0xC], eax
        mov esi, edi
        jmp public_4566b8
        public_4566b2 : nop
        mov esi, dword ptr ds : [esi]
        mov ebp, dword ptr ss : [esp+0x10]
        public_4566b8 : nop
        cmp esi, dword ptr ss : [ebp+8]
        jne public_456668
        public_4566bd : nop
        fild dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, ebp
        fmul qword ptr ds : [public_5c75f8]
        fstp dword ptr ss : [esp]
        call public_456a40
        test al, al
        je public_45672e
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_45672e
        nop 
        public_4566e0 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov al, byte ptr ds : [ecx+0xD]
        test al, al
        je public_456727
        mov eax, dword ptr ds : [ecx+0xC0]
        cmp eax, 0xFFFFFFFF
        je public_456727
        mov ecx, dword ptr ds : [ecx+0xB4]
        shl eax, 6
        mov esi, dword ptr ds : [eax+ecx]
        test esi, esi
        je public_456727
        mov eax, dword ptr ds : [esi+0x4C]
        xor edi, edi
        test eax, eax
        jle public_456727
        mov edi, edi
        public_456710 : nop
        mov edx, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [edx+edi*4]
        test ecx, ecx
        je public_45671f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x54]
        public_45671f : nop
        mov eax, dword ptr ds : [esi+0x4C]
        inc edi
        cmp edi, eax
        jl public_456710
        public_456727 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ss : [ebp+8]
        jne public_4566e0
        public_45672e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x456650)
    }
}

#undef public_456668
#undef public_45668b
#undef public_4566b2
#undef public_4566b8
#undef public_4566bd
#undef public_4566e0
#undef public_456710
#undef public_45671f
#undef public_456727
#undef public_45672e
