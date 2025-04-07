#include "Server-PCH.h"


#define public_6d230f4 _public_6d230f4
#define public_6d23101 _public_6d23101
#define public_6d2312b _public_6d2312b
#define public_6d23133 _public_6d23133
#define public_6d23140 _public_6d23140
#define public_6d231b2 _public_6d231b2

PROC_DECLARE(0x6d23060, internal_6d23060, public_6d23060);
extern "C" NAKED register_t __cdecl internal_6d23060()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [edx+0x18]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi+4]
        shl edx, 5
        add edx, esi
        mov esi, dword ptr ds : [eax+0x14]
        mov esi, dword ptr ds : [esi+0x1008]
        mov ebx, dword ptr ds : [esi-4]
        push edi
        mov edi, dword ptr ds : [eax+0x10]
        cmp edi, ebx
        jne public_6d23101
        mov ecx, dword ptr ds : [edx+0x18]
        mov dword ptr ds : [edx+0x1C], ecx
        mov eax, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [eax+0x1008]
        mov esi, dword ptr ds : [eax+0x1004]
        add edi, 0xFFFFFFFC
        mov ecx, edi
        cmp ecx, esi
        mov dword ptr ds : [eax+0x1008], edi
        jne public_6d230f4
        mov esi, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov esi, dword ptr ds : [ecx+8]
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
        mov ecx, esi
        public_6d230f4 : nop
        mov eax, dword ptr ds : [ecx]
        pop edi
        pop esi
        mov dword ptr ds : [edx+0x18], eax
        xor al, al
        pop ebx
        ret 4
        public_6d23101 : nop
        mov bl, byte ptr ds : [edx+0x14]
        test bl, bl
        je public_6d23133
        dec dword ptr ds : [edx+0x10]
        mov esi, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+0x18], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [ecx+0xC]
        cmp esi, dword ptr ds : [edx+0x10]
        ja public_6d2312b
        pop edi
        pop esi
        mov byte ptr ds : [edx+0x14], 0
        mov al, 1
        pop ebx
        ret 4
        public_6d2312b : nop
        mov ecx, dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ds : [ecx+0x18]
        jmp public_6d23140
        public_6d23133 : nop
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ds : [edx+0x18]
        public_6d23140 : nop
        mov edx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [edx+4]
        shl ecx, 5
        mov edx, dword ptr ds : [ecx+ebx+0x18]
        add ecx, ebx
        mov dword ptr ds : [ecx+0x1C], edx
        mov eax, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [eax+0x1008]
        add edi, 0xFFFFFFFC
        mov dword ptr ds : [eax+0x1008], edi
        mov esi, dword ptr ds : [eax+0x1004]
        mov edx, edi
        cmp edx, esi
        jne public_6d231b2
        mov esi, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ds : [eax+0x1000]
        mov esi, dword ptr ds : [edx+8]
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
        mov edx, esi
        public_6d231b2 : nop
        mov eax, dword ptr ds : [edx]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+0x18], eax
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d23060)
    }
}

#undef public_6d230f4
#undef public_6d23101
#undef public_6d2312b
#undef public_6d23133
#undef public_6d23140
#undef public_6d231b2
