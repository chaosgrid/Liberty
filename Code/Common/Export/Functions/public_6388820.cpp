#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_637e2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6385600);
CLANG_FORWARD_PROC_SYMBOL(public_6386380);
CLANG_FORWARD_PROC_SYMBOL(public_6388820);

#define public_63888a5 _public_63888a5
#define public_63888ac _public_63888ac
#define public_63888ca _public_63888ca
#define public_63888d0 _public_63888d0
#define public_63888e9 _public_63888e9
#define public_63888f5 _public_63888f5
#define public_6388924 _public_6388924
#define public_6388959 _public_6388959
#define public_6388981 _public_6388981
#define public_6388999 _public_6388999

PROC_DECLARE(0x6388820, internal_6388820, public_6388820);
extern "C" NAKED register_t __cdecl internal_6388820()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        test ebp, ebp
        push esi
        push edi
        je public_6388999
        mov ebx, dword ptr ss : [esp+0x30]
        mov edi, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x28]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        push ebx
        push edi
        push esi
        call public_6385600
        push ebx
        push edi
        push esi
        call public_6386380
        push eax
        mov dword ptr ss : [esp+0x5C], eax
        call public_636ec10
        add esp, 0x30
        push eax
/*FIXUP push offset public_63f7cb4 @0x6388876*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7cb4
        push ebp
        call dword ptr ds : [public_63991e8]
        lea edx, ss:[esp+0x38]
        push edx
        call public_636ecc0
        mov eax, dword ptr ss : [esp+0x38]
        add esp, 0x10
        test eax, eax
        je public_6388999
        test esi, esi
        je public_63888a5
        mov dword ptr ss : [esp+0x30], esi
        jmp public_63888ac
        public_63888a5 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x30], eax
        public_63888ac : nop
        mov ecx, dword ptr ds : [public_658b8e4]
        mov eax, dword ptr ds : [public_658b8e0]
        mov esi, dword ptr ss : [esp+0x30]
        inc ecx
        inc eax
        mov dword ptr ds : [public_658b8e4], ecx
        mov dword ptr ds : [public_658b8e0], eax
        jmp public_63888d0
        public_63888ca : nop
        mov ecx, dword ptr ds : [public_658b8e4]
        public_63888d0 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 8
        mov eax, dword ptr ds : [esi+0x34]
        je public_63888e9
        mov edx, dword ptr ds : [esi+0x3C]
        mov ebx, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [edx+4]
        jmp public_63888f5
        public_63888e9 : nop
        mov ebx, dword ptr ds : [eax+8]
        mov ebp, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+0x3C]
        mov edi, dword ptr ds : [eax+8]
        public_63888f5 : nop
        mov edx, dword ptr ds : [public_658b8e0]
        cmp dword ptr ds : [esi+0x48], edx
        jne public_6388924
        mov eax, dword ptr ds : [edi+0x4C]
        mov ecx, dword ptr ds : [esi+0x4C]
        push eax
        push ecx
/*FIXUP push offset public_63f8210 @0x6388908*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8210
        call public_6356960
        push edi
        push esi
        push 5
        call public_637e2e0
        mov ecx, dword ptr ds : [public_658b8e4]
        add esp, 0x18
        public_6388924 : nop
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        je public_6388981
        cmp dword ptr ds : [ebx+0x10], ecx
        je public_6388959
        mov edx, dword ptr ds : [ebx+8]
        push edx
        mov dword ptr ds : [ebx+0x10], ecx
        call public_6370570
        add esp, 4
        push eax
        mov eax, dword ptr ss : [esp+0x28]
/*FIXUP push offset public_63f7cb4 @0x6388944*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7cb4
        push eax
        call dword ptr ds : [public_63991e8]
        mov ecx, dword ptr ds : [public_658b8e4]
        add esp, 0xC
        public_6388959 : nop
        cmp dword ptr ss : [ebp+0x10], ecx
        je public_6388981
        mov dword ptr ss : [ebp+0x10], ecx
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6370570
        mov edx, dword ptr ss : [esp+0x28]
        add esp, 4
        push eax
/*FIXUP push offset public_63f7cb4 @0x6388972*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7cb4
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_6388981 : nop
        test edi, edi
        mov eax, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [esi+0x48], eax
        mov esi, edi
        je public_6388999
        cmp edi, dword ptr ss : [esp+0x30]
        jne public_63888ca
        public_6388999 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6388820)
    }
}

#undef public_63888a5
#undef public_63888ac
#undef public_63888ca
#undef public_63888d0
#undef public_63888e9
#undef public_63888f5
#undef public_6388924
#undef public_6388959
#undef public_6388981
#undef public_6388999
