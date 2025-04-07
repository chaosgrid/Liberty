#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac10d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac12f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac1ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac1e50);
CLANG_FORWARD_PROC_SYMBOL(public_6acf3db);
CLANG_FORWARD_PROC_SYMBOL(public_6acf8b7);
CLANG_FORWARD_PROC_SYMBOL(public_6acf910);
CLANG_FORWARD_JUMP_SYMBOL(public_6ad9cbe);

#define public_6ac17dc _public_6ac17dc
#define public_6ac184f _public_6ac184f
#define public_6ac1869 _public_6ac1869
#define public_6ac1879 _public_6ac1879
#define public_6ac189c _public_6ac189c
#define public_6ac189d _public_6ac189d
#define public_6ac18a2 _public_6ac18a2
#define public_6ac18b5 _public_6ac18b5
#define public_6ac18e3 _public_6ac18e3
#define public_6ac18e9 _public_6ac18e9
#define public_6ac1960 _public_6ac1960
#define public_6ac1992 _public_6ac1992
#define public_6ac1997 _public_6ac1997

PROC_DECLARE(0x6ac1790, internal_6ac1790, public_6ac1790);
extern "C" NAKED register_t __cdecl internal_6ac1790()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6ad9cbe @0x6ac1798*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6ad9cbe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_6ae0930]
        mov dword ptr fs : [0], esp
        sub esp, 0x61C
        test eax, eax
        push ebp
        push esi
        push edi
        jne public_6ac17dc
        mov eax, dword ptr ss : [esp+0x640]
        mov ecx, dword ptr ss : [esp+0x63C]
        mov edx, dword ptr ss : [esp+0x638]
        push eax
        push ecx
        push edx
        call public_6ac1e50
        add esp, 0xC
        jmp public_6ac1997
        public_6ac17dc : nop
        mov ebp, dword ptr ss : [esp+0x640]
        push ebx
        cmp byte ptr ss : [ebp+1], 0x3A
        je public_6ac18a2
        lea eax, ss:[esp+0x24]
        push eax
        push 0x104
        call dword ptr ds : [public_6ada01c]
        lea edi, ss:[esp+0x24]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edx, ss:[esp+0x24]
        repne scasb
        mov cx, word ptr ds : [public_6ada288]
        mov word ptr ds : [edi-1], cx
        mov edi, ebp
        or ecx, 0xFFFFFFFF
        lea ebp, ss:[esp+0x24]
        repne scasb
        not ecx
        sub edi, ecx
        mov esi, edi
        mov ebx, ecx
        mov edi, edx
        or ecx, 0xFFFFFFFF
        repne scasb
        mov ecx, ebx
        dec edi
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        lea eax, ss:[esp+0x24]
        and ecx, 3
        rep movsb
        mov cl, byte ptr ss : [esp+0x24]
        test cl, cl
        je public_6ac18a2
        mov bl, 0x2E
        public_6ac184f : nop
        cmp byte ptr ds : [eax], 0x5C
        jne public_6ac189c
        cmp byte ptr ds : [eax+1], bl
        jne public_6ac189c
        cmp byte ptr ds : [eax+2], bl
        jne public_6ac189c
        lea esi, ds:[eax-1]
        lea ecx, ss:[esp+0x24]
        cmp esi, ecx
        je public_6ac189c
        public_6ac1869 : nop
        cmp byte ptr ds : [esi], 0x5C
        je public_6ac1879
        dec esi
        lea edx, ss:[esp+0x24]
        cmp esi, edx
        jne public_6ac1869
        jmp public_6ac189c
        public_6ac1879 : nop
        lea edx, ds:[eax+3]
        or ecx, 0xFFFFFFFF
        mov edi, edx
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        push edx
        push esi
        call public_6acf910
        lea ecx, ss:[esp+0x30]
        add esp, 0xC
        cmp esi, ecx
        mov eax, esi
        jne public_6ac189d
        public_6ac189c : nop
        inc eax
        public_6ac189d : nop
        cmp byte ptr ds : [eax], 0
        jne public_6ac184f
        public_6ac18a2 : nop
        mov eax, dword ptr ds : [public_6ae0930]
        xor esi, esi
        cmp eax, esi
        pop ebx
        jne public_6ac18b5
        call public_6ac1ce0
        jmp public_6ac18e9
        public_6ac18b5 : nop
        mov ecx, dword ptr ds : [public_6ae092c]
        cmp ecx, esi
        je public_6ac18e9
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [public_6ae092c]
        cmp ecx, esi
        je public_6ac18e9
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_6ae092c]
        cmp ecx, esi
        je public_6ac18e3
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6ac18e3 : nop
        mov dword ptr ds : [public_6ae092c], esi
        public_6ac18e9 : nop
        mov edi, dword ptr ss : [esp+0x638]
        lea eax, ss:[esp+0xC]
        push eax
        push edi
        call dword ptr ds : [public_6ada17c]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x238]
/*FIXUP push offset public_6ada268 @0x6ac1917*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada268
        push edx
        call public_6acf8b7
        add esp, 0x18
        lea eax, ss:[esp+0x228]
        push eax
        call dword ptr ds : [public_6ada018]
        mov eax, dword ptr ds : [public_6ae0930]
        dec eax
        je public_6ac1992
        dec eax
        jne public_6ac1992
        push 0x20
        call public_6acf3db
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x630], esi
        je public_6ac1960
        mov ecx, eax
        call public_6ac10d0
        mov esi, eax
        public_6ac1960 : nop
        lea ecx, ss:[esp+0xC]
        push ebp
        push ecx
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x63C], 0xFFFFFFFF
        call public_6ac12f0
        mov eax, dword ptr ss : [esp+0x63C]
        mov dword ptr ds : [public_6ae092c], esi
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        xor eax, eax
        jmp public_6ac1997
        public_6ac1992 : nop
        mov eax, 1
        public_6ac1997 : nop
        mov ecx, dword ptr ss : [esp+0x628]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x628
        ret 
        UNREACHABLE_TRAP(0x6ac1790)
    }
}

#undef public_6ac17dc
#undef public_6ac184f
#undef public_6ac1869
#undef public_6ac1879
#undef public_6ac189c
#undef public_6ac189d
#undef public_6ac18a2
#undef public_6ac18b5
#undef public_6ac18e3
#undef public_6ac18e9
#undef public_6ac1960
#undef public_6ac1992
#undef public_6ac1997
