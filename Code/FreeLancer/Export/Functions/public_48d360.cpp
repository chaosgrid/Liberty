#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a0760);
CLANG_FORWARD_PROC_SYMBOL(public_5a4b50);

#define public_48d391 _public_48d391
#define public_48d3bb _public_48d3bb
#define public_48d3c2 _public_48d3c2
#define public_48d3e5 _public_48d3e5
#define public_48d3ec _public_48d3ec
#define public_48d3f3 _public_48d3f3
#define public_48d42f _public_48d42f

PROC_DECLARE(0x48d360, internal_48d360, public_48d360);
extern "C" NAKED register_t __cdecl internal_48d360()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x458]
        test al, al
        jne public_48d42f
        mov eax, dword ptr ds : [esi+0x370]
        push ebx
        mov ebx, dword ptr ds : [esi+0x378]
        push ebp
        mov ebp, dword ptr ds : [esi+0x448]
        push edi
        mov edi, dword ptr ds : [esi+0xC]
        sub ebx, eax
        sub ebp, eax
        test edi, edi
        je public_48d3f3
        public_48d391 : nop
        mov dword ptr ds : [edi+0x70], 0x64
        mov eax, dword ptr ds : [esi+0x448]
        test eax, eax
        jl public_48d3c2
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+8]
        cmp eax, dword ptr ds : [esi+ebp*4+0x3C4]
        je public_48d3bb
        cmp eax, dword ptr ds : [esi+ebp*4+0x3D8]
        jne public_48d3c2
        public_48d3bb : nop
        mov dword ptr ds : [edi+0x70], 0x65
        public_48d3c2 : nop
        mov eax, dword ptr ds : [esi+0x44C]
        test eax, eax
        jl public_48d3ec
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+8]
        cmp eax, dword ptr ds : [esi+ebx*4+0x3C4]
        je public_48d3e5
        cmp eax, dword ptr ds : [esi+ebx*4+0x3D8]
        jne public_48d3ec
        public_48d3e5 : nop
        mov dword ptr ds : [edi+0x70], 0x66
        public_48d3ec : nop
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        jne public_48d391
        public_48d3f3 : nop
        lea eax, ds:[esi+0x3C4]
        push 5
        push eax
        call public_5a4b50
        lea ecx, ds:[esi+0x3D8]
        push 5
        push ecx
        call public_5a4b50
        mov edx, dword ptr ds : [esi+0x454]
        add esp, 0x10
        pop edi
        mov dword ptr ds : [edx+0x70], 0x63
        mov eax, dword ptr ds : [esi+0x438]
        pop ebp
        mov dword ptr ds : [eax+0x70], 0x67
        pop ebx
        public_48d42f : nop
        mov ecx, esi
        pop esi
        jmp public_5a0760
        UNREACHABLE_TRAP(0x48d360)
    }
}

#undef public_48d391
#undef public_48d3bb
#undef public_48d3c2
#undef public_48d3e5
#undef public_48d3ec
#undef public_48d3f3
#undef public_48d42f
