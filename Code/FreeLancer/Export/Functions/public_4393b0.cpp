#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4393b0);
CLANG_FORWARD_PROC_SYMBOL(public_43bca0);
CLANG_FORWARD_PROC_SYMBOL(public_43bd30);
CLANG_FORWARD_PROC_SYMBOL(public_43bd90);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_46d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_535980);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9310);

#define public_4393f0 _public_4393f0
#define public_439420 _public_439420
#define public_439452 _public_439452
#define public_43949e _public_43949e
#define public_4394b2 _public_4394b2
#define public_4394f8 _public_4394f8
#define public_439521 _public_439521
#define public_43952d _public_43952d

PROC_DECLARE(0x4393b0, internal_4393b0, public_4393b0);
extern "C" NAKED register_t __cdecl internal_4393b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9310 @0x4393b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9310
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x54
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        call dword ptr ds : [public_5c615c]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_43949e
        xor ebp, ebp
        nop 
        lea esp, ss:[esp]
        public_4393f0 : nop
        mov edi, dword ptr ds : [ebx+8]
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x5C]
        call public_43bca0
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x54], ebp
        mov dword ptr ss : [esp+0x4C], edi
        mov eax, dword ptr ds : [edi+0x28]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x6C], ebp
        je public_439452
        lea ebx, ds:[ebx]
        public_439420 : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x5C]
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov dword ptr ss : [esp+0x40], eax
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x4C], ebp
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x54], ebp
        call public_43bd30
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x28]
        jne public_439420
        public_439452 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        call public_43bd90
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x6C], 1
        call public_535980
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x6C], 0xFFFFFFFF
        call public_4a2d30
        mov ecx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [ecx+4]
        jne public_4393f0
        mov esi, dword ptr ss : [esp+0x14]
        public_43949e : nop
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_43952d
        add esi, 0x20
        mov dword ptr ss : [esp+0x18], esi
        public_4394b2 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        lea edi, ss:[ebp+8]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x30], edi
        call public_46d6d0
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_46d660
        mov eax, dword ptr ds : [edi+0x10]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_439521
        mov ecx, dword ptr ss : [esp+0x14]
        lea ebx, ds:[ecx+0xC]
        public_4394f8 : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edx+4]
        lea eax, ds:[esi+8]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x2C], ecx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, ebx
        call public_46d6d0
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x10]
        jne public_4394f8
        public_439521 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [edx+4]
        jne public_4394b2
        public_43952d : nop
        mov ecx, dword ptr ss : [esp+0x64]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 
        UNREACHABLE_TRAP(0x4393b0)
    }
}

#undef public_4393f0
#undef public_439420
#undef public_439452
#undef public_43949e
#undef public_4394b2
#undef public_4394f8
#undef public_439521
#undef public_43952d
