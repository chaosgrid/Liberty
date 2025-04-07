#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf2910);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d608f9);

#define public_6cf2947 _public_6cf2947
#define public_6cf2949 _public_6cf2949
#define public_6cf2975 _public_6cf2975
#define public_6cf2977 _public_6cf2977
#define public_6cf29ba _public_6cf29ba
#define public_6cf29bc _public_6cf29bc
#define public_6cf29e3 _public_6cf29e3
#define public_6cf29e5 _public_6cf29e5
#define public_6cf2a16 _public_6cf2a16
#define public_6cf2a90 _public_6cf2a90
#define public_6cf2abb _public_6cf2abb
#define public_6cf2adc _public_6cf2adc
#define public_6cf2ade _public_6cf2ade
#define public_6cf2aef _public_6cf2aef
#define public_6cf2af1 _public_6cf2af1

PROC_DECLARE(0x6cf2910, internal_6cf2910, public_6cf2910);
extern "C" NAKED register_t __cdecl internal_6cf2910()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d608f9 @0x6cf2918*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d608f9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        je public_6cf2947
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_6cf2949
        public_6cf2947 : nop
        xor eax, eax
        public_6cf2949 : nop
        mov ecx, dword ptr ds : [eax+0xEC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 0xA
        jne public_6cf2af1
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_6cf2975
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_6cf2977
        public_6cf2975 : nop
        xor eax, eax
        public_6cf2977 : nop
        mov ecx, dword ptr ds : [eax+0xEC]
        call dword ptr ds : [public_6d64428]
        fmul dword ptr ss : [esp+0x40]
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cf2aef
        fadd dword ptr ds : [esi+0x68]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        fst dword ptr ds : [esi+0x68]
        je public_6cf29ba
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x803
        cmp edx, 0x803
        jne public_6cf29ba
        mov eax, ecx
        jmp public_6cf29bc
        public_6cf29ba : nop
        xor eax, eax
        public_6cf29bc : nop
        mov eax, dword ptr ds : [eax+0xEC]
        fcomp dword ptr ds : [eax+0x1C]
        fnstsw ax
        test ah, 0x41
        jne public_6cf2af1
        cmp ecx, ebx
        je public_6cf29e3
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x803
        cmp eax, 0x803
        je public_6cf29e5
        public_6cf29e3 : nop
        xor ecx, ecx
        public_6cf29e5 : nop
        cmp dword ptr ds : [ecx+0xF0], 1
        jne public_6cf2a16
        mov edi, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edi+0x20]
        push eax
        push 1
        mov ecx, esi
        call dword ptr ds : [edi+0x158]
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 4
        public_6cf2a16 : nop
        mov cl, byte ptr ss : [esp+0x40]
        push 0x14
        mov byte ptr ss : [esp+0x18], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x20], bl
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov edx, dword ptr ds : [public_6d642c4]
        xor eax, eax
        mov dword ptr ss : [esp+0x24], 0x14
        mov ax, word ptr ds : [edx]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x40], ebx
        push eax
        call dword ptr ds : [public_6d641ec]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x188]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        mov edi, eax
        mov dword ptr ss : [esp+0x40], ecx
        je public_6cf2abb
        lea esp, ss:[esp]
        public_6cf2a90 : nop
        push ebx
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x48]
        call public_6d1b490
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6d641e8]
        cmp dword ptr ss : [esp+0x40], edi
        jne public_6cf2a90
        mov eax, dword ptr ss : [esp+0x18]
        public_6cf2abb : nop
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp eax, ebx
        je public_6cf2adc
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_6cf2ade
        public_6cf2adc : nop
        xor eax, eax
        public_6cf2ade : nop
        mov edx, dword ptr ds : [eax+0xEC]
        fld dword ptr ds : [esi+0x68]
        fsub dword ptr ds : [edx+0x1C]
        fstp dword ptr ds : [esi+0x68]
        jmp public_6cf2af1
        public_6cf2aef : nop
        fstp st(0)
        public_6cf2af1 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x6cf2910)
    }
}

#undef public_6cf2947
#undef public_6cf2949
#undef public_6cf2975
#undef public_6cf2977
#undef public_6cf29ba
#undef public_6cf29bc
#undef public_6cf29e3
#undef public_6cf29e5
#undef public_6cf2a16
#undef public_6cf2a90
#undef public_6cf2abb
#undef public_6cf2adc
#undef public_6cf2ade
#undef public_6cf2aef
#undef public_6cf2af1
