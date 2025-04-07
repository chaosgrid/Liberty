#include "Server-PCH.h"


#define public_6d3c2a0 _public_6d3c2a0
#define public_6d3c2c3 _public_6d3c2c3
#define public_6d3c2e2 _public_6d3c2e2
#define public_6d3c2fe _public_6d3c2fe
#define public_6d3c30d _public_6d3c30d
#define public_6d3c31e _public_6d3c31e
#define public_6d3c330 _public_6d3c330
#define public_6d3c338 _public_6d3c338
#define public_6d3c34f _public_6d3c34f
#define public_6d3c35e _public_6d3c35e
#define public_6d3c362 _public_6d3c362
#define public_6d3c366 _public_6d3c366
#define public_6d3c379 _public_6d3c379
#define public_6d3c380 _public_6d3c380
#define public_6d3c38c _public_6d3c38c
#define public_6d3c398 _public_6d3c398
#define public_6d3c39a _public_6d3c39a
#define public_6d3c3c0 _public_6d3c3c0
#define public_6d3c3d7 _public_6d3c3d7
#define public_6d3c3db _public_6d3c3db

PROC_DECLARE(0x6d3c270, internal_6d3c270, public_6d3c270);
extern "C" NAKED register_t __cdecl internal_6d3c270()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov edi, dword ptr ds : [ebx+0xC]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], 0
        mov eax, esi
        je public_6d3c2c3
        mov edx, ecx
        lea ebx, ds:[ebx]
        public_6d3c2a0 : nop
        mov cx, word ptr ds : [eax]
        test cx, cx
        je public_6d3c379
        cmp word ptr ds : [edx], cx
        jne public_6d3c379
        add edx, 2
        add eax, 2
        cmp edx, edi
        jne public_6d3c2a0
        cmp eax, esi
        jne public_6d3c30d
        public_6d3c2c3 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d3c2e2
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 8
        ret 8
        public_6d3c2e2 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3c2fe
        cmp dword ptr ds : [eax+8], esi
        jne public_6d3c2fe
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d3c2fe : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d3c30d : nop
        mov ebp, dword ptr ss : [ebp+0xC]
        test ebp, ebp
        je public_6d3c31e
        mov esi, eax
        mov dword ptr ss : [esp+0x10], 1
        public_6d3c31e : nop
        cmp dword ptr ss : [esp+0x10], ebp
        jae public_6d3c35e
        mov edi, dword ptr ds : [ebx+0xC]
        mov ebx, dword ptr ds : [ebx+8]
        lea ebx, ds:[ebx]
        public_6d3c330 : nop
        cmp ebx, edi
        mov eax, esi
        je public_6d3c34f
        mov ecx, ebx
        public_6d3c338 : nop
        mov dx, word ptr ds : [eax]
        test dx, dx
        je public_6d3c380
        cmp word ptr ds : [ecx], dx
        jne public_6d3c380
        add ecx, 2
        add eax, 2
        cmp ecx, edi
        jne public_6d3c338
        public_6d3c34f : nop
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        jb public_6d3c330
        public_6d3c35e : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d3c362 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        public_6d3c366 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d3c38c
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [eax+4]
        movzx eax, al
        jmp public_6d3c398
        public_6d3c379 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d3c362
        public_6d3c380 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        public_6d3c38c : nop
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        je public_6d3c3db
        cmp dword ptr ds : [edi+8], esi
        jmp public_6d3c39a
        public_6d3c398 : nop
        test al, al
        public_6d3c39a : nop
        jne public_6d3c3db
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ss : [ebp+0x10]
        jae public_6d3c380
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        mov ebx, ecx
        inc ebx
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], ebx
        mov ecx, esi
        je public_6d3c3d7
        nop 
        lea esp, ss:[esp]
        public_6d3c3c0 : nop
        mov si, word ptr ds : [ecx]
        test si, si
        je public_6d3c380
        cmp word ptr ds : [edx], si
        jne public_6d3c380
        add edx, 2
        add ecx, 2
        cmp edx, eax
        jne public_6d3c3c0
        public_6d3c3d7 : nop
        mov esi, ecx
        jmp public_6d3c366
        public_6d3c3db : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d3c270)
    }
}

#undef public_6d3c2a0
#undef public_6d3c2c3
#undef public_6d3c2e2
#undef public_6d3c2fe
#undef public_6d3c30d
#undef public_6d3c31e
#undef public_6d3c330
#undef public_6d3c338
#undef public_6d3c34f
#undef public_6d3c35e
#undef public_6d3c362
#undef public_6d3c366
#undef public_6d3c379
#undef public_6d3c380
#undef public_6d3c38c
#undef public_6d3c398
#undef public_6d3c39a
#undef public_6d3c3c0
#undef public_6d3c3d7
#undef public_6d3c3db
