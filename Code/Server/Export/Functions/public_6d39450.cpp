#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d39440);

#define public_6d394a1 _public_6d394a1
#define public_6d394a5 _public_6d394a5
#define public_6d394de _public_6d394de
#define public_6d394f9 _public_6d394f9
#define public_6d39511 _public_6d39511
#define public_6d39520 _public_6d39520
#define public_6d39535 _public_6d39535
#define public_6d39550 _public_6d39550
#define public_6d39563 _public_6d39563
#define public_6d3957a _public_6d3957a
#define public_6d39589 _public_6d39589
#define public_6d39591 _public_6d39591
#define public_6d39595 _public_6d39595
#define public_6d395a8 _public_6d395a8
#define public_6d395b4 _public_6d395b4
#define public_6d395bb _public_6d395bb
#define public_6d395c7 _public_6d395c7
#define public_6d395d3 _public_6d395d3
#define public_6d395df _public_6d395df
#define public_6d395e7 _public_6d395e7
#define public_6d39611 _public_6d39611
#define public_6d39628 _public_6d39628

PROC_DECLARE(0x6d39450, internal_6d39450, public_6d39450);
extern "C" NAKED register_t __cdecl internal_6d39450()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [eax+4]
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        shl esi, 5
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], eax
        add eax, esi
        cmp byte ptr ds : [eax+8], bl
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x10], ebx
        je public_6d395b4
        mov ebx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], eax
        mov esi, edi
        je public_6d394de
        add ecx, 0xD
        mov dword ptr ss : [esp+0x28], ecx
        jmp public_6d394a5
        public_6d394a1 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        public_6d394a5 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push esi
        push ebp
        call public_6d39440
        test al, al
        jne public_6d395a8
        mov cx, word ptr ds : [esi]
        cmp cx, word ptr ds : [ebx]
        jne public_6d395a8
        mov eax, dword ptr ss : [esp+0x18]
        add ebx, 2
        add esi, 2
        cmp ebx, eax
        jne public_6d394a1
        cmp esi, edi
        jne public_6d39520
        mov ebp, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x14]
        public_6d394de : nop
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d394f9
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebp
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 0x10
        ret 8
        public_6d394f9 : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d39511
        cmp dword ptr ss : [ebp+8], edi
        jne public_6d39511
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 8
        public_6d39511 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x10
        ret 8
        public_6d39520 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [eax+0xC]
        test ebx, ebx
        je public_6d39535
        mov edi, esi
        mov dword ptr ss : [esp+0x10], 1
        public_6d39535 : nop
        cmp dword ptr ss : [esp+0x10], ebx
        jae public_6d39589
        mov eax, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        shl eax, 5
        lea ebp, ds:[eax+ecx]
        nop 
        lea esp, ss:[esp]
        public_6d39550 : nop
        mov al, byte ptr ss : [ebp+8]
        test al, al
        je public_6d395bb
        mov ecx, dword ptr ss : [ebp]
        mov esi, dword ptr ss : [ebp+4]
        cmp ecx, esi
        mov eax, edi
        je public_6d3957a
        public_6d39563 : nop
        mov dx, word ptr ds : [eax]
        test dx, dx
        je public_6d395bb
        cmp dx, word ptr ds : [ecx]
        jne public_6d395bb
        add ecx, 2
        add eax, 2
        cmp ecx, esi
        jne public_6d39563
        public_6d3957a : nop
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        jb public_6d39550
        public_6d39589 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ss : [esp+0x10]
        public_6d39591 : nop
        mov edx, dword ptr ss : [esp+0x14]
        public_6d39595 : nop
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d395c7
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebp
        call dword ptr ds : [edx+4]
        movzx eax, al
        jmp public_6d395df
        public_6d395a8 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x10]
        public_6d395b4 : nop
        mov eax, dword ptr ds : [edx+0xC]
        test eax, eax
        je public_6d39595
        public_6d395bb : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 8
        public_6d395c7 : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d395d3
        cmp dword ptr ss : [ebp+8], edi
        je public_6d395e7
        public_6d395d3 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 8
        public_6d395df : nop
        test al, al
        jne public_6d395d3
        mov edx, dword ptr ss : [esp+0x14]
        public_6d395e7 : nop
        cmp ebx, dword ptr ds : [edx+0x10]
        jae public_6d395bb
        mov eax, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 5
        mov cl, byte ptr ds : [eax+edx+8]
        add eax, edx
        inc ebx
        test cl, cl
        je public_6d395bb
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp ecx, eax
        mov edx, edi
        je public_6d39628
        public_6d39611 : nop
        mov si, word ptr ds : [edx]
        test si, si
        je public_6d395bb
        cmp si, word ptr ds : [ecx]
        jne public_6d395bb
        add ecx, 2
        add edx, 2
        cmp ecx, eax
        jne public_6d39611
        public_6d39628 : nop
        mov edi, edx
        jmp public_6d39591
        UNREACHABLE_TRAP(0x6d39450)
    }
}

#undef public_6d394a1
#undef public_6d394a5
#undef public_6d394de
#undef public_6d394f9
#undef public_6d39511
#undef public_6d39520
#undef public_6d39535
#undef public_6d39550
#undef public_6d39563
#undef public_6d3957a
#undef public_6d39589
#undef public_6d39591
#undef public_6d39595
#undef public_6d395a8
#undef public_6d395b4
#undef public_6d395bb
#undef public_6d395c7
#undef public_6d395d3
#undef public_6d395df
#undef public_6d395e7
#undef public_6d39611
#undef public_6d39628
