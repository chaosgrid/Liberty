#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);

#define public_6f28312 _public_6f28312
#define public_6f28330 _public_6f28330
#define public_6f28369 _public_6f28369
#define public_6f28374 _public_6f28374

PROC_DECLARE(0x6f282e0, internal_6f282e0, public_6f282e0);
extern "C" NAKED register_t __cdecl internal_6f282e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        mov ebx, ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        je public_6f28312
        fild dword ptr ds : [ebx+0x10C]
        fstp dword ptr ds : [esi+0x1BC]
        fild dword ptr ds : [ebx+0x10C]
        fstp dword ptr ds : [esi+0x1C8]
        public_6f28312 : nop
        mov ecx, esi
        call public_6eea860
        test eax, eax
        je public_6f28374
        mov edx, dword ptr ds : [eax+0xE0]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_6f28374
        push edi
        lea ebx, ds:[ebx]
        public_6f28330 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [edx+4]
        je public_6f28369
        mov edi, dword ptr ds : [esi+0x154]
        cmp edi, 0xFFFFFFFF
        je public_6f28369
        cmp dword ptr ds : [edx+0x154], edi
        jne public_6f28369
        fild dword ptr ds : [ebx+0x10C]
        fstp dword ptr ds : [edx+0x1BC]
        fild dword ptr ds : [ebx+0x10C]
        mov edx, dword ptr ds : [ecx+8]
        fstp dword ptr ds : [edx+0x1C8]
        public_6f28369 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, dword ptr ds : [eax+0xE0]
        jne public_6f28330
        pop edi
        public_6f28374 : nop
        mov ecx, esi
        call public_6f57b00
        pop esi
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f282e0)
    }
}

#undef public_6f28312
#undef public_6f28330
#undef public_6f28369
#undef public_6f28374
