#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430ab0);
CLANG_FORWARD_PROC_SYMBOL(public_445720);
CLANG_FORWARD_PROC_SYMBOL(public_4570a0);

#define public_457123 _public_457123
#define public_457134 _public_457134
#define public_45715c _public_45715c
#define public_45716d _public_45716d
#define public_4571a0 _public_4571a0
#define public_4571ef _public_4571ef
#define public_457230 _public_457230
#define public_457270 _public_457270
#define public_457298 _public_457298

PROC_DECLARE(0x4570a0, internal_4570a0, public_4570a0);
extern "C" NAKED register_t __cdecl internal_4570a0()
{
    __asm
    {
        sub esp, 0x100
        push ebx
        push ebp
        push esi
        mov esi, ecx
        cmp byte ptr ds : [esi+0x74], 1
        push edi
        jne public_457298
        mov ebp, dword ptr ds : [esi+0x6C]
        test ebp, ebp
        je public_457298
        cmp byte ptr ss : [ebp], 0
        je public_457298
        mov eax, dword ptr ds : [public_611024]
        mov edi, dword ptr ds : [public_5c6d24]
        push eax
        push ebp
        call edi
        mov ebx, dword ptr ss : [esp+0x120]
        add esp, 8
        test eax, eax
        je public_457123
        mov ecx, dword ptr ds : [public_611028]
        mov edx, dword ptr ds : [esi+0x6C]
        push ecx
        push edx
        call edi
        add esp, 8
        test eax, eax
        je public_457123
        mov eax, dword ptr ds : [public_611014]
        mov ecx, dword ptr ds : [esi+0x6C]
        push eax
        push ecx
        call edi
        add esp, 8
        test eax, eax
        je public_457123
        mov edx, dword ptr ds : [public_611018]
        mov eax, dword ptr ds : [esi+0x6C]
        push edx
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_457134
        public_457123 : nop
        mov ecx, dword ptr ds : [esi+0x6C]
        push ecx
        mov ecx, ebx
        call public_445720
        mov ebp, eax
        mov byte ptr ds : [esi+0x78], 0
        public_457134 : nop
        mov edx, dword ptr ds : [public_61101c]
        mov eax, dword ptr ds : [esi+0x6C]
        push edx
        push eax
        call edi
        add esp, 8
        test eax, eax
        je public_45715c
        mov ecx, dword ptr ds : [public_611020]
        mov edx, dword ptr ds : [esi+0x6C]
        push ecx
        push edx
        call edi
        add esp, 8
        test eax, eax
        jne public_45716d
        public_45715c : nop
        mov eax, dword ptr ds : [esi+0x6C]
        push eax
        mov ecx, ebx
        call public_445720
        mov ebp, eax
        mov byte ptr ds : [esi+0x78], 1
        public_45716d : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5ce370
        repne scasb
        not ecx
        dec ecx
        push ecx
        mov ecx, dword ptr ds : [esi+0x6C]
/*FIXUP push offset public_5ce370 @0x457180*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce370
        push ecx
        call dword ptr ds : [public_5c70e8]
        add esp, 0xC
        test eax, eax
        jne public_4571ef
        mov eax, dword ptr ds : [esi+0x6C]
        lea edx, ss:[esp+0x10]
        sub edx, eax
        lea esp, ss:[esp]
        public_4571a0 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_4571a0
        lea edx, ss:[esp+0x10]
        push 0x5F
        push edx
        call dword ptr ds : [public_5c70e4]
        mov edi, eax
        lea eax, ds:[edi+1]
        push eax
        call dword ptr ds : [public_5c70c4]
        mov ebp, eax
        call dword ptr ds : [public_5c71dc]
        imul eax, ebp
        cdq 
        and edx, 0x7FFF
        add eax, edx
        push 0xA
        sar eax, 0xF
        push edi
        push eax
        call dword ptr ds : [public_5c70e0]
        add esp, 0x18
        lea ebp, ss:[esp+0x12]
        mov byte ptr ds : [esi+0x78], 0
        public_4571ef : nop
        push ebp
        call dword ptr ds : [public_5c6020]
        mov ecx, dword ptr ss : [esp+0x118]
        push ecx
        mov ebx, eax
        call public_430ab0
        mov edi, eax
        add esp, 8
        test edi, edi
        je public_457270
        mov edx, dword ptr ds : [edi]
        push ebx
        mov ecx, edi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_457230
        pop edi
        mov dword ptr ds : [esi+0x7C], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x100
        ret 8
        lea ebx, ds:[ebx]
        public_457230 : nop
        mov eax, dword ptr ss : [esp+0x114]
        mov edx, dword ptr ds : [edi]
        push ebp
        push eax
        mov ecx, edi
        mov esi, 0x100001
        call dword ptr ds : [edx+0x10]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0xE3
/*FIXUP push offset public_5ce340 @0x457250*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce340
/*FIXUP push offset public_5ce2f8 @0x457255*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce2f8
        push esi
        call dword ptr ds : [eax]
        add esp, 0x1C
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x100
        ret 8
        lea ecx, ds:[ecx]
        public_457270 : nop
        mov ecx, dword ptr ss : [esp+0x114]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0xE8
/*FIXUP push offset public_5ce340 @0x457283*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce340
        mov eax, 0x100001
/*FIXUP push offset public_5ce2c0 @0x45728d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce2c0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_457298 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x100
        ret 8
        UNREACHABLE_TRAP(0x4570a0)
    }
}

#undef public_457123
#undef public_457134
#undef public_45715c
#undef public_45716d
#undef public_4571a0
#undef public_4571ef
#undef public_457230
#undef public_457270
#undef public_457298
