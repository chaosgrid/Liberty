#include "Server-PCH.h"


#define public_6d203d9 _public_6d203d9
#define public_6d20434 _public_6d20434
#define public_6d204a6 _public_6d204a6
#define public_6d204aa _public_6d204aa

PROC_DECLARE(0x6d203b0, internal_6d203b0, public_6d203b0);
extern "C" NAKED register_t __cdecl internal_6d203b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax-4]
        mov edx, dword ptr ds : [edx]
        sub eax, 4
        mov dword ptr ds : [eax], edx
        cmp edx, dword ptr ds : [ecx+0xC]
        je public_6d203d9
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x18], eax
        mov al, 1
        pop esi
        ret 4
        public_6d203d9 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [eax+0x1008]
        push ebx
        mov ebx, dword ptr ds : [eax+0x1004]
        add edx, 0xFFFFFFFC
        cmp edx, ebx
        mov dword ptr ds : [eax+0x1008], edx
        jne public_6d20434
        mov ebx, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [ebx+8], edx
        mov edx, dword ptr ds : [eax+0x1000]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [eax+0x1000], edx
        add edx, 0x10
        mov dword ptr ds : [eax+0x1004], edx
        mov edx, dword ptr ds : [eax+0x1000]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+0x1008], edx
        mov edx, dword ptr ds : [eax+0x1000]
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0x100C], edx
        public_6d20434 : nop
        mov ecx, dword ptr ds : [ecx+0x18]
        cmp ecx, 0xFFFFFFFF
        je public_6d204aa
        mov edx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [eax+0x1008]
        shl ecx, 5
        add ebx, 0xFFFFFFFC
        lea esi, ds:[ecx+edx+0xC]
        mov edx, dword ptr ds : [eax+0x1004]
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], ebx
        jne public_6d204a6
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
        public_6d204a6 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edx
        public_6d204aa : nop
        pop ebx
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d203b0)
    }
}

#undef public_6d203d9
#undef public_6d20434
#undef public_6d204a6
#undef public_6d204aa
