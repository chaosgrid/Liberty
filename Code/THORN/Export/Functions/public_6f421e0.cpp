#include "THORN-PCH.h"


#define public_6f421f6 _public_6f421f6
#define public_6f42206 _public_6f42206

PROC_DECLARE(0x6f421e0, internal_6f421e0, public_6f421e0);
extern "C" NAKED register_t __cdecl internal_6f421e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp eax, ebx
        je public_6f421f6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], ebx
        public_6f421f6 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_6f42206
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x14], ebx
        public_6f42206 : nop
        mov byte ptr ds : [esi+0x6C], bl
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f421e0)
    }
}

#undef public_6f421f6
#undef public_6f42206
