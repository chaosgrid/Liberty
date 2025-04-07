#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100085a0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a418);
CLANG_FORWARD_PROC_SYMBOL(public_1000a46a);

#define public_100085d2 _public_100085d2
#define public_100085ef _public_100085ef
#define public_10008609 _public_10008609
#define public_10008618 _public_10008618
#define public_10008624 _public_10008624
#define public_10008635 _public_10008635
#define public_1000864f _public_1000864f
#define public_10008680 _public_10008680
#define public_1000869f _public_1000869f
#define public_100086a5 _public_100086a5
#define public_100086af _public_100086af
#define public_100086bd _public_100086bd

PROC_DECLARE(0x100085a0, internal_100085a0, public_100085a0);
extern "C" NAKED register_t __cdecl internal_100085a0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ds : [ebx+0x1C]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push 2
        push 0
        push esi
        mov ebp, 0xFFFF
        push eax
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x20], 0
        call dword ptr ds : [ebx+0x10]
        test eax, eax
        je public_100085d2
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x10
        ret 
        public_100085d2 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        push edi
        push esi
        push ecx
        call dword ptr ds : [ebx+0xC]
        mov edi, eax
        cmp edi, 0xFFFF
        mov dword ptr ss : [esp+0x18], edi
        jae public_100085ef
        mov dword ptr ss : [esp+0xC], edi
        mov ebp, eax
        public_100085ef : nop
        push 0x404
        call public_1000a46a
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_10008609
        pop edi
        pop esi
        pop ebp
        add esp, 0x10
        ret 
        public_10008609 : nop
        mov eax, 4
        cmp ebp, eax
        jbe public_100086bd
        jmp public_10008624
        public_10008618 : nop
        mov ebp, dword ptr ss : [esp+0xC]
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        public_10008624 : nop
        add eax, 0x400
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], ebp
        ja public_10008635
        mov dword ptr ss : [esp+0x10], eax
        public_10008635 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebp, edi
        sub ebp, eax
        mov eax, edi
        sub eax, ebp
        cmp eax, 0x404
        mov edi, 0x404
        ja public_1000864f
        mov edi, eax
        public_1000864f : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx+0x1C]
        push 0
        push ebp
        push edx
        push eax
        call dword ptr ds : [ebx+0x10]
        test eax, eax
        jne public_100086bd
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ebx+0x1C]
        push edi
        push esi
        push ecx
        push edx
        call dword ptr ds : [ebx+4]
        cmp eax, edi
        jne public_100086bd
        lea eax, ds:[edi-3]
        test eax, eax
        jle public_100086af
        jmp public_10008680
        lea ecx, ds:[ecx]
        public_10008680 : nop
        mov cl, byte ptr ds : [eax+esi-1]
        dec eax
        cmp cl, 0x50
        jne public_1000869f
        cmp byte ptr ds : [eax+esi+1], 0x4B
        jne public_1000869f
        cmp byte ptr ds : [eax+esi+2], 5
        jne public_1000869f
        cmp byte ptr ds : [eax+esi+3], 6
        je public_100086a5
        public_1000869f : nop
        test eax, eax
        jg public_10008680
        jmp public_100086af
        public_100086a5 : nop
        add eax, ebp
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_100086bd
        public_100086af : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp dword ptr ss : [esp+0x10], eax
        jb public_10008618
        public_100086bd : nop
        push esi
        call public_1000a418
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x100085a0)
    }
}

#undef public_100085d2
#undef public_100085ef
#undef public_10008609
#undef public_10008618
#undef public_10008624
#undef public_10008635
#undef public_1000864f
#undef public_10008680
#undef public_1000869f
#undef public_100086a5
#undef public_100086af
#undef public_100086bd
