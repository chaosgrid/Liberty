#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d01150);
CLANG_FORWARD_PROC_SYMBOL(public_6d012e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60f29);

#define public_6d011b6 _public_6d011b6
#define public_6d011b8 _public_6d011b8
#define public_6d01280 _public_6d01280
#define public_6d012ad _public_6d012ad
#define public_6d012ca _public_6d012ca
#define public_6d012cc _public_6d012cc

PROC_DECLARE(0x6d01150, internal_6d01150, public_6d01150);
extern "C" NAKED register_t __cdecl internal_6d01150()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60f29 @0x6d01158*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60f29
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ds : [esi+0x10]
        call dword ptr ds : [eax+0x19C]
        test al, al
        jne public_6d012cc
        mov ecx, dword ptr ds : [edi+0xA4]
        xor ebx, ebx
        cmp ecx, ebx
        je public_6d011b8
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x5C]
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6d011b6
        fmul dword ptr ds : [edi+0xA8]
        fmul dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [esi+0xBC]
        fstp dword ptr ds : [esi+0xBC]
        jmp public_6d011b8
        public_6d011b6 : nop
        fstp st(0)
        public_6d011b8 : nop
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [esi+0xC0]
        fst dword ptr ds : [esi+0xC0]
        fld dword ptr ds : [esi+0xBC]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jnp public_6d012ca
        fcomp dword ptr ds : [public_6d67088]
        fnstsw ax
        test ah, 0x41
        jne public_6d012cc
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0xD4]
        fdivr dword ptr ds : [esi+0xBC]
        fst dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_6d6708c]
        fnstsw ax
        test ah, 0x41
        jne public_6d012cc
        mov cl, byte ptr ss : [esp+0x38]
        push 0x14
        mov byte ptr ss : [esp+0x10], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ss : [esp+0x18], bl
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov eax, dword ptr ss : [esp+0x38]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x24], 8
        call public_6d012e0
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x188]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0xBC], ebx
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_6d012ad
        mov edi, edi
        public_6d01280 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6d01280
        mov eax, dword ptr ss : [esp+0x10]
        public_6d012ad : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        public_6d012ca : nop
        fstp st(0)
        public_6d012cc : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x6d01150)
    }
}

#undef public_6d011b6
#undef public_6d011b8
#undef public_6d01280
#undef public_6d012ad
#undef public_6d012ca
#undef public_6d012cc
