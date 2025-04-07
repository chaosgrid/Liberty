#include "Server-PCH.h"


#define public_6d2378b _public_6d2378b
#define public_6d237e6 _public_6d237e6
#define public_6d23858 _public_6d23858
#define public_6d2385c _public_6d2385c

PROC_DECLARE(0x6d23760, internal_6d23760, public_6d23760);
extern "C" NAKED register_t __cdecl internal_6d23760()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [eax+0x1008]
        sub eax, 4
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ecx
        cmp ecx, dword ptr ds : [esi+0xC]
        je public_6d2378b
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+0x18], eax
        mov al, 1
        pop esi
        ret 4
        public_6d2378b : nop
        mov eax, dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [eax+0x1008]
        push ebx
        mov ebx, dword ptr ds : [eax+0x1004]
        add ecx, 0xFFFFFFFC
        cmp ecx, ebx
        mov dword ptr ds : [eax+0x1008], ecx
        jne public_6d237e6
        mov ebx, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [ebx+8], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x1000], ecx
        add ecx, 0x10
        mov dword ptr ds : [eax+0x1004], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x1008], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0x100C], ecx
        public_6d237e6 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        cmp ecx, 0xFFFFFFFF
        je public_6d2385c
        mov edx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [eax+0x1008]
        shl ecx, 5
        add ebx, 0xFFFFFFFC
        lea esi, ds:[ecx+edx+0xC]
        mov edx, dword ptr ds : [eax+0x1004]
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], ebx
        jne public_6d23858
        mov edx, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x1000], ecx
        add ecx, 0x10
        mov dword ptr ds : [eax+0x1004], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x1008], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0x100C], ecx
        mov ecx, edx
        public_6d23858 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edx
        public_6d2385c : nop
        pop ebx
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d23760)
    }
}

#undef public_6d2378b
#undef public_6d237e6
#undef public_6d23858
#undef public_6d2385c
