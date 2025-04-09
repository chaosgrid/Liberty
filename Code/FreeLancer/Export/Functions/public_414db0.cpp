#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418890);
CLANG_FORWARD_PROC_SYMBOL(public_44ce60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_414de7 _public_414de7
#define public_414dec _public_414dec
#define public_414df6 _public_414df6
#define public_414e10 _public_414e10
#define public_414e20 _public_414e20
#define public_414e45 _public_414e45
#define public_414e4a _public_414e4a
#define public_414e56 _public_414e56
#define public_414e77 _public_414e77
#define public_414e81 _public_414e81
#define public_414e84 _public_414e84
#define public_414ea2 _public_414ea2
#define public_414eb5 _public_414eb5
#define public_414ec1 _public_414ec1
#define public_414ee8 _public_414ee8

PROC_DECLARE(0x414db0, internal_414db0, public_414db0);
extern "C" NAKED register_t __cdecl internal_414db0()
{
    __asm
    {
        sub esp, 0x28
        mov ecx, dword ptr ss : [esp+0x30]
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x44]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push 0x20
        push edx
        call dword ptr ds : [public_5c71f0]
        mov ebp, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [ebp+8]
        lea esi, ss:[ebp+4]
        add esp, 0x10
        test edx, edx
        mov dword ptr ss : [esp+0x14], eax
        jne public_414de7
        xor ecx, ecx
        jmp public_414dec
        public_414de7 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, edx
        public_414dec : nop
        cmp ecx, eax
        jae public_414e56
        test eax, eax
        jge public_414df6
        xor eax, eax
        public_414df6 : nop
        push eax
        call public_5b7e84
        mov ebx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebx
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_414e20
        nop 
        public_414e10 : nop
        push edi
        push ebp
        call public_44ce60
        add esp, 8
        inc ebp
        inc edi
        cmp edi, ebx
        jne public_414e10
        public_414e20 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ds:[edx+ecx]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [esi+0xC], eax
        jne public_414e45
        xor eax, eax
        jmp public_414e4a
        public_414e45 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        public_414e4a : nop
        mov ebp, dword ptr ss : [esp+0x3C]
        add eax, edx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        public_414e56 : nop
        mov edi, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp edi, ebx
        mov byte ptr ss : [esp+0x3C], 0
        je public_414e84
        mov ecx, dword ptr ds : [esi+8]
        mov edx, ecx
        sub edx, edi
        mov dword ptr ss : [esp+0x14], edx
        je public_414e84
        mov eax, ecx
        cmp eax, ecx
        je public_414e81
        public_414e77 : nop
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [edi], dl
        inc edi
        inc eax
        cmp eax, ecx
        jne public_414e77
        public_414e81 : nop
        mov dword ptr ds : [esi+8], edi
        public_414e84 : nop
        mov al, byte ptr ds : [public_616699]
        test al, al
        jne public_414eb5
        mov ecx, 0x40
        xor eax, eax
        mov edi, offset public_616538
        mov byte ptr ds : [public_616699], 1
        rep stosd
        public_414ea2 : nop
        movsx ecx, byte ptr ds : [eax+public_5c8bb8]
        mov byte ptr ds : [ecx+public_616538], al
        inc eax
        cmp eax, 0x11
        jb public_414ea2
        public_414eb5 : nop
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        lea edi, ss:[esp+0x18]
        je public_414ee8
        public_414ec1 : nop
        movsx edx, al
        mov al, byte ptr ds : [edx+public_616538]
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 1
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x48], al
        call public_418890
        mov al, byte ptr ds : [edi+1]
        inc edi
        test al, al
        jne public_414ec1
        public_414ee8 : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x24], ebx
        pop ebp
        pop ebx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x414db0)
    }
}

#undef public_414de7
#undef public_414dec
#undef public_414df6
#undef public_414e10
#undef public_414e20
#undef public_414e45
#undef public_414e4a
#undef public_414e56
#undef public_414e77
#undef public_414e81
#undef public_414e84
#undef public_414ea2
#undef public_414eb5
#undef public_414ec1
#undef public_414ee8
