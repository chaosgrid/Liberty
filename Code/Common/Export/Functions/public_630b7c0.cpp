#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b560);
CLANG_FORWARD_PROC_SYMBOL(public_628e250);
CLANG_FORWARD_PROC_SYMBOL(public_62fcce0);
CLANG_FORWARD_PROC_SYMBOL(public_630b7c0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63107c0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_630b7f5 _public_630b7f5
#define public_630b81b _public_630b81b
#define public_630b841 _public_630b841
#define public_630b867 _public_630b867
#define public_630b8a0 _public_630b8a0
#define public_630b8b8 _public_630b8b8
#define public_630b922 _public_630b922
#define public_630b93a _public_630b93a
#define public_630b960 _public_630b960
#define public_630b975 _public_630b975
#define public_630b98c _public_630b98c
#define public_630b99e _public_630b99e
#define public_630ba1b _public_630ba1b
#define public_630ba48 _public_630ba48
#define public_630ba6e _public_630ba6e
#define public_630baaf _public_630baaf
#define public_630bad5 _public_630bad5
#define public_630bafb _public_630bafb
#define public_630bb15 _public_630bb15

PROC_DECLARE(0x630b7c0, internal_630b7c0, public_630b7c0);
extern "C" NAKED register_t __cdecl internal_630b7c0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
/*FIXUP push offset public_63a3560 @0x630b7cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3560
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_630b7f5
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
/*FIXUP public_630b7f5 : nop
        push offset public_63a3558 @0x630b7f5*/
  FIXUP public_630b7f5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3558
        call public_6310410
        test al, al
        mov ecx, esi
        je public_630b81b
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+8]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
/*FIXUP public_630b81b : nop
        push offset public_63a1d5c @0x630b81b*/
  FIXUP public_630b81b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d5c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_630b841
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0xC]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
/*FIXUP public_630b841 : nop
        push offset public_63a1d4c @0x630b841*/
  FIXUP public_630b841 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d4c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_630b867
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x10]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
/*FIXUP public_630b867 : nop
        push offset public_639ef48 @0x630b867*/
  FIXUP public_630b867 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ef48
        call public_6310410
        test al, al
        mov ecx, esi
        je public_630b8b8
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x18]
        push 1
        mov ecx, esi
        call public_6310560
        test al, al
        je public_630b8a0
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [edi+0x1C], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_630b8a0 : nop
        push 1
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+0x1C]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
/*FIXUP public_630b8b8 : nop
        push offset public_63a3550 @0x630b8b8*/
  FIXUP public_630b8b8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3550
        call public_6310410
        test al, al
        je public_630b93a
        lea ecx, ss:[esp+0x10]
        call public_6333e40
        mov eax, dword ptr ds : [edi+0x24]
        lea ecx, ds:[edi+0x20]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call public_62fcce0
        mov ecx, dword ptr ds : [edi+0x24]
        mov edi, dword ptr ds : [ecx+4]
        push 0
        mov ecx, esi
        add edi, 8
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        push 1
        mov ecx, esi
        mov dword ptr ds : [edi], eax
        call public_6310560
        test al, al
        je public_630b922
        mov dword ptr ds : [edi+4], 0xBF800000
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_630b922 : nop
        push 1
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
/*FIXUP public_630b93a : nop
        push offset public_63a3548 @0x630b93a*/
  FIXUP public_630b93a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3548
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_630b99e
        call public_6310b70
        mov ebp, eax
        mov esi, offset public_63ed218
        xor ebx, ebx
        lea ebx, ds:[ebx]
        public_630b960 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_630b975
        push eax
        push ebp
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_630b98c
        public_630b975 : nop
        add ebx, 8
        add esi, 8
        cmp ebx, 0x18
        jb public_630b960
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_630b98c : nop
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+0x14], esi
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
/*FIXUP public_630b99e : nop
        push offset public_63a1a18 @0x630b99e*/
  FIXUP public_630b99e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1a18
        call public_6310410
        test al, al
        je public_630ba1b
        lea ecx, ss:[esp+0x10]
        call public_6333e40
        mov eax, dword ptr ds : [edi+0x58]
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ds:[edi+0x50]
        push 1
        push eax
        mov dword ptr ss : [esp+0x20], 0
        call public_626b560
        mov edi, dword ptr ds : [edi+0x58]
        push 0
        mov ecx, esi
        sub edi, 8
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        push 1
        mov ecx, esi
        mov dword ptr ds : [edi], eax
        call public_6310560
        test al, al
        jne public_630bb15
        push 1
        mov ecx, esi
        call public_63107c0
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        mov al, 1
        fstp dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
/*FIXUP public_630ba1b : nop
        push offset public_63a3534 @0x630ba1b*/
  FIXUP public_630ba1b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3534
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_630ba48
        push 0
        call public_63108f0
        call public_6391dae
        mov dword ptr ds : [edi+0x2C], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
/*FIXUP public_630ba48 : nop
        push offset public_63a3524 @0x630ba48*/
  FIXUP public_630ba48 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3524
        call public_6310410
        test al, al
        mov ecx, esi
        je public_630ba6e
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x30]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
/*FIXUP public_630ba6e : nop
        push offset public_63a350c @0x630ba6e*/
  FIXUP public_630ba6e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a350c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_630baaf
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ds:[edi+0x40]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_628e250
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
/*FIXUP public_630baaf : nop
        push offset public_63a34f4 @0x630baaf*/
  FIXUP public_630baaf : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a34f4
        call public_6310410
        test al, al
        mov ecx, esi
        je public_630bad5
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x3C]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
/*FIXUP public_630bad5 : nop
        push offset public_63a34d8 @0x630bad5*/
  FIXUP public_630bad5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a34d8
        call public_6310410
        test al, al
        mov ecx, esi
        je public_630bafb
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x34]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
/*FIXUP public_630bafb : nop
        push offset public_63a34c4 @0x630bafb*/
  FIXUP public_630bafb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a34c4
        call public_6310410
        test al, al
        je public_630bb15
        push 0
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+0x38]
        public_630bb15 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x630b7c0)
    }
}

#undef public_630b7f5
#undef public_630b81b
#undef public_630b841
#undef public_630b867
#undef public_630b8a0
#undef public_630b8b8
#undef public_630b922
#undef public_630b93a
#undef public_630b960
#undef public_630b975
#undef public_630b98c
#undef public_630b99e
#undef public_630ba1b
#undef public_630ba48
#undef public_630ba6e
#undef public_630baaf
#undef public_630bad5
#undef public_630bafb
#undef public_630bb15
