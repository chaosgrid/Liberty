#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f51ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f55310);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f51f20 _public_6f51f20
#define public_6f51f3c _public_6f51f3c
#define public_6f51f3f _public_6f51f3f
#define public_6f51f5e _public_6f51f5e
#define public_6f51f7e _public_6f51f7e
#define public_6f51f99 _public_6f51f99
#define public_6f51fca _public_6f51fca

PROC_DECLARE(0x6f51ee0, internal_6f51ee0, public_6f51ee0);
extern "C" NAKED register_t __cdecl internal_6f51ee0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+0xC]
        sub esp, 0xC
        test al, al
        push ebx
        push esi
        push edi
        mov ebx, ecx
        je public_6f51f5e
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [ebx+0xB8]
        mov ecx, dword ptr ss : [esp+0x20]
        lea edi, ds:[ebx+0xB4]
        mov dword ptr ss : [esp+0xC], eax
        cmp esi, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x14], 1
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f51f3c
        lea esp, ss:[esp]
        public_6f51f20 : nop
        lea eax, ss:[esp+0xC]
        push eax
        push esi
        call public_6f55310
        add esp, 8
        test al, al
        jne public_6f51f3f
        mov eax, dword ptr ds : [edi+8]
        add esi, 0xC
        cmp esi, eax
        jne public_6f51f20
        public_6f51f3c : nop
        mov esi, dword ptr ds : [edi+8]
        public_6f51f3f : nop
        cmp esi, dword ptr ds : [edi+8]
        je public_6f51fca
        dec dword ptr ds : [esi+8]
        jne public_6f51fca
        push esi
        mov ecx, edi
        call public_6f53a60
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f51f5e : nop
        mov esi, dword ptr ds : [ebx+0xD8]
        mov edi, dword ptr ds : [esi+4]
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push 0x10
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f51f7e
        mov edi, eax
        public_6f51f7e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f51f99
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ecx
        public_6f51f99 : nop
        inc dword ptr ds : [ebx+0xDC]
        mov edx, dword ptr ds : [public_6fd0cd4]
        mov ecx, dword ptr ds : [public_6fbb78c]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x10], edx
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
/*FIXUP push offset public_6fd1c74 @0x6f51fb7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_6fb342c]
        add esp, 0xC
        pop ebp
        public_6f51fca : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f51ee0)
    }
}

#undef public_6f51f20
#undef public_6f51f3c
#undef public_6f51f3f
#undef public_6f51f5e
#undef public_6f51f7e
#undef public_6f51f99
#undef public_6f51fca
