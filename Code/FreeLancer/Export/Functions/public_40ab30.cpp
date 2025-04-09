#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406dc0);

#define public_40ac1e _public_40ac1e
#define public_40ac9a _public_40ac9a
#define public_40ad16 _public_40ad16
#define public_40ad3f _public_40ad3f
#define public_40ad68 _public_40ad68
#define public_40ad8e _public_40ad8e
#define public_40adb4 _public_40adb4
#define public_40addd _public_40addd
#define public_40ae2e _public_40ae2e
#define public_40ae57 _public_40ae57
#define public_40ae5c _public_40ae5c

PROC_DECLARE(0x40ab30, internal_40ab30, public_40ab30);
extern "C" NAKED register_t __cdecl internal_40ab30()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        push edi
        push esi
        mov edi, ecx
        mov byte ptr ss : [esp+0x17], 1
        call public_406dc0
        test al, al
        jne public_40ae5c
        mov ebp, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5c7f6c @0x40ab56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f6c
        mov ecx, esi
        call ebp
        test al, al
        mov ecx, esi
        je public_40ac1e
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x20]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x24]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        lea ecx, ds:[edi+0x60]
        lea eax, ds:[edi+0x54]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [eax], edx
        fstp dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [eax+4], esi
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ecx]
        mov ebx, dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_5c7474]
        mov dword ptr ds : [eax+8], ebx
        fnstsw ax
        test ah, 0x44
        jp public_40ae5c
        fld dword ptr ds : [edi+0x64]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_40ae5c
        fld dword ptr ds : [edi+0x68]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_40ae5c
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], ebx
        pop ebx
        add esp, 0x1C
        ret 4
/*FIXUP public_40ac1e : nop
        push offset public_5c7f5c @0x40ac1e*/
  FIXUP public_40ac1e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f5c
        call ebp
        test al, al
        mov ecx, esi
        je public_40ac9a
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x20]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x24]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        add edi, 0x60
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [edi], ecx
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [edi+4], edx
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+8], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
/*FIXUP public_40ac9a : nop
        push offset public_5c7f50 @0x40ac9a*/
  FIXUP public_40ac9a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f50
        call ebp
        test al, al
        mov ecx, esi
        je public_40ad16
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x20]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x24]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        add edi, 0x6C
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [edi], ecx
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [edi+4], edx
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+8], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
/*FIXUP public_40ad16 : nop
        push offset public_5c7f44 @0x40ad16*/
  FIXUP public_40ad16 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f44
        call ebp
        test al, al
        mov ecx, esi
        je public_40ad3f
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x80]
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
/*FIXUP public_40ad3f : nop
        push offset public_5c7f38 @0x40ad3f*/
  FIXUP public_40ad3f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f38
        call ebp
        test al, al
        mov ecx, esi
        je public_40ad68
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x88]
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
/*FIXUP public_40ad68 : nop
        push offset public_5c7f2c @0x40ad68*/
  FIXUP public_40ad68 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f2c
        call ebp
        test al, al
        mov ecx, esi
        je public_40ad8e
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x78]
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
/*FIXUP public_40ad8e : nop
        push offset public_5c7f20 @0x40ad8e*/
  FIXUP public_40ad8e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f20
        call ebp
        test al, al
        mov ecx, esi
        je public_40adb4
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x7C]
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
/*FIXUP public_40adb4 : nop
        push offset public_5c7f10 @0x40adb4*/
  FIXUP public_40adb4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f10
        call ebp
        test al, al
        mov ecx, esi
        je public_40addd
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x84]
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
/*FIXUP public_40addd : nop
        push offset public_5c7f04 @0x40addd*/
  FIXUP public_40addd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f04
        call ebp
        test al, al
        mov ecx, esi
        je public_40ae2e
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x30]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fmul dword ptr ds : [public_5c77f4]
        mov al, byte ptr ss : [esp+0x13]
        fcos 
        fstp dword ptr ds : [edi+0x8C]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_5c77f4]
        fcos 
        fstp dword ptr ds : [edi+0x90]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
/*FIXUP public_40ae2e : nop
        push offset public_5c7ef0 @0x40ae2e*/
  FIXUP public_40ae2e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7ef0
        call ebp
        test al, al
        je public_40ae57
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x94]
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
        public_40ae57 : nop
        mov byte ptr ss : [esp+0x13], 0
        public_40ae5c : nop
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x40ab30)
    }
}

#undef public_40ac1e
#undef public_40ac9a
#undef public_40ad16
#undef public_40ad3f
#undef public_40ad68
#undef public_40ad8e
#undef public_40adb4
#undef public_40addd
#undef public_40ae2e
#undef public_40ae57
#undef public_40ae5c
