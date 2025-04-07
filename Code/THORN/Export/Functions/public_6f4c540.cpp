#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c730);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e240);

#define public_6f4c5af _public_6f4c5af
#define public_6f4c5ce _public_6f4c5ce
#define public_6f4c5dd _public_6f4c5dd
#define public_6f4c5f2 _public_6f4c5f2
#define public_6f4c60e _public_6f4c60e
#define public_6f4c613 _public_6f4c613
#define public_6f4c618 _public_6f4c618
#define public_6f4c61b _public_6f4c61b
#define public_6f4c639 _public_6f4c639
#define public_6f4c645 _public_6f4c645
#define public_6f4c658 _public_6f4c658
#define public_6f4c68b _public_6f4c68b

PROC_DECLARE(0x6f4c540, internal_6f4c540, public_6f4c540);
extern "C" NAKED register_t __cdecl internal_6f4c540()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi]
        sub esi, eax
        sar esi, 4
        sub esi, ebp
        mov ecx, esi
        shl ecx, 4
        lea eax, ds:[ecx+eax-0x10]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, 0xFFFFFFF9
        je public_6f4c5f2
        cmp ecx, 0xFFFFFFFB
        je public_6f4c5dd
        cmp ecx, 0xFFFFFFFC
        je public_6f4c5ce
        push eax
        call public_6f4e240
        lea edx, ds:[eax+eax*8]
        mov eax, dword ptr ds : [public_6f61e28]
        mov ebx, dword ptr ds : [eax+0x64]
        shl edx, 5
        sub ebx, edx
        mov eax, dword ptr ds : [ebx+0x110]
        add ebx, 0x110
        add esp, 4
        cmp eax, 0xFFFFFFFA
        jne public_6f4c5af
/*FIXUP push offset public_6f60548 @0x6f4c5a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60548
        call public_6f4c7f0
        add esp, 4
        public_6f4c5af : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi]
        push ecx
        sub edx, dword ptr ds : [edi+4]
        sar edx, 4
        sub edx, esi
        inc edx
        push edx
        push ebx
        call public_6f4c4f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6f4c5ce : nop
        mov dword ptr ds : [eax], 0xFFFFFFF7
        mov eax, dword ptr ds : [eax+8]
        push esi
        push eax
        push 0
        jmp public_6f4c613
        public_6f4c5dd : nop
        mov ecx, dword ptr ds : [eax+8]
        push esi
        push ecx
        mov dword ptr ds : [eax], 0xFFFFFFF6
        call public_6f4c6a0
        add esp, 8
        jmp public_6f4c61b
        public_6f4c5f2 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [eax], 0xFFFFFFF8
        cmp dword ptr ds : [ecx+0x10], 0xFFFFFFFB
        push esi
        jne public_6f4c60e
        mov edx, dword ptr ds : [ecx+0x18]
        push edx
        push ecx
        call public_6f4c730
        jmp public_6f4c618
        public_6f4c60e : nop
        mov eax, dword ptr ds : [ecx+0x18]
        push eax
        push ecx
        public_6f4c613 : nop
        call public_6f4d540
        public_6f4c618 : nop
        add esp, 0xC
        public_6f4c61b : nop
        mov ebx, dword ptr ss : [esp+0x18]
        cmp ebx, 0xFF
        mov ebp, eax
        mov dword ptr ss : [esp+0x14], ebp
        jne public_6f4c639
        mov ebx, dword ptr ds : [edi]
        sub ebx, dword ptr ds : [edi+4]
        sar ebx, 4
        sub ebx, ebp
        jmp public_6f4c645
        public_6f4c639 : nop
        lea ecx, ds:[ebx+ebp]
        push ecx
        call public_6f4c2f0
        add esp, 4
        public_6f4c645 : nop
        dec esi
        test ebx, ebx
        jle public_6f4c68b
        mov ecx, esi
        mov eax, ebp
        shl ecx, 4
        shl eax, 4
        mov dword ptr ss : [esp+0x18], ebx
        public_6f4c658 : nop
        mov edx, dword ptr ds : [edi+4]
        lea ebx, ds:[eax+edx]
        mov ebp, dword ptr ds : [ebx]
        add edx, ecx
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov dword ptr ds : [edx+4], ebp
        mov ebp, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edx+8], ebp
        mov ebx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [edx+0xC], ebx
        mov edx, dword ptr ss : [esp+0x18]
        add eax, 0x10
        add ecx, 0x10
        dec edx
        mov dword ptr ss : [esp+0x18], edx
        jne public_6f4c658
        mov ebp, dword ptr ss : [esp+0x14]
        public_6f4c68b : nop
        mov eax, dword ptr ds : [edi]
        sub esi, ebp
        shl esi, 4
        add eax, esi
        mov dword ptr ds : [edi], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4c540)
    }
}

#undef public_6f4c5af
#undef public_6f4c5ce
#undef public_6f4c5dd
#undef public_6f4c5f2
#undef public_6f4c60e
#undef public_6f4c613
#undef public_6f4c618
#undef public_6f4c61b
#undef public_6f4c639
#undef public_6f4c645
#undef public_6f4c658
#undef public_6f4c68b
