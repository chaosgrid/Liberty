#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b0370);
CLANG_FORWARD_PROC_SYMBOL(public_4b1450);
CLANG_FORWARD_PROC_SYMBOL(public_4b1d20);
CLANG_FORWARD_PROC_SYMBOL(public_5b36b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4b0380 _public_4b0380
#define public_4b03d2 _public_4b03d2
#define public_4b03da _public_4b03da
#define public_4b03e0 _public_4b03e0
#define public_4b03e4 _public_4b03e4
#define public_4b0437 _public_4b0437
#define public_4b0441 _public_4b0441
#define public_4b0447 _public_4b0447
#define public_4b0450 _public_4b0450
#define public_4b04a2 _public_4b04a2
#define public_4b04aa _public_4b04aa
#define public_4b04b0 _public_4b04b0
#define public_4b04d4 _public_4b04d4
#define public_4b0524 _public_4b0524

PROC_DECLARE(0x4b0370, internal_4b0370, public_4b0370);
extern "C" NAKED register_t __cdecl internal_4b0370()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        xor ebx, ebx
        lea esp, ss:[esp]
        public_4b0380 : nop
        mov eax, dword ptr ds : [esi+0x508]
        test eax, eax
        je public_4b03e0
        mov ecx, dword ptr ds : [esi+0x50C]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edi, edx
        jae public_4b03e0
        mov ecx, dword ptr ds : [esi+0x508]
        lea eax, ds:[ecx+ebx]
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, 0xFFFFFFFF
        je public_4b03da
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push 0xFFFFFFFF
        push ecx
        mov ecx, esi
        je public_4b03d2
        mov edx, dword ptr ds : [eax]
        push edx
        call public_4b1450
        inc edi
        add ebx, 0x18
        jmp public_4b0380
        public_4b03d2 : nop
        mov eax, dword ptr ds : [eax]
        push eax
        call public_4b1d20
        public_4b03da : nop
        inc edi
        add ebx, 0x18
        jmp public_4b0380
        public_4b03e0 : nop
        xor edi, edi
        xor ebx, ebx
        public_4b03e4 : nop
        mov eax, dword ptr ds : [esi+0x528]
        test eax, eax
        je public_4b0447
        mov ecx, dword ptr ds : [esi+0x52C]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        jae public_4b0447
        mov edx, dword ptr ds : [esi+0x528]
        mov ecx, dword ptr ds : [edx+ebx+8]
        cmp ecx, 0xFFFFFFFF
        lea eax, ds:[edx+ebx]
        je public_4b0441
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push 0xFFFFFFFF
        push ecx
        je public_4b0437
        mov eax, dword ptr ds : [eax]
        push eax
        mov ecx, esi
        call public_4b1450
        inc edi
        add ebx, 0x18
        jmp public_4b03e4
        public_4b0437 : nop
        mov ecx, dword ptr ds : [eax]
        push ecx
        mov ecx, esi
        call public_4b1d20
        public_4b0441 : nop
        inc edi
        add ebx, 0x18
        jmp public_4b03e4
        public_4b0447 : nop
        xor edi, edi
        xor ebx, ebx
        nop 
        lea esp, ss:[esp]
        public_4b0450 : nop
        mov eax, dword ptr ds : [esi+0x548]
        test eax, eax
        je public_4b04b0
        mov ecx, dword ptr ds : [esi+0x54C]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edi, edx
        jae public_4b04b0
        mov ecx, dword ptr ds : [esi+0x548]
        lea eax, ds:[ecx+ebx]
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, 0xFFFFFFFF
        je public_4b04aa
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push 0xFFFFFFFF
        push ecx
        mov ecx, esi
        je public_4b04a2
        mov edx, dword ptr ds : [eax]
        push edx
        call public_4b1450
        inc edi
        add ebx, 0x18
        jmp public_4b0450
        public_4b04a2 : nop
        mov eax, dword ptr ds : [eax]
        push eax
        call public_4b1d20
        public_4b04aa : nop
        inc edi
        add ebx, 0x18
        jmp public_4b0450
        public_4b04b0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, 0xFFFFFFFF
        jne public_4b04d4
/*FIXUP push offset public_5d4a14 @0x4b04b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4a14
        call public_5b36b0
        fld dword ptr ds : [eax+0x14]
        fmul dword ptr ds : [public_5ca230]
        add esp, 4
        call public_5b7ec0
        public_4b04d4 : nop
        push 0xFFFFFFFF
        push eax
        push 0x767
        mov ecx, esi
        call public_4b1450
/*FIXUP push offset public_5d49ec @0x4b04e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d49ec
        call public_5b36b0
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        add esp, 4
        push 0
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], 0
        call dword ptr ds : [edx]
        fld dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_4b0524
        fld dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi]
        fst dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [esi+0x14]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        public_4b0524 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4b0370)
    }
}

#undef public_4b0380
#undef public_4b03d2
#undef public_4b03da
#undef public_4b03e0
#undef public_4b03e4
#undef public_4b0437
#undef public_4b0441
#undef public_4b0447
#undef public_4b0450
#undef public_4b04a2
#undef public_4b04aa
#undef public_4b04b0
#undef public_4b04d4
#undef public_4b0524
