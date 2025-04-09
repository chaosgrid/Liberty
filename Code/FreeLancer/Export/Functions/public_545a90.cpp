#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_534240);
CLANG_FORWARD_PROC_SYMBOL(public_548eb0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_545afc _public_545afc
#define public_545afe _public_545afe
#define public_545b10 _public_545b10
#define public_545b3a _public_545b3a
#define public_545b3c _public_545b3c
#define public_545b59 _public_545b59
#define public_545b5b _public_545b5b
#define public_545b8f _public_545b8f
#define public_545ba0 _public_545ba0
#define public_545bb2 _public_545bb2
#define public_545bdc _public_545bdc
#define public_545bde _public_545bde
#define public_545bfb _public_545bfb
#define public_545bfd _public_545bfd
#define public_545c31 _public_545c31
#define public_545c42 _public_545c42
#define public_545ca5 _public_545ca5

PROC_DECLARE(0x545a90, internal_545a90, public_545a90);
extern "C" NAKED register_t __cdecl internal_545a90()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push edx
        push esi
        push eax
        mov ecx, ebx
        call public_534240
        test al, al
        mov byte ptr ss : [esp+0x28], al
        je public_545ca5
        mov edx, dword ptr ds : [public_5c6af4]
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edx]
        jne public_545ca5
        test ebx, ebx
        push ebp
        je public_545afc
        lea eax, ds:[ebx+0xC]
        test eax, eax
        je public_545afc
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_545afc
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_545afc
        mov ebp, eax
        jmp public_545afe
        public_545afc : nop
        xor ebp, ebp
        public_545afe : nop
        mov edi, dword ptr ss : [ebp+0x1D4]
        cmp edi, dword ptr ss : [ebp+0x1D8]
        je public_545ba0
        public_545b10 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_545b8f
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_545b8f
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        push eax
        call public_548eb0
        add esp, 4
        test al, al
        je public_545b8f
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_545b3a
        lea ecx, ds:[eax-8]
        jmp public_545b3c
        public_545b3a : nop
        xor ecx, ecx
        public_545b3c : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_545b59
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_545b5b
        public_545b59 : nop
        xor eax, eax
        public_545b5b : nop
        mov ecx, eax
        call dword ptr ds : [public_5c62e8]
        mov esi, eax
        test esi, esi
        je public_545b8f
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 7
        call dword ptr ds : [edx]
        public_545b8f : nop
        mov eax, dword ptr ss : [ebp+0x1D8]
        add edi, 8
        cmp edi, eax
        jne public_545b10
        public_545ba0 : nop
        mov edi, dword ptr ss : [ebp+0x1F8]
        cmp edi, dword ptr ss : [ebp+0x1FC]
        je public_545c42
        public_545bb2 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_545c31
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_545c31
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        push eax
        call public_548eb0
        add esp, 4
        test al, al
        je public_545c31
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_545bdc
        lea ecx, ds:[eax-8]
        jmp public_545bde
        public_545bdc : nop
        xor ecx, ecx
        public_545bde : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_545bfb
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_545bfd
        public_545bfb : nop
        xor eax, eax
        public_545bfd : nop
        mov ecx, eax
        call dword ptr ds : [public_5c62e8]
        mov esi, eax
        test esi, esi
        je public_545c31
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 7
        call dword ptr ds : [edx]
        public_545c31 : nop
        mov eax, dword ptr ss : [ebp+0x1FC]
        add edi, 8
        cmp edi, eax
        jne public_545bb2
        public_545c42 : nop
        call public_54baf0
        mov esi, eax
        test esi, esi
        pop ebp
        je public_545ca5
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_545ca5
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_545ca5
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_545ca5
        call dword ptr ds : [public_5c6348]
        test eax, eax
        je public_545ca5
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov edi, eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        cmp edi, eax
        jne public_545ca5
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [esi+4]
        push eax
        mov eax, dword ptr ds : [public_5c6368]
        movzx eax, word ptr ds : [eax]
        lea ecx, ds:[esi+4]
        push eax
        push 0
        call dword ptr ds : [edx+0x48]
        public_545ca5 : nop
        mov al, byte ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 0x14
        UNREACHABLE_TRAP(0x545a90)
    }
}

#undef public_545afc
#undef public_545afe
#undef public_545b10
#undef public_545b3a
#undef public_545b3c
#undef public_545b59
#undef public_545b5b
#undef public_545b8f
#undef public_545ba0
#undef public_545bb2
#undef public_545bdc
#undef public_545bde
#undef public_545bfb
#undef public_545bfd
#undef public_545c31
#undef public_545c42
#undef public_545ca5
