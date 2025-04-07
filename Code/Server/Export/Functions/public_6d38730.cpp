#include "Server-PCH.h"


#define public_6d38780 _public_6d38780
#define public_6d3879b _public_6d3879b
#define public_6d387b3 _public_6d387b3
#define public_6d38813 _public_6d38813
#define public_6d38815 _public_6d38815

PROC_DECLARE(0x6d38730, internal_6d38730, public_6d38730);
extern "C" NAKED register_t __cdecl internal_6d38730()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+0x14]
        mov ebp, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ss : [ebp-4]
        sub ebp, 4
        cmp edx, esi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d387b3
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+0x18], esi
        mov edx, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [edi]
        mov esi, dword ptr ds : [esi+4]
        shl edx, 5
        mov bl, byte ptr ds : [edx+esi+8]
        add edx, esi
        test bl, bl
        je public_6d387b3
        mov esi, dword ptr ds : [edx]
        mov ebx, dword ptr ds : [edx+4]
        cmp esi, ebx
        mov edx, dword ptr ds : [edi+0x10]
        je public_6d3879b
        nop 
        public_6d38780 : nop
        cmp dword ptr ds : [edi+0xC], edx
        je public_6d387b3
        mov cx, word ptr ds : [edx]
        cmp cx, word ptr ds : [esi]
        jne public_6d387b3
        add esi, 2
        add edx, 2
        cmp esi, ebx
        jne public_6d38780
        mov ecx, dword ptr ss : [esp+0x10]
        public_6d3879b : nop
        mov dword ptr ds : [edi+0x10], edx
        inc dword ptr ss : [ebp]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+0x18], edx
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d387b3 : nop
        mov esi, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add esi, 0xFFFFFFF8
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], esi
        jne public_6d38813
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
        mov eax, edx
        jmp public_6d38815
        public_6d38813 : nop
        mov eax, ecx
        public_6d38815 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x10], ecx
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+8], edx
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d38730)
    }
}

#undef public_6d38780
#undef public_6d3879b
#undef public_6d387b3
#undef public_6d38813
#undef public_6d38815
