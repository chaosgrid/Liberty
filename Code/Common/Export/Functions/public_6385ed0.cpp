#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e7d0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6385ed0);

#define public_6385f0b _public_6385f0b
#define public_6385f17 _public_6385f17
#define public_6385f39 _public_6385f39
#define public_6385f53 _public_6385f53
#define public_6385f5d _public_6385f5d
#define public_6385f7b _public_6385f7b
#define public_6385f91 _public_6385f91
#define public_6385f99 _public_6385f99
#define public_6385faf _public_6385faf
#define public_6385fc8 _public_6385fc8
#define public_6385fd1 _public_6385fd1
#define public_6385fd9 _public_6385fd9
#define public_6385fde _public_6385fde
#define public_6386001 _public_6386001
#define public_6386038 _public_6386038
#define public_6386046 _public_6386046
#define public_638605f _public_638605f
#define public_638606b _public_638606b

PROC_DECLARE(0x6385ed0, internal_6385ed0, public_6385ed0);
extern "C" NAKED register_t __cdecl internal_6385ed0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [public_658b80c]
        push ebx
        push edi
        push eax
        call public_636ec70
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ecx+0xC]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0xC], 1
        je public_6385f17
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_6385f17
        mov edx, 0xFFFFBFFF
        public_6385f0b : nop
        and dword ptr ds : [eax+0x50], edx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_6385f0b
        public_6385f17 : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        push esi
        je public_6385fd9
        mov esi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test esi, esi
        je public_6385fd9
        public_6385f39 : nop
        mov ecx, dword ptr ds : [esi+0x50]
        mov ebx, 0x4000
        test ebx, ecx
        je public_6385f53
        mov esi, dword ptr ds : [eax]
        add eax, 4
        test esi, esi
        jne public_6385f39
        jmp public_6385fde
        public_6385f53 : nop
        test esi, esi
        mov edi, esi
        je public_6385fde
        public_6385f5d : nop
        mov ecx, dword ptr ds : [esi+0x50]
        or ecx, ebx
        mov eax, ecx
        test ah, 0x20
        mov dword ptr ds : [esi+0x50], ecx
        je public_6385f99
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        je public_6385f7b
        push esi
        lea edx, ss:[esp+0x14]
        push edx
        jmp public_6385f91
        public_6385f7b : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6385f99
        push esi
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], 0
        push eax
        public_6385f91 : nop
        call public_636e1b0
        add esp, 8
        public_6385f99 : nop
        mov eax, dword ptr ds : [edi+0x3C]
        xor esi, esi
        test eax, eax
        je public_6385fd1
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_6385fd1
        public_6385faf : nop
        test dword ptr ds : [esi+0x50], ebx
        jne public_6385fc8
        mov ecx, dword ptr ss : [ebp+0xC]
        push esi
        push ecx
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_6385fd1
        or dword ptr ds : [esi+0x50], ebx
        public_6385fc8 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_6385faf
        public_6385fd1 : nop
        test esi, esi
        mov edi, esi
        jne public_6385f5d
        jmp public_6385fde
        public_6385fd9 : nop
        mov ebx, 0x4000
        public_6385fde : nop
        mov eax, dword ptr ds : [public_658b03c]
        test eax, eax
        je public_6386046
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6386046
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_6386046
        mov ebx, dword ptr ds : [public_63991e8]
        public_6386001 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 0x40
        jne public_6386038
        mov edx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        call public_6370570
        mov ecx, dword ptr ds : [public_6399214]
        add esp, 4
        push eax
        add ecx, 0x40
/*FIXUP push offset public_63f7a94 @0x6386023*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7a94
        push ecx
        call ebx
        push 0
        push esi
        push 5
        call public_6378600
        add esp, 0x1C
        public_6386038 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_6386001
        mov ebx, 0x4000
        public_6386046 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edx+0xC]
        test eax, eax
        pop esi
        pop ebp
        je public_638606b
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_638606b
        public_638605f : nop
        or dword ptr ds : [eax+0x50], ebx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_638605f
        public_638606b : nop
        mov eax, dword ptr ss : [esp+8]
        pop edi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6385ed0)
    }
}

#undef public_6385f0b
#undef public_6385f17
#undef public_6385f39
#undef public_6385f53
#undef public_6385f5d
#undef public_6385f7b
#undef public_6385f91
#undef public_6385f99
#undef public_6385faf
#undef public_6385fc8
#undef public_6385fd1
#undef public_6385fd9
#undef public_6385fde
#undef public_6386001
#undef public_6386038
#undef public_6386046
#undef public_638605f
#undef public_638606b
