#include "Server-PCH.h"


#define public_6d3a4e3 _public_6d3a4e3
#define public_6d3a50d _public_6d3a50d
#define public_6d3a523 _public_6d3a523
#define public_6d3a530 _public_6d3a530
#define public_6d3a552 _public_6d3a552
#define public_6d3a557 _public_6d3a557
#define public_6d3a560 _public_6d3a560
#define public_6d3a577 _public_6d3a577
#define public_6d3a58e _public_6d3a58e
#define public_6d3a59a _public_6d3a59a
#define public_6d3a5a4 _public_6d3a5a4

PROC_DECLARE(0x6d3a4a0, internal_6d3a4a0, public_6d3a4a0);
extern "C" NAKED register_t __cdecl internal_6d3a4a0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x10]
        xor ebp, ebp
        cmp ebx, ebp
        mov edx, esi
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6d3a557
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, esi
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x10], eax
        je public_6d3a557
        mov ax, word ptr ds : [esi]
        cmp ax, word ptr ds : [ecx+8]
        je public_6d3a4e3
        cmp ax, word ptr ds : [ecx+0xE]
        jne public_6d3a557
        public_6d3a4e3 : nop
        add esi, 2
        mov ebp, esi
        sub ebp, edx
        sar ebp, 1
        neg ebp
        jne public_6d3a530
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x18]
        je public_6d3a50d
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        pop ecx
        ret 8
        public_6d3a50d : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3a523
        cmp dword ptr ds : [eax+8], esi
        jne public_6d3a523
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_6d3a523 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        pop ecx
        ret 8
        public_6d3a530 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        inc eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        jae public_6d3a557
        cmp dword ptr ss : [esp+0x10], esi
        je public_6d3a557
        mov ax, word ptr ds : [esi]
        cmp ax, word ptr ds : [ecx+8]
        je public_6d3a552
        cmp ax, word ptr ds : [ecx+0xE]
        jne public_6d3a557
        public_6d3a552 : nop
        add esi, 2
        jmp public_6d3a530
        public_6d3a557 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp dword ptr ds : [edi+0xC], ecx
        ja public_6d3a5a4
        public_6d3a560 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x18]
        je public_6d3a58e
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d3a577 : nop
        jne public_6d3a59a
        mov ecx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp ecx, eax
        je public_6d3a5a4
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        lea esi, ds:[esi+ebp*2]
        jmp public_6d3a560
        public_6d3a58e : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3a59a
        cmp dword ptr ds : [eax+8], esi
        jmp public_6d3a577
        public_6d3a59a : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6d3a5a4 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d3a4a0)
    }
}

#undef public_6d3a4e3
#undef public_6d3a50d
#undef public_6d3a523
#undef public_6d3a530
#undef public_6d3a552
#undef public_6d3a557
#undef public_6d3a560
#undef public_6d3a577
#undef public_6d3a58e
#undef public_6d3a59a
#undef public_6d3a5a4
