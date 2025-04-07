#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efc7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f35190);
CLANG_FORWARD_PROC_SYMBOL(public_6f5b000);
CLANG_FORWARD_PROC_SYMBOL(public_6f778e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0408);

#define public_6f779c2 _public_6f779c2
#define public_6f77a12 _public_6f77a12
#define public_6f77a3e _public_6f77a3e
#define public_6f77a40 _public_6f77a40
#define public_6f77a4f _public_6f77a4f
#define public_6f77a60 _public_6f77a60
#define public_6f77ab0 _public_6f77ab0
#define public_6f77adc _public_6f77adc
#define public_6f77ade _public_6f77ade
#define public_6f77aed _public_6f77aed

PROC_DECLARE(0x6f778e0, internal_6f778e0, public_6f778e0);
extern "C" NAKED register_t __cdecl internal_6f778e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0408 @0x6f778e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0408
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x6C
        mov al, byte ptr ss : [esp+0x80]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov byte ptr ss : [esp+0x3C], al
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x44], edi
        mov dword ptr ss : [esp+0x48], edi
        mov cl, byte ptr ss : [esp+0x90]
        mov dword ptr ss : [esp+0x84], edi
        mov byte ptr ss : [esp+0x1C], cl
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], edi
        mov dl, byte ptr ss : [esp+0x90]
        mov byte ptr ss : [esp+0x2C], dl
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x84], 2
        call public_6efc7a0
        mov eax, dword ptr ss : [esp+0x90]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x70], ecx
        mov dword ptr ss : [esp+0x74], edx
        lea ecx, ss:[esp+0x90]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        mov dword ptr ss : [esp+0x80], eax
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        push esi
        call public_6f5b000
        mov esi, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x5C]
        mov ebx, dword ptr ss : [esp+0xB0]
        mov ebp, dword ptr ss : [esp+0xAC]
        add esp, 0x18
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], edi
        je public_6f77a4f
        public_6f779c2 : nop
        mov ecx, dword ptr ds : [esi]
        cmp dword ptr ds : [ecx+0xC], edi
        je public_6f77a40
        lea eax, ss:[esp+0x98]
        push eax
        lea edx, ss:[esp+0x98]
        push edx
        push ebp
        call public_6fa7fb0
        push eax
        call public_6f35190
        fld dword ptr ss : [esp+0xA8]
        fcomp dword ptr ds : [public_6fb444c]
        add esp, 0x10
        fnstsw ax
        test ah, 0x41
        jne public_6f77a40
        mov ecx, dword ptr ds : [esi]
        call public_6fa7fd0
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_6f77a12
        fst dword ptr ss : [esp+0x10]
        public_6f77a12 : nop
        fcom dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6f77a3e
        mov eax, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[ebx+4]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_6f96770
        jmp public_6f77a40
        public_6f77a3e : nop
        fstp st(0)
        public_6f77a40 : nop
        mov eax, dword ptr ss : [esp+0x44]
        add esi, 4
        cmp esi, eax
        jne public_6f779c2
        public_6f77a4f : nop
        mov esi, dword ptr ss : [esp+0x20]
        cmp esi, dword ptr ss : [esp+0x24]
        je public_6f77aed
        lea ecx, ds:[ecx]
        public_6f77a60 : nop
        mov ecx, dword ptr ds : [esi]
        cmp dword ptr ds : [ecx+0xC], edi
        je public_6f77ade
        lea edx, ss:[esp+0x98]
        push edx
        lea eax, ss:[esp+0x98]
        push eax
        push ebp
        call public_6fa7fb0
        push eax
        call public_6f35190
        fld dword ptr ss : [esp+0xA8]
        fcomp dword ptr ds : [public_6fb444c]
        add esp, 0x10
        fnstsw ax
        test ah, 0x41
        jne public_6f77ade
        mov ecx, dword ptr ds : [esi]
        call public_6fa7fd0
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_6f77ab0
        fst dword ptr ss : [esp+0x10]
        public_6f77ab0 : nop
        fcom dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6f77adc
        mov ecx, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+0xC]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        lea ecx, ds:[ebx+4]
        push 1
        push eax
        call public_6f96770
        jmp public_6f77ade
        public_6f77adc : nop
        fstp st(0)
        public_6f77ade : nop
        mov eax, dword ptr ss : [esp+0x24]
        add esi, 4
        cmp esi, eax
        jne public_6f77a60
        public_6f77aed : nop
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x40], edi
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x48]
        push eax
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], edi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x88]
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x78
        ret 0x10
        UNREACHABLE_TRAP(0x6f778e0)
    }
}

#undef public_6f779c2
#undef public_6f77a12
#undef public_6f77a3e
#undef public_6f77a40
#undef public_6f77a4f
#undef public_6f77a60
#undef public_6f77ab0
#undef public_6f77adc
#undef public_6f77ade
#undef public_6f77aed
