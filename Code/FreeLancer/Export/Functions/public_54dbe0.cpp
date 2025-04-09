#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_4205c0);
CLANG_FORWARD_PROC_SYMBOL(public_420690);
CLANG_FORWARD_PROC_SYMBOL(public_4206c0);
CLANG_FORWARD_PROC_SYMBOL(public_54dbe0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_54dc10 _public_54dc10
#define public_54dc58 _public_54dc58
#define public_54dc72 _public_54dc72
#define public_54dc84 _public_54dc84
#define public_54dc88 _public_54dc88
#define public_54dcb5 _public_54dcb5
#define public_54dcc3 _public_54dcc3
#define public_54dce5 _public_54dce5
#define public_54dd21 _public_54dd21
#define public_54dd3b _public_54dd3b
#define public_54dd67 _public_54dd67
#define public_54dd69 _public_54dd69
#define public_54dd7b _public_54dd7b
#define public_54dd83 _public_54dd83
#define public_54dd99 _public_54dd99
#define public_54ddb3 _public_54ddb3

PROC_DECLARE(0x54dbe0, internal_54dbe0, public_54dbe0);
extern "C" NAKED register_t __cdecl internal_54dbe0()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        push edi
        mov edi, ecx
        mov ecx, esi
        mov dword ptr ds : [edi+0x30], 0x3E99999A
        mov byte ptr ds : [edi+0x7C], 1
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_54dd7b
        push ebx
        mov ebx, dword ptr ds : [public_5c6cf4]
        push ebp
        mov edi, edi
/*FIXUP public_54dc10 : nop
        push offset public_5c9660 @0x54dc10*/
  FIXUP public_54dc10 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9660
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_54dcc3
        call dword ptr ds : [public_5c6698]
        mov ebx, eax
        push ebx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x48], 0
        call public_4205c0
        mov ecx, dword ptr ss : [esp+0x48]
        lea eax, ss:[esp+0x24]
        push eax
        call public_420690
        test al, al
        je public_54dc58
        mov ecx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [ecx+0x14]
        jmp public_54dc72
        public_54dc58 : nop
        mov ebp, dword ptr ss : [esp+0x48]
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        call public_4206c0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp+0x14], eax
        public_54dc72 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        cmp eax, dword ptr ds : [ecx+4]
        je public_54dc84
        lea ebp, ds:[eax+0x28]
        test ebp, ebp
        jne public_54dcb5
        jmp public_54dc88
        public_54dc84 : nop
        mov ebp, dword ptr ss : [esp+0x44]
        public_54dc88 : nop
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x1C]
        call public_411c50
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_5c6d18]
        push ebx
        push 0xF2
/*FIXUP push offset public_5da4a0 @0x54dca5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4a0
/*FIXUP push offset public_5c958c @0x54dcaa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push edx
        call dword ptr ds : [eax]
        add esp, 0x14
        public_54dcb5 : nop
        mov ebx, dword ptr ds : [public_5c6cf4]
        mov dword ptr ds : [edi+0x20], ebp
        jmp public_54dd69
/*FIXUP public_54dcc3 : nop
        push offset public_5dcf88 @0x54dcc3*/
  FIXUP public_54dcc3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcf88
        call ebx
        test al, al
        mov ecx, esi
        je public_54dce5
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [edi+0x10], eax
        jmp public_54dd69
/*FIXUP public_54dce5 : nop
        push offset public_5e0af8 @0x54dce5*/
  FIXUP public_54dce5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0af8
        call ebx
        test al, al
        mov ecx, esi
        je public_54dd21
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x24]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fcom dword ptr ds : [edi+0x24]
        fst dword ptr ds : [edi+0x28]
        fnstsw ax
        test ah, 5
        jp public_54dd67
        fld dword ptr ds : [edi+0x24]
        fxch 
        fstp dword ptr ds : [edi+0x24]
        fstp dword ptr ds : [edi+0x28]
        jmp public_54dd69
/*FIXUP public_54dd21 : nop
        push offset public_5e0aec @0x54dd21*/
  FIXUP public_54dd21 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0aec
        call ebx
        test al, al
        mov ecx, esi
        je public_54dd3b
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+8]
        jmp public_54dd69
/*FIXUP public_54dd3b : nop
        push offset public_5e0ad8 @0x54dd3b*/
  FIXUP public_54dd3b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0ad8
        call ebx
        test al, al
        mov ecx, esi
        je public_54dd99
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcom dword ptr ds : [public_5c75dc]
        fst dword ptr ds : [edi+0x30]
        fnstsw ax
        test ah, 0x41
        jne public_54dd83
        mov dword ptr ds : [edi+0x30], 0x3F800000
        public_54dd67 : nop
        fstp st(0)
        public_54dd69 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_54dc10
        pop ebp
        pop ebx
        public_54dd7b : nop
        pop edi
        pop esi
        add esp, 0x30
        ret 8
        public_54dd83 : nop
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_54dd69
        mov dword ptr ds : [edi+0x30], 0
        jmp public_54dd69
/*FIXUP public_54dd99 : nop
        push offset public_5daef0 @0x54dd99*/
  FIXUP public_54dd99 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5daef0
        call ebx
        test al, al
        mov ecx, esi
        je public_54ddb3
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x70]
        jmp public_54dd69
/*FIXUP public_54ddb3 : nop
        push offset public_5dcf40 @0x54ddb3*/
  FIXUP public_54ddb3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcf40
        call ebx
        test al, al
        je public_54dd69
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x1C]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[edi+0x64]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        jmp public_54dd69
        UNREACHABLE_TRAP(0x54dbe0)
    }
}

#undef public_54dc10
#undef public_54dc58
#undef public_54dc72
#undef public_54dc84
#undef public_54dc88
#undef public_54dcb5
#undef public_54dcc3
#undef public_54dce5
#undef public_54dd21
#undef public_54dd3b
#undef public_54dd67
#undef public_54dd69
#undef public_54dd7b
#undef public_54dd83
#undef public_54dd99
#undef public_54ddb3
