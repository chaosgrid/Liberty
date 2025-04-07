#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_440ac0);
CLANG_FORWARD_PROC_SYMBOL(public_441700);
CLANG_FORWARD_PROC_SYMBOL(public_441c70);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_441cad _public_441cad
#define public_441cc9 _public_441cc9
#define public_441ce8 _public_441ce8
#define public_441d10 _public_441d10
#define public_441d1a _public_441d1a
#define public_441d24 _public_441d24
#define public_441d5b _public_441d5b
#define public_441d74 _public_441d74
#define public_441d88 _public_441d88
#define public_441db0 _public_441db0
#define public_441ddc _public_441ddc
#define public_441df0 _public_441df0
#define public_441e08 _public_441e08
#define public_441e33 _public_441e33
#define public_441e5f _public_441e5f
#define public_441e85 _public_441e85

PROC_DECLARE(0x441c70, internal_441c70, public_441c70);
extern "C" NAKED register_t __cdecl internal_441c70()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x3E4]
        test al, al
        push esi
        push edi
        jne public_441d1a
/*FIXUP push offset public_5cb7c4 @0x441c85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7c4
        call public_59da10
        add esp, 4
        test eax, eax
        je public_441cad
        test byte ptr ds : [eax+0x6C], 2
        je public_441cad
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_441cad
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_441cad : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, 4
        jne public_441d74
        mov eax, dword ptr ds : [ebx+0x370]
        test eax, eax
        jne public_441cc9
        mov eax, dword ptr ds : [public_5c7078]
/*FIXUP public_441cc9 : nop
        push offset public_5cb7a0 @0x441cc9*/
  FIXUP public_441cc9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7a0
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_441d1a
        mov eax, dword ptr ds : [ebx+0x380]
        mov edx, dword ptr ds : [eax]
        cmp edx, eax
        je public_441d1a
        public_441ce8 : nop
        mov cl, byte ptr ds : [edx+9]
        test cl, cl
        lea eax, ds:[edx+8]
        je public_441d10
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_441d10
        mov edi, dword ptr ds : [ecx+4]
        test edi, edi
        je public_441d10
        mov esi, offset public_5cb7a0
        mov ecx, 0xA
        xor ebp, ebp
        repe cmpsb
        je public_441d24
        public_441d10 : nop
        mov edx, dword ptr ds : [edx]
        cmp edx, dword ptr ds : [ebx+0x380]
        jne public_441ce8
        public_441d1a : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 8
        public_441d24 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [ebx+0x3E4], 1
        mov dword ptr ds : [ebx+0x3E0], ecx
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_441e85
        mov edx, dword ptr ds : [ecx+0x18]
        test edx, edx
        je public_441e85
        mov ecx, dword ptr ds : [ebx+0x3B8]
        test ecx, ecx
        jne public_441d5b
        mov dword ptr ds : [ebx+0x3B8], eax
        public_441d5b : nop
        mov edx, dword ptr ds : [ebx+0x3B8]
        push eax
        push edx
        mov ecx, ebx
        call public_441700
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_441d74 : nop
        cmp eax, 2
        jne public_441df0
        mov eax, dword ptr ds : [ebx+0x370]
        test eax, eax
        jne public_441d88
        mov eax, dword ptr ds : [public_5c7078]
/*FIXUP public_441d88 : nop
        push offset public_5cb7bc @0x441d88*/
  FIXUP public_441d88 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7bc
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_441d1a
        mov eax, dword ptr ds : [ebx+0x380]
        mov edx, dword ptr ds : [eax]
        cmp edx, eax
        je public_441d1a
        nop 
        public_441db0 : nop
        mov cl, byte ptr ds : [edx+9]
        test cl, cl
        lea eax, ds:[edx+8]
        je public_441ddc
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_441ddc
        mov edi, dword ptr ds : [ecx+4]
        test edi, edi
        je public_441ddc
        mov esi, offset public_5cb7bc
        mov ecx, 7
        xor ebp, ebp
        repe cmpsb
        je public_441d24
        public_441ddc : nop
        mov edx, dword ptr ds : [edx]
        cmp edx, dword ptr ds : [ebx+0x380]
        jne public_441db0
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 8
        public_441df0 : nop
        cmp eax, 3
        jne public_441d1a
        mov eax, dword ptr ds : [ebx+0x370]
        test eax, eax
        jne public_441e08
        mov eax, dword ptr ds : [public_5c7078]
/*FIXUP public_441e08 : nop
        push offset public_5cb784 @0x441e08*/
  FIXUP public_441e08 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb784
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_441d1a
        mov ecx, dword ptr ds : [ebx+0x380]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        je public_441d1a
        public_441e33 : nop
        mov cl, byte ptr ds : [eax+9]
        add eax, 8
        test cl, cl
        je public_441e5f
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_441e5f
        mov edi, dword ptr ds : [ecx+4]
        test edi, edi
        je public_441e5f
        mov esi, offset public_5cb784
        mov ecx, 0xB
        xor edx, edx
        repe cmpsb
        je public_441d24
        public_441e5f : nop
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_53ab20
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [ebx+0x380]
        jne public_441e33
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 8
        public_441e85 : nop
        push eax
        mov ecx, ebx
        call public_440ac0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x441c70)
    }
}

#undef public_441cad
#undef public_441cc9
#undef public_441ce8
#undef public_441d10
#undef public_441d1a
#undef public_441d24
#undef public_441d5b
#undef public_441d74
#undef public_441d88
#undef public_441db0
#undef public_441ddc
#undef public_441df0
#undef public_441e08
#undef public_441e33
#undef public_441e5f
#undef public_441e85
