#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12f40);

#define public_6d12f70 _public_6d12f70
#define public_6d12f90 _public_6d12f90
#define public_6d12fa1 _public_6d12fa1
#define public_6d12fb6 _public_6d12fb6
#define public_6d12fc3 _public_6d12fc3
#define public_6d12fd0 _public_6d12fd0
#define public_6d12fda _public_6d12fda
#define public_6d12fe1 _public_6d12fe1
#define public_6d12ff4 _public_6d12ff4

PROC_DECLARE(0x6d12f40, internal_6d12f40, public_6d12f40);
extern "C" NAKED register_t __cdecl internal_6d12f40()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+4]
        add edi, 0x10
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp esi, eax
        je public_6d12ff4
        push ebp
        mov ebp, dword ptr ds : [public_6d64774]
        lea ebx, ds:[ebx]
        public_6d12f70 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_6d12fa1
        mov ecx, dword ptr ds : [eax+0x4C]
        test ecx, ecx
        jne public_6d12fa1
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_6d12f90
        cmp eax, 1
        jne public_6d12fa1
        public_6d12f90 : nop
        cmp ebx, dword ptr ss : [esp+0x10]
        jge public_6d12fa1
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+ebx*4], ecx
        inc ebx
        public_6d12fa1 : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x2D]
        test cl, cl
        jne public_6d12fc3
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x2D]
        test cl, cl
        jne public_6d12fe1
        public_6d12fb6 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x2D]
        test cl, cl
        je public_6d12fb6
        jmp public_6d12fe1
        public_6d12fc3 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d12fda
        nop 
        lea esp, ss:[esp]
        public_6d12fd0 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6d12fd0
        public_6d12fda : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6d12fe1
        mov esi, eax
        public_6d12fe1 : nop
        cmp esi, dword ptr ds : [edi+4]
        jne public_6d12f70
        mov eax, dword ptr ss : [esp+0x1C]
        pop ebp
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        pop ecx
        ret 8
        public_6d12ff4 : nop
        pop edi
        pop esi
        mov dword ptr ds : [edx], ebx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d12f40)
    }
}

#undef public_6d12f70
#undef public_6d12f90
#undef public_6d12fa1
#undef public_6d12fb6
#undef public_6d12fc3
#undef public_6d12fd0
#undef public_6d12fda
#undef public_6d12fe1
#undef public_6d12ff4
