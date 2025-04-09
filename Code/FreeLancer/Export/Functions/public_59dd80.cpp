#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dd80);

#define public_59dda1 _public_59dda1
#define public_59ddc0 _public_59ddc0
#define public_59dde0 _public_59dde0
#define public_59dde8 _public_59dde8
#define public_59ddfa _public_59ddfa
#define public_59de15 _public_59de15
#define public_59de23 _public_59de23
#define public_59de27 _public_59de27
#define public_59de3c _public_59de3c

PROC_DECLARE(0x59dd80, internal_59dd80, public_59dd80);
extern "C" NAKED register_t __cdecl internal_59dd80()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [public_67dbe8]
        push ebx
        push ebp
        xor ebx, ebx
        or ebp, 0xFFFFFFFF
        test eax, eax
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ss : [esp+0xC], eax
        je public_59de3c
        push esi
        push edi
        public_59dda1 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax+8]
        test esi, esi
        je public_59de27
        mov al, byte ptr ds : [esi+0x6C]
        test al, 1
        je public_59de27
        test al, 2
        je public_59de27
        test al, 8
        je public_59de27
        mov eax, esi
        lea ecx, ds:[ecx]
        public_59ddc0 : nop
        test byte ptr ds : [eax+0x6C], 2
        je public_59de27
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_59ddc0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x6C]
        mov edi, eax
        test edi, edi
        jne public_59dde8
        mov eax, esi
        lea esp, ss:[esp]
        public_59dde0 : nop
        mov eax, dword ptr ds : [eax+4]
        inc edi
        test eax, eax
        jne public_59dde0
        public_59dde8 : nop
        cmp edi, ebp
        jle public_59ddfa
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        jmp public_59de15
        public_59ddfa : nop
        jne public_59de27
        fld dword ptr ds : [esi+0x68]
        fcomp dword ptr ds : [ebx+0x68]
        fnstsw ax
        test ah, 0x41
        jne public_59de27
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        public_59de15 : nop
        test al, al
        je public_59de23
        mov ebx, esi
        mov dword ptr ss : [esp+0x10], ebx
        mov ebp, edi
        jmp public_59de27
        public_59de23 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_59de27 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_59dda1
        pop edi
        pop esi
        public_59de3c : nop
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x59dd80)
    }
}

#undef public_59dda1
#undef public_59ddc0
#undef public_59dde0
#undef public_59dde8
#undef public_59ddfa
#undef public_59de15
#undef public_59de23
#undef public_59de27
#undef public_59de3c
