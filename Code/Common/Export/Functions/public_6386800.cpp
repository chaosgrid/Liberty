#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6371fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6374110);
CLANG_FORWARD_PROC_SYMBOL(public_6374610);
CLANG_FORWARD_PROC_SYMBOL(public_6386800);
CLANG_FORWARD_PROC_SYMBOL(public_638c680);

#define public_638684a _public_638684a
#define public_6386865 _public_6386865
#define public_6386872 _public_6386872
#define public_638688e _public_638688e
#define public_6386893 _public_6386893
#define public_638689c _public_638689c
#define public_63868a4 _public_63868a4
#define public_63868ba _public_63868ba
#define public_63868cf _public_63868cf
#define public_63868d4 _public_63868d4
#define public_63868df _public_63868df
#define public_63868e7 _public_63868e7
#define public_63868f6 _public_63868f6
#define public_6386912 _public_6386912
#define public_638691b _public_638691b
#define public_6386934 _public_6386934
#define public_6386945 _public_6386945
#define public_638695d _public_638695d
#define public_6386961 _public_6386961
#define public_6386968 _public_6386968
#define public_6386979 _public_6386979
#define public_638698e _public_638698e
#define public_6386992 _public_6386992
#define public_638699b _public_638699b
#define public_63869cc _public_63869cc

PROC_DECLARE(0x6386800, internal_6386800, public_6386800);
extern "C" NAKED register_t __cdecl internal_6386800()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [public_658b8c8]
        inc edi
        push 1
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ds : [public_658b8c8], edi
        call public_6371fe0
        add esp, 4
        call public_6374610
        call public_6374110
        mov ecx, dword ptr ds : [public_658b028]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_638684a
        mov ecx, dword ptr ds : [public_658b254]
        mov dword ptr ds : [eax+ecx*4], 0
        public_638684a : nop
        mov ecx, dword ptr ds : [public_658b8e0]
        mov eax, dword ptr ds : [public_658b844]
        inc ecx
        cmp ecx, eax
        mov dword ptr ds : [public_658b8e0], ecx
        jae public_6386865
        mov dword ptr ds : [public_658b8e0], eax
        public_6386865 : nop
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        mov ebx, 0x10000
        je public_63868a4
        public_6386872 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_63868a4
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        jne public_638688e
        push esi
        call public_638c680
        add esp, 4
        test eax, eax
        jne public_6386893
        public_638688e : nop
        test dword ptr ds : [esi+0x50], ebx
        je public_638689c
        public_6386893 : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_6386872
        jmp public_63868a4
        public_638689c : nop
        mov dword ptr ss : [esp+0xC], 1
        public_63868a4 : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        test ebp, ebp
        je public_63868e7
        mov esi, dword ptr ss : [ebp+4]
        lea edi, ss:[ebp+4]
        add edi, 4
        test esi, esi
        je public_63868e7
        public_63868ba : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        jne public_63868cf
        push esi
        call public_638c680
        add esp, 4
        test eax, eax
        jne public_63868d4
        public_63868cf : nop
        test dword ptr ds : [esi+0x50], ebx
        je public_63868df
        public_63868d4 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_63868ba
        jmp public_63868e7
        public_63868df : nop
        mov dword ptr ss : [esp+0x10], 1
        public_63868e7 : nop
        mov eax, dword ptr ds : [public_658b810]
        xor edx, edx
        cmp eax, edx
        je public_6386934
        mov ecx, dword ptr ss : [esp+0x10]
        public_63868f6 : nop
        cmp dword ptr ds : [eax+0x30], edx
        je public_6386934
        cmp dword ptr ds : [eax+0x18], edx
        je public_6386912
        mov esi, dword ptr ds : [eax+0x50]
        shr esi, 0x10
        and esi, 1
        cmp esi, ecx
        jne public_6386912
        mov dword ptr ds : [eax+0x48], edx
        jmp public_638691b
        public_6386912 : nop
        mov esi, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [eax+0x48], esi
        public_638691b : nop
        mov esi, dword ptr ds : [eax+0x50]
        and esi, 0xFFFFDFFF
        or esi, 0x4000
        mov dword ptr ds : [eax+0x50], esi
        mov eax, dword ptr ds : [eax+0x30]
        cmp eax, edx
        jne public_63868f6
        public_6386934 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, edx
        mov ebx, 1
        je public_6386968
        mov edi, dword ptr ss : [esp+0x24]
        public_6386945 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_6386968
        test edi, edi
        jne public_638695d
        push esi
        call public_638c680
        add esp, 4
        test eax, eax
        jne public_6386961
        public_638695d : nop
        mov dword ptr ds : [esi+0x48], ebx
        inc ebx
        public_6386961 : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_6386945
        public_6386968 : nop
        test ebp, ebp
        je public_638699b
        mov esi, dword ptr ss : [ebp+4]
        lea edi, ss:[ebp+4]
        add edi, 4
        test esi, esi
        je public_638699b
        public_6386979 : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        jne public_638698e
        push esi
        call public_638c680
        add esp, 4
        test eax, eax
        jne public_6386992
        public_638698e : nop
        mov dword ptr ds : [esi+0x48], ebx
        inc ebx
        public_6386992 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_6386979
        public_638699b : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [ecx], ebx
        cmp dword ptr ds : [public_658b078], 2
        pop ebp
        jl public_63869cc
        mov edx, dword ptr ds : [public_658b7fc]
        push ebx
        push eax
/*FIXUP push offset public_63f7b7c @0x63869bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7b7c
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_63869cc : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6386800)
    }
}

#undef public_638684a
#undef public_6386865
#undef public_6386872
#undef public_638688e
#undef public_6386893
#undef public_638689c
#undef public_63868a4
#undef public_63868ba
#undef public_63868cf
#undef public_63868d4
#undef public_63868df
#undef public_63868e7
#undef public_63868f6
#undef public_6386912
#undef public_638691b
#undef public_6386934
#undef public_6386945
#undef public_638695d
#undef public_6386961
#undef public_6386968
#undef public_6386979
#undef public_638698e
#undef public_6386992
#undef public_638699b
#undef public_63869cc
