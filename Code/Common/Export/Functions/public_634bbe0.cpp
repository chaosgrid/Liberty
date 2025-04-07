#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6347d80);
CLANG_FORWARD_PROC_SYMBOL(public_634bbe0);

#define public_634bbf1 _public_634bbf1
#define public_634bc0b _public_634bc0b
#define public_634bc2a _public_634bc2a
#define public_634bc42 _public_634bc42

PROC_DECLARE(0x634bbe0, internal_634bbe0, public_634bbe0);
extern "C" NAKED register_t __cdecl internal_634bbe0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor edi, edi
        mov ebx, ecx
        mov di, word ptr ds : [ebx+0xDA]
        dec edi
        js public_634bc0b
        public_634bbf1 : nop
        mov eax, dword ptr ds : [ebx+0xDC]
        mov esi, dword ptr ds : [eax+edi*4]
        mov ecx, esi
        call public_6347d80
        mov ecx, dword ptr ds : [esi]
        and ecx, 0xFFFFFFCF
        dec edi
        mov dword ptr ds : [esi], ecx
        jns public_634bbf1
        public_634bc0b : nop
        mov eax, dword ptr ds : [ebx+0xDC]
        lea ecx, ds:[ebx+0xE0]
        cmp eax, ecx
        je public_634bc42
        xor esi, esi
        cmp eax, esi
        je public_634bc2a
        push eax
        call public_6343fb0
        add esp, 4
        public_634bc2a : nop
        pop edi
        mov dword ptr ds : [ebx+0xDC], esi
        mov word ptr ds : [ebx+0xD8], si
        mov word ptr ds : [ebx+0xDA], si
        pop esi
        pop ebx
        ret 
        public_634bc42 : nop
        pop edi
        pop esi
        mov word ptr ds : [ebx+0xDA], 0
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x634bbe0)
    }
}

#undef public_634bbf1
#undef public_634bc0b
#undef public_634bc2a
#undef public_634bc42
