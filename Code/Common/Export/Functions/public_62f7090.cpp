#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f6de0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63105b0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);

#define public_62f70f6 _public_62f70f6
#define public_62f7122 _public_62f7122
#define public_62f714e _public_62f714e
#define public_62f7186 _public_62f7186
#define public_62f71a1 _public_62f71a1
#define public_62f71ab _public_62f71ab
#define public_62f71c4 _public_62f71c4
#define public_62f71d3 _public_62f71d3
#define public_62f71f8 _public_62f71f8
#define public_62f721d _public_62f721d
#define public_62f724a _public_62f724a
#define public_62f726f _public_62f726f
#define public_62f729a _public_62f729a
#define public_62f72c0 _public_62f72c0
#define public_62f72d5 _public_62f72d5
#define public_62f72e5 _public_62f72e5
#define public_62f7302 _public_62f7302
#define public_62f7307 _public_62f7307
#define public_62f732c _public_62f732c
#define public_62f7334 _public_62f7334
#define public_62f7343 _public_62f7343

PROC_DECLARE(0x62f7090, internal_62f7090, public_62f7090);
extern "C" NAKED register_t __cdecl internal_62f7090()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        mov edi, ecx
        call public_62f6de0
        test al, al
        jne public_62f7343
/*FIXUP push offset public_63a1d68 @0x62f70a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d68
        mov ecx, esi
        call public_6310410
        test al, al
        jne public_62f7334
/*FIXUP push offset public_63a1d5c @0x62f70bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d5c
        mov ecx, esi
        call public_6310410
        test al, al
        jne public_62f7334
/*FIXUP push offset public_63a1d4c @0x62f70cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d4c
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f70f6
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x84]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_62f70f6 : nop
        push offset public_63a1d40 @0x62f70f6*/
  FIXUP public_62f70f6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d40
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f7122
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [edi+0x88], eax
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_62f7122 : nop
        push offset public_63a1d38 @0x62f7122*/
  FIXUP public_62f7122 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d38
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f714e
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [edi+0x8C], eax
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_62f714e : nop
        push offset public_63a1d30 @0x62f714e*/
  FIXUP public_62f714e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d30
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f71d3
        call public_6310b70
        mov ebx, dword ptr ds : [public_639902c]
        mov esi, eax
        push esi
/*FIXUP push offset public_63a1d28 @0x62f716c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d28
        call ebx
        add esp, 8
        test eax, eax
        jne public_62f7186
        mov dword ptr ds : [edi+0x90], 1
        jmp public_62f71ab
        public_62f7186 : nop
        push esi
/*FIXUP push offset public_63a1d20 @0x62f7187*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d20
        call ebx
        add esp, 8
        test eax, eax
        jne public_62f71a1
        mov dword ptr ds : [edi+0x90], 2
        jmp public_62f71ab
        public_62f71a1 : nop
        mov dword ptr ds : [edi+0x90], 0
        public_62f71ab : nop
        mov eax, dword ptr ds : [edi+0x90]
        test eax, eax
        jne public_62f71c4
        mov dword ptr ds : [edi+0x10], 0x2000000
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_62f71c4 : nop
        mov dword ptr ds : [edi+0x10], 0x1000000
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_62f71d3 : nop
        push offset public_63a1d10 @0x62f71d3*/
  FIXUP public_62f71d3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d10
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f71f8
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x94]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_62f71f8 : nop
        push offset public_63a1d00 @0x62f71f8*/
  FIXUP public_62f71f8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d00
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f721d
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x98]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_62f721d : nop
        push offset public_63a1cf0 @0x62f721d*/
  FIXUP public_62f721d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1cf0
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f724a
        push 0
        call public_63108f0
        fmul dword ptr ds : [public_639d210]
        mov al, 1
        fcos 
        fstp dword ptr ds : [edi+0x9C]
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_62f724a : nop
        push offset public_63a1cd8 @0x62f724a*/
  FIXUP public_62f724a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1cd8
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f726f
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0xA0]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_62f726f : nop
        push offset public_63a1cc8 @0x62f726f*/
  FIXUP public_62f726f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1cc8
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f729a
        push 0
        call public_63108f0
        fld st(0)
        fmul st, st(1)
        mov al, 1
        fstp dword ptr ds : [edi+0xA4]
        pop edi
        pop esi
        fstp st(0)
        pop ebx
        ret 4
/*FIXUP public_62f729a : nop
        push offset public_63a15ac @0x62f729a*/
  FIXUP public_62f729a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a15ac
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f7307
        push ebp
        call public_6310b70
        mov ebp, eax
        mov esi, offset public_63eca40
        xor ebx, ebx
        lea esp, ss:[esp]
        public_62f72c0 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62f72d5
        push eax
        push ebp
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_62f7302
        public_62f72d5 : nop
        add ebx, 8
        add esi, 8
        cmp ebx, 0x1F8
        jb public_62f72c0
        xor esi, esi
        public_62f72e5 : nop
        test esi, esi
        mov dword ptr ds : [edi+0xA8], esi
        pop ebp
        jne public_62f7343
        mov dword ptr ds : [edi+0xA8], 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_62f7302 : nop
        mov esi, dword ptr ds : [esi+4]
        jmp public_62f72e5
/*FIXUP public_62f7307 : nop
        push offset public_63a1cb4 @0x62f7307*/
  FIXUP public_62f7307 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1cb4
        call public_6310410
        test al, al
        je public_62f732c
        push 0
        mov ecx, esi
        call public_63105b0
        mov byte ptr ds : [edi+0xAC], al
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_62f732c : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        public_62f7334 : nop
        push 0
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+0x80]
        public_62f7343 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62f7090)
    }
}

#undef public_62f70f6
#undef public_62f7122
#undef public_62f714e
#undef public_62f7186
#undef public_62f71a1
#undef public_62f71ab
#undef public_62f71c4
#undef public_62f71d3
#undef public_62f71f8
#undef public_62f721d
#undef public_62f724a
#undef public_62f726f
#undef public_62f729a
#undef public_62f72c0
#undef public_62f72d5
#undef public_62f72e5
#undef public_62f7302
#undef public_62f7307
#undef public_62f732c
#undef public_62f7334
#undef public_62f7343
