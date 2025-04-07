#include "Common-PCH.h"


#define public_629ffe0 _public_629ffe0
#define public_629ffef _public_629ffef
#define public_629fffc _public_629fffc
#define public_629fffe _public_629fffe
#define public_62a0007 _public_62a0007
#define public_62a000e _public_62a000e
#define public_62a001e _public_62a001e

PROC_DECLARE(0x629ffd0, internal_629ffd0, public_629ffd0);
extern "C" NAKED register_t __cdecl internal_629ffd0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0xC]
        xor edx, edx
        test eax, eax
        je public_62a000e
        public_629ffe0 : nop
        cmp eax, ecx
        je public_629ffef
        mov edx, eax
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_629ffe0
        jmp public_62a000e
        public_629ffef : nop
        test edx, edx
        push edi
        mov edi, dword ptr ds : [eax+4]
        je public_629fffc
        mov dword ptr ds : [edx+4], edi
        jmp public_629fffe
        public_629fffc : nop
        mov dword ptr ds : [esi], edi
        public_629fffe : nop
        cmp eax, dword ptr ds : [esi+4]
        pop edi
        jne public_62a0007
        mov dword ptr ds : [esi+4], edx
        public_62a0007 : nop
        mov dword ptr ds : [ecx+4], 0
        public_62a000e : nop
        cmp eax, ecx
        sete bl
        test ecx, ecx
        je public_62a001e
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+8]
        public_62a001e : nop
        pop esi
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x629ffd0)
    }
}

#undef public_629ffe0
#undef public_629ffef
#undef public_629fffc
#undef public_629fffe
#undef public_62a0007
#undef public_62a000e
#undef public_62a001e
