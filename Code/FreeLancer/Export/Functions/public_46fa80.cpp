#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_46fa80);
CLANG_FORWARD_PROC_SYMBOL(public_4779a0);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_46fa9c _public_46fa9c
#define public_46fab8 _public_46fab8
#define public_46fad8 _public_46fad8
#define public_46fafe _public_46fafe
#define public_46fb54 _public_46fb54
#define public_46fb8e _public_46fb8e
#define public_46fb93 _public_46fb93
#define public_46fbd5 _public_46fbd5
#define public_46fbdd _public_46fbdd
#define public_46fbe8 _public_46fbe8
#define public_46fbed _public_46fbed
#define public_46fc05 _public_46fc05
#define public_46fc55 _public_46fc55

PROC_DECLARE(0x46fa80, internal_46fa80, public_46fa80);
extern "C" NAKED register_t __cdecl internal_46fa80()
{
    __asm
    {
        sub esp, 0x20
        mov eax, dword ptr ds : [public_66dac0]
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x2C], edi
        jne public_46fa9c
        mov dword ptr ss : [esp+0x10], eax
        jmp public_46fab8
        public_46fa9c : nop
        mov ecx, dword ptr ds : [public_66dac4]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        public_46fab8 : nop
        mov ecx, dword ptr ds : [edi+0x350]
        lea ebp, ds:[ecx+ecx*2]
        mov dword ptr ss : [esp+0x18], ecx
        shl ebp, 2
        lea esi, ds:[edi+0x358]
        mov dword ptr ss : [esp+0x1C], 0xD
        mov bl, 3
        public_46fad8 : nop
        cmp ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        jl public_46fafe
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi-4]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+8]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi]
        and byte ptr ds : [eax+0x6C], 0xFC
        jmp public_46fc05
        public_46fafe : nop
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi-4]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+8]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi]
        or byte ptr ds : [eax+0x6C], bl
        mov ecx, dword ptr ds : [public_66dac0]
        mov edx, dword ptr ds : [ecx+ebp+4]
        lea edi, ds:[ecx+ebp]
        push 0xFFFFFFFF
        push edx
/*FIXUP push offset public_66fc60 @0x46fb22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_4779a0
        mov ecx, dword ptr ds : [esi-4]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
/*FIXUP push offset public_66fc60 @0x46fb36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov cl, byte ptr ds : [edi+8]
        test cl, cl
        mov eax, 0x3DA
        je public_46fb54
        mov eax, 0x3D9
        public_46fb54 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, offset public_66daa4
        mov dword ptr ss : [esp+0x1C], eax
        call public_432240
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, dword ptr ds : [public_66daa8]
        je public_46fb8e
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_46fb93
        public_46fb8e : nop
        mov eax, offset public_5d0214
        public_46fb93 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_66da90
        mov dword ptr ss : [esp+0x18], eax
        call public_52c7a0
        mov ecx, dword ptr ds : [public_66da94]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        je public_46fbd5
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_46fbd5
        lea eax, ss:[esp+0x24]
        jmp public_46fbdd
        public_46fbd5 : nop
        mov dword ptr ss : [esp+0x28], ecx
        lea eax, ss:[esp+0x28]
        public_46fbdd : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_46fbe8
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_46fbed
        public_46fbe8 : nop
        mov eax, offset public_5d0214
        public_46fbed : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov edi, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x18]
        public_46fc05 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        add ebp, 0xC
        add esi, 0x10
        dec eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_46fad8
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x348]
        lea esi, ds:[eax-0xD]
        test esi, esi
        push 0
        jg public_46fc55
        mov edx, dword ptr ds : [ecx]
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [edi+0x348]
        mov cl, byte ptr ds : [eax+0x6C]
        pop edi
        pop esi
        and cl, 0xFD
        pop ebp
        mov byte ptr ds : [eax+0x6C], cl
        pop ebx
        add esp, 0x20
        ret 
        public_46fc55 : nop
        mov eax, dword ptr ds : [ecx]
        push 0
        push 2
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [edi+0x348]
        mov bl, byte ptr ds : [eax+0x6C]
        add esi, 2
        or bl, 2
        push esi
        mov byte ptr ds : [eax+0x6C], bl
        mov ecx, dword ptr ds : [edi+0x348]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0x37
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x46fa80)
    }
}

#undef public_46fa9c
#undef public_46fab8
#undef public_46fad8
#undef public_46fafe
#undef public_46fb54
#undef public_46fb8e
#undef public_46fb93
#undef public_46fbd5
#undef public_46fbdd
#undef public_46fbe8
#undef public_46fbed
#undef public_46fc05
#undef public_46fc55
