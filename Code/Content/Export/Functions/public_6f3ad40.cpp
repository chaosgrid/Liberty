#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ad40);

#define public_6f3ad70 _public_6f3ad70
#define public_6f3ad9d _public_6f3ad9d
#define public_6f3adc0 _public_6f3adc0
#define public_6f3adfe _public_6f3adfe
#define public_6f3ae23 _public_6f3ae23
#define public_6f3ae4d _public_6f3ae4d
#define public_6f3ae71 _public_6f3ae71
#define public_6f3ae95 _public_6f3ae95
#define public_6f3aeb2 _public_6f3aeb2
#define public_6f3aef0 _public_6f3aef0
#define public_6f3af16 _public_6f3af16
#define public_6f3af3c _public_6f3af3c
#define public_6f3af66 _public_6f3af66
#define public_6f3af8a _public_6f3af8a
#define public_6f3afab _public_6f3afab
#define public_6f3afcc _public_6f3afcc
#define public_6f3aff4 _public_6f3aff4
#define public_6f3b004 _public_6f3b004
#define public_6f3b00e _public_6f3b00e
#define public_6f3b021 _public_6f3b021

PROC_DECLARE(0x6f3ad40, internal_6f3ad40, public_6f3ad40);
extern "C" NAKED register_t __cdecl internal_6f3ad40()
{
    __asm
    {
        sub esp, 0x104
        push esi
        mov esi, dword ptr ss : [esp+0x10C]
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f3b021
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        push ebp
        mov ebp, dword ptr ds : [public_6fb3294]
        push edi
        lea ecx, ds:[ecx]
/*FIXUP public_6f3ad70 : nop
        push offset public_6fb445c @0x6f3ad70*/
  FIXUP public_6f3ad70 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3ad9d
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x124]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        jmp public_6f3b00e
/*FIXUP public_6f3ad9d : nop
        push offset public_6fb9e9c @0x6f3ad9d*/
  FIXUP public_6f3ad9d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9e9c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3ae4d
        push 0
        call dword ptr ds : [public_6fb3048]
        lea edx, ss:[esp+0x14]
        lea ebx, ds:[ebx]
        public_6f3adc0 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_6f3adc0
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6fb9e90 @0x6f3addc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9e90
        push edx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3adfe
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x11C]
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f3b00e
        public_6f3adfe : nop
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6fb9e84 @0x6f3ae02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9e84
        push edx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3ae23
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x11C]
        mov dword ptr ds : [ecx], eax
        jmp public_6f3b00e
        public_6f3ae23 : nop
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6fb9e78 @0x6f3ae27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9e78
        push edx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3b00e
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x11C]
        mov dword ptr ds : [ecx+8], eax
        jmp public_6f3b00e
/*FIXUP public_6f3ae4d : nop
        push offset public_6fb9e5c @0x6f3ae4d*/
  FIXUP public_6f3ae4d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9e5c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3ae71
        push 0
        call dword ptr ds : [public_6fb3044]
        mov edx, dword ptr ss : [esp+0x11C]
        fstp dword ptr ds : [edx+0xC]
        jmp public_6f3b00e
/*FIXUP public_6f3ae71 : nop
        push offset public_6fb9e48 @0x6f3ae71*/
  FIXUP public_6f3ae71 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9e48
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3ae95
        push 0
        call dword ptr ds : [public_6fb3044]
        mov eax, dword ptr ss : [esp+0x11C]
        fstp dword ptr ds : [eax+0x10]
        jmp public_6f3b00e
/*FIXUP public_6f3ae95 : nop
        push offset public_6fb9e2c @0x6f3ae95*/
  FIXUP public_6f3ae95 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9e2c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3af66
        push 0
        call dword ptr ds : [public_6fb3048]
        lea edx, ss:[esp+0x14]
        public_6f3aeb2 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_6f3aeb2
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97f4 @0x6f3aece*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97f4
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3aef0
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x11C]
        mov dword ptr ds : [eax+0x1C], edx
        jmp public_6f3b00e
        public_6f3aef0 : nop
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97ec @0x6f3aef4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97ec
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3af16
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x11C]
        mov dword ptr ds : [eax+0x18], edx
        jmp public_6f3b00e
        public_6f3af16 : nop
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97e8 @0x6f3af1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97e8
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3af3c
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x11C]
        mov dword ptr ds : [eax+0x20], edx
        jmp public_6f3b00e
        public_6f3af3c : nop
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97e0 @0x6f3af40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97e0
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3b00e
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x11C]
        mov dword ptr ds : [eax+0x24], edx
        jmp public_6f3b00e
/*FIXUP public_6f3af66 : nop
        push offset public_6fb9e0c @0x6f3af66*/
  FIXUP public_6f3af66 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9e0c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3af8a
        push 0
        call dword ptr ds : [public_6fb3044]
        mov ecx, dword ptr ss : [esp+0x11C]
        fstp dword ptr ds : [ecx+0x28]
        jmp public_6f3b00e
/*FIXUP public_6f3af8a : nop
        push offset public_6fb9df0 @0x6f3af8a*/
  FIXUP public_6f3af8a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9df0
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3afab
        push 0
        call dword ptr ds : [public_6fb3044]
        mov edx, dword ptr ss : [esp+0x11C]
        fstp dword ptr ds : [edx+0x2C]
        jmp public_6f3b00e
/*FIXUP public_6f3afab : nop
        push offset public_6fb9dd4 @0x6f3afab*/
  FIXUP public_6f3afab : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9dd4
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3afcc
        push 0
        call dword ptr ds : [public_6fb3044]
        mov eax, dword ptr ss : [esp+0x11C]
        fstp dword ptr ds : [eax+0x30]
        jmp public_6f3b00e
/*FIXUP public_6f3afcc : nop
        push offset public_6fb9db8 @0x6f3afcc*/
  FIXUP public_6f3afcc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9db8
        call ebx
        test al, al
        je public_6f3b00e
        mov ecx, esi
        call dword ptr ds : [public_6fb3054]
        mov edi, eax
/*FIXUP push offset public_6fb9848 @0x6f3afe1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9848
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3aff4
        mov al, 1
        jmp public_6f3b004
/*FIXUP public_6f3aff4 : nop
        push offset public_6fb9840 @0x6f3aff4*/
  FIXUP public_6f3aff4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9840
        push edi
        call ebp
        add esp, 8
        test eax, eax
        setne al
        public_6f3b004 : nop
        mov ecx, dword ptr ss : [esp+0x11C]
        mov byte ptr ds : [ecx+0x14], al
        public_6f3b00e : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f3ad70
        pop edi
        pop ebp
        pop ebx
        public_6f3b021 : nop
        pop esi
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x6f3ad40)
    }
}

#undef public_6f3ad70
#undef public_6f3ad9d
#undef public_6f3adc0
#undef public_6f3adfe
#undef public_6f3ae23
#undef public_6f3ae4d
#undef public_6f3ae71
#undef public_6f3ae95
#undef public_6f3aeb2
#undef public_6f3aef0
#undef public_6f3af16
#undef public_6f3af3c
#undef public_6f3af66
#undef public_6f3af8a
#undef public_6f3afab
#undef public_6f3afcc
#undef public_6f3aff4
#undef public_6f3b004
#undef public_6f3b00e
#undef public_6f3b021
