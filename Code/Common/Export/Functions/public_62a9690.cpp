#include "Common-PCH.h"


#define public_62a96a5 _public_62a96a5
#define public_62a96b3 _public_62a96b3
#define public_62a96c5 _public_62a96c5

PROC_DECLARE(0x62a9690, internal_62a9690, public_62a9690);
extern "C" NAKED register_t __cdecl internal_62a9690()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        test al, al
        push ebx
        push esi
        push edi
        mov edi, ecx
        je public_62a96a5
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0xA8]
        public_62a96a5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax+8]
        cmp esi, ebx
        je public_62a96c5
        public_62a96b3 : nop
        mov edx, dword ptr ds : [edi]
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0xB0]
        add esi, 0x20
        cmp esi, ebx
        jne public_62a96b3
        public_62a96c5 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62a9690)
    }
}

#undef public_62a96a5
#undef public_62a96b3
#undef public_62a96c5
