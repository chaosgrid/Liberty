#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6801d10);
CLANG_FORWARD_PROC_SYMBOL(public_6801f70);
CLANG_FORWARD_PROC_SYMBOL(public_68020b0);
CLANG_FORWARD_PROC_SYMBOL(public_6802140);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_6805d80);

#define public_6809585 _public_6809585
#define public_6809598 _public_6809598
#define public_68095ae _public_68095ae
#define public_68095c6 _public_68095c6
#define public_68095f6 _public_68095f6
#define public_6809619 _public_6809619
#define public_6809630 _public_6809630
#define public_680965d _public_680965d

PROC_DECLARE(0x6809560, internal_6809560, public_6809560);
extern "C" NAKED register_t __cdecl internal_6809560()
{
    __asm
    {
        sub esp, 0xA4
        push ebx
        push ebp
        push esi
        push edi
        push 1
        xor ebp, ebp
        call public_6801cf0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_68095ae
        mov edi, 1
        lea ebx, ss:[esp+0x14]
        public_6809585 : nop
        cmp edi, 0x29
        jl public_6809598
/*FIXUP push offset public_680e288 @0x680958a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e288
        push edi
        call public_6805d80
        add esp, 8
        public_6809598 : nop
        mov dword ptr ds : [ebx], esi
        inc ebp
        add ebx, 4
        inc edi
        push edi
        call public_6801cf0
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_6809585
        public_68095ae : nop
        mov ebx, dword ptr ds : [public_680c080]
        xor esi, esi
        test ebp, ebp
        jle public_680965d
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x10], eax
        public_68095c6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push edx
        call public_6802420
/*FIXUP push offset public_680e120 @0x68095d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e120
        call public_6801f70
        push eax
        call public_6801d10
        add esp, 0xC
        test eax, eax
        je public_68095f6
/*FIXUP push offset public_680e260 @0x68095e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e260
        call public_6802e00
        add esp, 4
        public_68095f6 : nop
        push 1
        call public_6801cf0
        mov edi, eax
        push edi
        call public_68020b0
        add esp, 8
        test eax, eax
        jne public_6809619
/*FIXUP push offset public_680e234 @0x680960c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e234
        call public_6802e00
        add esp, 4
        public_6809619 : nop
        test esi, esi
        jle public_6809630
        mov eax, dword ptr ds : [public_680c050]
        add eax, 0x20
        push eax
/*FIXUP push offset public_680e230 @0x6809626*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e230
        call ebx
        add esp, 8
        public_6809630 : nop
        mov ecx, dword ptr ds : [public_680c050]
        add ecx, 0x20
        push ecx
        push edi
        call public_6802140
        add esp, 4
        push eax
        call ebx
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        inc esi
        add ecx, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], ecx
        jl public_68095c6
        public_680965d : nop
        mov edx, dword ptr ds : [public_680c050]
        add edx, 0x20
        push edx
/*FIXUP push offset public_680e22c @0x6809667*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e22c
        call ebx
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA4
        ret 
        UNREACHABLE_TRAP(0x6809560)
    }
}

#undef public_6809585
#undef public_6809598
#undef public_68095ae
#undef public_68095c6
#undef public_68095f6
#undef public_6809619
#undef public_6809630
#undef public_680965d
