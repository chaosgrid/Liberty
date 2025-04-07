#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cec4d0);

#define public_6d01af0 _public_6d01af0
#define public_6d01b14 _public_6d01b14
#define public_6d01b16 _public_6d01b16
#define public_6d01b33 _public_6d01b33
#define public_6d01b35 _public_6d01b35
#define public_6d01b6a _public_6d01b6a
#define public_6d01b7f _public_6d01b7f
#define public_6d01b91 _public_6d01b91
#define public_6d01bb5 _public_6d01bb5
#define public_6d01bb7 _public_6d01bb7
#define public_6d01bd4 _public_6d01bd4
#define public_6d01bd6 _public_6d01bd6
#define public_6d01c0b _public_6d01c0b
#define public_6d01c20 _public_6d01c20

PROC_DECLARE(0x6d01a90, internal_6d01a90, public_6d01a90);
extern "C" NAKED register_t __cdecl internal_6d01a90()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        push edx
        push esi
        push eax
        mov ecx, ebp
        call public_6cec4d0
        test al, al
        mov byte ptr ss : [esp+0x2C], al
        je public_6d01c20
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [public_6d64230]
        cmp ecx, dword ptr ds : [edx]
        jne public_6d01c20
        mov ebx, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ds : [ebx+0x1D4]
        cmp edi, dword ptr ds : [ebx+0x1D8]
        je public_6d01b7f
        lea ebx, ds:[ebx]
        public_6d01af0 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6d01b6a
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_6d01b6a
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        jne public_6d01b6a
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6d01b14
        lea ecx, ds:[eax-8]
        jmp public_6d01b16
        public_6d01b14 : nop
        xor ecx, ecx
        public_6d01b16 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_6d01b33
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_6d01b35
        public_6d01b33 : nop
        xor eax, eax
        public_6d01b35 : nop
        mov ecx, eax
        call dword ptr ds : [public_6d6422c]
        mov esi, eax
        test esi, esi
        je public_6d01b6a
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
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
        public_6d01b6a : nop
        mov eax, dword ptr ds : [ebx+0x1D8]
        add edi, 8
        cmp edi, eax
        jne public_6d01af0
        mov al, byte ptr ss : [esp+0x2C]
        public_6d01b7f : nop
        mov edi, dword ptr ds : [ebx+0x1F8]
        cmp edi, dword ptr ds : [ebx+0x1FC]
        je public_6d01c20
        public_6d01b91 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6d01c0b
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_6d01c0b
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_6d01c0b
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6d01bb5
        lea ecx, ds:[eax-8]
        jmp public_6d01bb7
        public_6d01bb5 : nop
        xor ecx, ecx
        public_6d01bb7 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_6d01bd4
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_6d01bd6
        public_6d01bd4 : nop
        xor eax, eax
        public_6d01bd6 : nop
        mov ecx, eax
        call dword ptr ds : [public_6d6422c]
        mov esi, eax
        test esi, esi
        je public_6d01c0b
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
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
        public_6d01c0b : nop
        mov eax, dword ptr ds : [ebx+0x1FC]
        add edi, 8
        cmp edi, eax
        jne public_6d01b91
        mov al, byte ptr ss : [esp+0x2C]
        public_6d01c20 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0x14
        UNREACHABLE_TRAP(0x6d01a90)
    }
}

#undef public_6d01af0
#undef public_6d01b14
#undef public_6d01b16
#undef public_6d01b33
#undef public_6d01b35
#undef public_6d01b6a
#undef public_6d01b7f
#undef public_6d01b91
#undef public_6d01bb5
#undef public_6d01bb7
#undef public_6d01bd4
#undef public_6d01bd6
#undef public_6d01c0b
#undef public_6d01c20
