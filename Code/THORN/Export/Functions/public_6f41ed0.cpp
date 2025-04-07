#include "THORN-PCH.h"


#define public_6f41eec _public_6f41eec
#define public_6f41f02 _public_6f41f02
#define public_6f41f12 _public_6f41f12
#define public_6f41f22 _public_6f41f22

PROC_DECLARE(0x6f41ed0, internal_6f41ed0, public_6f41ed0);
extern "C" NAKED register_t __cdecl internal_6f41ed0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x158]
        xor ebx, ebx
        cmp eax, ebx
        je public_6f41eec
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x158], ebx
        public_6f41eec : nop
        mov eax, dword ptr ds : [esi+0x15C]
        cmp eax, ebx
        je public_6f41f02
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x15C], ebx
        public_6f41f02 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_6f41f12
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], ebx
        public_6f41f12 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_6f41f22
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x14], ebx
        public_6f41f22 : nop
        mov byte ptr ds : [esi+0x6C], bl
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f41ed0)
    }
}

#undef public_6f41eec
#undef public_6f41f02
#undef public_6f41f12
#undef public_6f41f22
