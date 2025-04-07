#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d110);

#define public_6f1b3e8 _public_6f1b3e8
#define public_6f1b3f7 _public_6f1b3f7
#define public_6f1b404 _public_6f1b404
#define public_6f1b418 _public_6f1b418
#define public_6f1b434 _public_6f1b434
#define public_6f1b441 _public_6f1b441
#define public_6f1b450 _public_6f1b450
#define public_6f1b45a _public_6f1b45a
#define public_6f1b461 _public_6f1b461
#define public_6f1b471 _public_6f1b471

PROC_DECLARE(0x6f1b3d0, internal_6f1b3d0, public_6f1b3d0);
extern "C" NAKED register_t __cdecl internal_6f1b3d0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+0x40]
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6f1b471
        push ebx
        push ebp
        push esi
        public_6f1b3e8 : nop
        mov ebp, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        lea ebx, ss:[ebp+8]
        je public_6f1b418
        public_6f1b3f7 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6f1b404
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f1b404 : nop
        mov edx, dword ptr ds : [ebx]
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [ebx+8]
        jne public_6f1b3f7
        public_6f1b418 : nop
        mov ecx, ebp
        call public_6f1d110
        mov eax, dword ptr ds : [edi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6f1b441
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6f1b461
        public_6f1b434 : nop
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6f1b434
        jmp public_6f1b461
        public_6f1b441 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f1b45a
        lea esp, ss:[esp]
        public_6f1b450 : nop
        mov edi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [eax+8]
        je public_6f1b450
        public_6f1b45a : nop
        cmp dword ptr ds : [edi+8], eax
        je public_6f1b461
        mov edi, eax
        public_6f1b461 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp edi, dword ptr ds : [ecx+0x40]
        jne public_6f1b3e8
        pop esi
        pop ebp
        pop ebx
        public_6f1b471 : nop
        pop edi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f1b3d0)
    }
}

#undef public_6f1b3e8
#undef public_6f1b3f7
#undef public_6f1b404
#undef public_6f1b418
#undef public_6f1b434
#undef public_6f1b441
#undef public_6f1b450
#undef public_6f1b45a
#undef public_6f1b461
#undef public_6f1b471
