#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1cc40);

#define public_6f4b7d3 _public_6f4b7d3
#define public_6f4b7e5 _public_6f4b7e5
#define public_6f4b7fb _public_6f4b7fb
#define public_6f4b820 _public_6f4b820
#define public_6f4b858 _public_6f4b858
#define public_6f4b861 _public_6f4b861

PROC_DECLARE(0x6f4b7b0, internal_6f4b7b0, public_6f4b7b0);
extern "C" NAKED register_t __cdecl internal_6f4b7b0()
{
    __asm
    {
        push ebx
        push ebp
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x228]
        test ecx, ecx
        je public_6f4b7d3
        mov eax, dword ptr ds : [edi+0x22C]
        sub eax, ecx
        sar eax, 4
        cmp eax, 1
        je public_6f4b861
        public_6f4b7d3 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+0x10]
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f4b820
        public_6f4b7e5 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 8
        je public_6f4b7fb
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0x10]
        jne public_6f4b7e5
        jmp public_6f4b820
        public_6f4b7fb : nop
        mov eax, dword ptr ds : [edi+0x220]
        test eax, eax
        mov ecx, dword ptr ds : [esi+8]
        jle public_6f4b820
        mov edx, dword ptr ds : [ecx+0x38]
        dec eax
        cmp edx, eax
        je public_6f4b820
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [ecx+0x38], eax
        or dword ptr ds : [ecx+0x1C], 0x50
        call dword ptr ds : [edx+0xC]
        mov byte ptr ss : [ebp], 1
        public_6f4b820 : nop
        cmp esi, dword ptr ds : [ebx+0x10]
        pop esi
        jne public_6f4b858
        push edi
        push 8
        lea ecx, ds:[ebx+8]
        call public_6f1cc40
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [eax+0x1C], 0x58
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+0xC], 0x331A
        mov ecx, dword ptr ds : [edi+0x220]
        dec ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov byte ptr ss : [ebp], 1
        public_6f4b858 : nop
        mov al, byte ptr ss : [ebp]
        pop edi
        pop ebp
        pop ebx
        ret 8
        public_6f4b861 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [eax]
        pop edi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f4b7b0)
    }
}

#undef public_6f4b7d3
#undef public_6f4b7e5
#undef public_6f4b7fb
#undef public_6f4b820
#undef public_6f4b858
#undef public_6f4b861
