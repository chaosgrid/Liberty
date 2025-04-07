#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f86);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e9c6);
CLANG_FORWARD_PROC_SYMBOL(public_6d4eaf1);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ebb6);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ec3e);
CLANG_FORWARD_PROC_SYMBOL(public_6d4eccb);
CLANG_FORWARD_PROC_SYMBOL(public_6d4edb6);
CLANG_FORWARD_PROC_SYMBOL(public_6d4eeb5);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f039);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f06f);

#define public_6d4f0b0 _public_6d4f0b0
#define public_6d4f0c7 _public_6d4f0c7
#define public_6d4f0d5 _public_6d4f0d5
#define public_6d4f0ea _public_6d4f0ea
#define public_6d4f0f9 _public_6d4f0f9
#define public_6d4f100 _public_6d4f100
#define public_6d4f110 _public_6d4f110
#define public_6d4f11e _public_6d4f11e
#define public_6d4f12d _public_6d4f12d
#define public_6d4f134 _public_6d4f134

PROC_DECLARE(0x6d4f06f, internal_6d4f06f, public_6d4f06f);
extern "C" NAKED register_t __cdecl internal_6d4f06f()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+0x1A4]
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x74], eax
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x70], eax
        mov eax, dword ptr ds : [esi+0x4C]
        xor ebp, ebp
        sub eax, ebp
        je public_6d4f11e
        dec eax
        je public_6d4f0ea
        dec eax
        je public_6d4f0b0
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x2F
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        jmp public_6d4f134
        public_6d4f0b0 : nop
        and byte ptr ds : [edi+0x54], 0
        lea ebx, ds:[edi+0x44]
        cmp dword ptr ds : [ebx], ebp
        mov dword ptr ds : [edi+4], offset _public_6d4eeb5
        jne public_6d4f0c7
        call public_6d4f039
        public_6d4f0c7 : nop
        mov ebp, dword ptr ds : [esi+0x5C]
        xor edi, edi
        cmp dword ptr ds : [esi+0x64], edi
        lea ebp, ss:[ebp+ebp+4]
        jle public_6d4f134
        public_6d4f0d5 : nop
        push ebp
        push dword ptr ds : [ebx]
        call public_6d45f86
        inc edi
        pop ecx
        add ebx, 4
        cmp edi, dword ptr ds : [esi+0x64]
        pop ecx
        jl public_6d4f0d5
        jmp public_6d4f134
        public_6d4f0ea : nop
        cmp dword ptr ds : [esi+0x64], 3
        jne public_6d4f0f9
        mov dword ptr ds : [edi+4], offset _public_6d4edb6
        jmp public_6d4f100
        public_6d4f0f9 : nop
        mov dword ptr ds : [edi+4], offset _public_6d4eccb
        public_6d4f100 : nop
        cmp byte ptr ds : [edi+0x1C], 0
        mov dword ptr ds : [edi+0x30], ebp
        jne public_6d4f110
        push esi
        call public_6d4e9c6
        pop ecx
        public_6d4f110 : nop
        cmp dword ptr ds : [edi+0x34], ebp
        jne public_6d4f134
        mov edi, esi
        call public_6d4eaf1
        jmp public_6d4f134
        public_6d4f11e : nop
        cmp dword ptr ds : [esi+0x64], 3
        jne public_6d4f12d
        mov dword ptr ds : [edi+4], offset _public_6d4ec3e
        jmp public_6d4f134
        public_6d4f12d : nop
        mov dword ptr ds : [edi+4], offset _public_6d4ebb6
        public_6d4f134 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d4f06f)
    }
}

#undef public_6d4f0b0
#undef public_6d4f0c7
#undef public_6d4f0d5
#undef public_6d4f0ea
#undef public_6d4f0f9
#undef public_6d4f100
#undef public_6d4f110
#undef public_6d4f11e
#undef public_6d4f12d
#undef public_6d4f134
