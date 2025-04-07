#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6a3b0);

#define public_6f6a3c2 _public_6f6a3c2
#define public_6f6a3d7 _public_6f6a3d7
#define public_6f6a3e4 _public_6f6a3e4
#define public_6f6a3f0 _public_6f6a3f0
#define public_6f6a3fa _public_6f6a3fa
#define public_6f6a3ff _public_6f6a3ff
#define public_6f6a401 _public_6f6a401
#define public_6f6a406 _public_6f6a406

PROC_DECLARE(0x6f6a3b0, internal_6f6a3b0, public_6f6a3b0);
extern "C" NAKED register_t __cdecl internal_6f6a3b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp eax, esi
        je public_6f6a406
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        public_6f6a3c2 : nop
        inc dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        jne public_6f6a3e4
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6f6a3ff
        public_6f6a3d7 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6f6a3d7
        jmp public_6f6a3ff
        public_6f6a3e4 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f6a3fa
        lea esp, ss:[esp]
        public_6f6a3f0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6f6a3f0
        public_6f6a3fa : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6f6a401
        public_6f6a3ff : nop
        mov eax, ecx
        public_6f6a401 : nop
        cmp eax, esi
        jne public_6f6a3c2
        pop ebx
        public_6f6a406 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f6a3b0)
    }
}

#undef public_6f6a3c2
#undef public_6f6a3d7
#undef public_6f6a3e4
#undef public_6f6a3f0
#undef public_6f6a3fa
#undef public_6f6a3ff
#undef public_6f6a401
#undef public_6f6a406
