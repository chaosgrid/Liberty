#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d39440);

#define public_6d39690 _public_6d39690
#define public_6d396c1 _public_6d396c1
#define public_6d396da _public_6d396da
#define public_6d3970f _public_6d3970f
#define public_6d39727 _public_6d39727
#define public_6d39760 _public_6d39760
#define public_6d39789 _public_6d39789
#define public_6d397a1 _public_6d397a1
#define public_6d397b3 _public_6d397b3
#define public_6d397bb _public_6d397bb
#define public_6d397bf _public_6d397bf
#define public_6d397d5 _public_6d397d5
#define public_6d397d7 _public_6d397d7
#define public_6d397e8 _public_6d397e8

PROC_DECLARE(0x6d39630, internal_6d39630, public_6d39630);
extern "C" NAKED register_t __cdecl internal_6d39630()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [edx+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [edi+0x18], ecx
        mov ecx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx+8]
        shl eax, 5
        add ecx, eax
        mov al, byte ptr ds : [ecx+8]
        test al, al
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x20], 0
        je public_6d397bf
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, ecx
        mov esi, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        je public_6d396c1
        add edx, 0xD
        mov dword ptr ss : [esp+0x14], edx
        mov ebx, eax
        lea esp, ss:[esp]
        public_6d39690 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push esi
        push edi
        call public_6d39440
        test al, al
        jne public_6d397bb
        mov dx, word ptr ds : [esi]
        cmp dx, word ptr ds : [ebx]
        jne public_6d397bb
        mov eax, dword ptr ss : [esp+0x18]
        add ebx, 2
        add esi, 2
        cmp ebx, eax
        jne public_6d39690
        mov ebx, dword ptr ss : [esp+0xC]
        public_6d396c1 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, esi
        sub eax, ecx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [edi+0x10], esi
        jne public_6d3970f
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [esp+0x20], ecx
        public_6d396da : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov esi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, esi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d397d5
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d397d7
        public_6d3970f : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_6d397b3
        cmp eax, 1
        mov dword ptr ss : [esp+0x20], 1
        jbe public_6d396da
        public_6d39727 : nop
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+0x18], eax
        mov ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax+4]
        shl ecx, 5
        add ecx, eax
        mov al, byte ptr ds : [ecx+8]
        test al, al
        je public_6d397a1
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, ecx
        mov esi, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d39789
        add edx, 0xD
        mov dword ptr ss : [esp+0x18], edx
        mov ebx, eax
        lea ecx, ds:[ecx]
        public_6d39760 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        call public_6d39440
        test al, al
        jne public_6d397a1
        mov cx, word ptr ds : [esi]
        cmp cx, word ptr ds : [ebx]
        jne public_6d397a1
        mov eax, dword ptr ss : [esp+0x14]
        add ebx, 2
        add esi, 2
        cmp ebx, eax
        jne public_6d39760
        mov ebx, dword ptr ss : [esp+0xC]
        public_6d39789 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi+0x10], esi
        mov ecx, dword ptr ds : [ebx+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jb public_6d39727
        jmp public_6d396da
        public_6d397a1 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x10], edx
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
        public_6d397b3 : nop
        mov dword ptr ds : [edi+0x10], ecx
        jmp public_6d396da
        public_6d397bb : nop
        mov ebx, dword ptr ss : [esp+0xC]
        public_6d397bf : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_6d396da
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
        public_6d397d5 : nop
        mov eax, edx
        public_6d397d7 : nop
        test eax, eax
        je public_6d397e8
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_6d397e8 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d39630)
    }
}

#undef public_6d39690
#undef public_6d396c1
#undef public_6d396da
#undef public_6d3970f
#undef public_6d39727
#undef public_6d39760
#undef public_6d39789
#undef public_6d397a1
#undef public_6d397b3
#undef public_6d397bb
#undef public_6d397bf
#undef public_6d397d5
#undef public_6d397d7
#undef public_6d397e8
