#include "Server-PCH.h"


#define public_6d2334a _public_6d2334a
#define public_6d23360 _public_6d23360
#define public_6d2336d _public_6d2336d
#define public_6d233bb _public_6d233bb
#define public_6d23401 _public_6d23401
#define public_6d2340d _public_6d2340d
#define public_6d23417 _public_6d23417

PROC_DECLARE(0x6d23300, internal_6d23300, public_6d23300);
extern "C" NAKED register_t __cdecl internal_6d23300()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [eax+0x18]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax+4]
        shl edx, 5
        add eax, edx
        mov edx, dword ptr ds : [eax+0x18]
        cmp ebx, edx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x18], edx
        jne public_6d2336d
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d2334a
        mov edx, dword ptr ds : [ecx]
        push ebx
        push esi
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        pop ecx
        ret 8
        public_6d2334a : nop
        mov al, byte ptr ds : [esi+0x1C]
        test al, al
        je public_6d23360
        cmp dword ptr ds : [esi+8], ebx
        jne public_6d23360
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_6d23360 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        pop ecx
        ret 8
        public_6d2336d : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [eax+0x18], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+4]
        shl ecx, 5
        mov dword ptr ds : [ecx+eax+0x1C], ebx
        mov edi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi+0xC]
        shl edx, 5
        cmp eax, dword ptr ds : [edx+ecx+0x10]
        ja public_6d233bb
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_6d23401
        mov edx, dword ptr ds : [ecx]
        push ebx
        push esi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        jne public_6d2340d
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d233bb : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+4]
        shl ecx, 5
        mov edx, dword ptr ds : [ecx+eax+0x10]
        lea eax, ds:[ecx+eax+0x10]
        mov ecx, dword ptr ds : [edi+0x10]
        cmp ecx, edx
        jbe public_6d23417
        mov ecx, edx
        inc ecx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push esi
        call dword ptr ds : [edx+4]
        test al, al
        jne public_6d2340d
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+4]
        shl ecx, 5
        lea eax, ds:[ecx+eax+0x10]
        dec dword ptr ds : [eax]
        jmp public_6d23417
        public_6d23401 : nop
        mov al, byte ptr ds : [esi+0x1C]
        test al, al
        je public_6d2340d
        cmp dword ptr ds : [esi+8], ebx
        je public_6d233bb
        public_6d2340d : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6d23417 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [edx+0x18]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 5
        mov ecx, dword ptr ds : [eax+edx+0x18]
        add eax, edx
        mov dword ptr ds : [eax+0x1C], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        shl ecx, 5
        pop ebp
        mov dword ptr ds : [ecx+eax+0x18], edx
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d23300)
    }
}

#undef public_6d2334a
#undef public_6d23360
#undef public_6d2336d
#undef public_6d233bb
#undef public_6d23401
#undef public_6d2340d
#undef public_6d23417
