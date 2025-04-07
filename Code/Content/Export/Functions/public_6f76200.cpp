#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e540);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ea20);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f76200);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6f7627f _public_6f7627f
#define public_6f76283 _public_6f76283
#define public_6f762ab _public_6f762ab
#define public_6f762d0 _public_6f762d0
#define public_6f762f0 _public_6f762f0
#define public_6f76307 _public_6f76307
#define public_6f76330 _public_6f76330
#define public_6f7633e _public_6f7633e

PROC_DECLARE(0x6f76200, internal_6f76200, public_6f76200);
extern "C" NAKED register_t __cdecl internal_6f76200()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ds : [public_6fd3a6c]
        test eax, eax
        push esi
        mov esi, dword ptr ds : [public_6fd3a60]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+4], ecx
        je public_6f7627f
        lea eax, ss:[esp+8]
        push eax
        mov ecx, offset public_6fd3a5c
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f7627f
        mov eax, dword ptr ds : [public_6fd3a60]
        cmp esi, eax
        jne public_6f7627f
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, offset public_6fd3a5c
        call public_6f2ea20
        mov eax, dword ptr ds : [public_6fd3a64]
        mov edx, dword ptr ds : [public_6fd3a60]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [public_6fd3a60]
        mov dword ptr ds : [public_6fd3a6c], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6fd3a60]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_6fd3a5c
        mov dword ptr ds : [eax+8], eax
        call public_6f1df30
        jmp public_6f762ab
        public_6f7627f : nop
        cmp ecx, esi
        je public_6f762ab
        public_6f76283 : nop
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ss:[esp+0xC]
        call public_6f2cee0
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6fd3a5c
        call public_6f2e540
        cmp dword ptr ss : [esp+4], esi
        jne public_6f76283
        public_6f762ab : nop
        call public_6f75f80
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f7633e
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        push edi
        mov edi, dword ptr ds : [public_6fb3018]
        mov edi, edi
/*FIXUP public_6f762d0 : nop
        push offset public_6fbbeec @0x6f762d0*/
  FIXUP public_6f762d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbeec
        mov ecx, esi
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f76330
        mov ecx, esi
        call edi
        test al, al
        je public_6f76330
        lea esp, ss:[esp]
/*FIXUP public_6f762f0 : nop
        push offset public_6fbbef8 @0x6f762f0*/
  FIXUP public_6f762f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbef8
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        jne public_6f76307
        call edi
        test al, al
        jne public_6f762f0
        jmp public_6f76330
        public_6f76307 : nop
        call dword ptr ds : [public_6fb3054]
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        call dword ptr ds : [public_6fb3628]
        add esp, 8
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_6fd3a5c
        call public_6f7b0f0
        public_6f76330 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f762d0
        pop edi
        pop ebx
        public_6f7633e : nop
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f76200)
    }
}

#undef public_6f7627f
#undef public_6f76283
#undef public_6f762ab
#undef public_6f762d0
#undef public_6f762f0
#undef public_6f76307
#undef public_6f76330
#undef public_6f7633e
