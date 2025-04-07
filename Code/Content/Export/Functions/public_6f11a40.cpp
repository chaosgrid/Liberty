#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f11a40);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f980);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad6ee);

#define public_6f11a90 _public_6f11a90
#define public_6f11aa9 _public_6f11aa9
#define public_6f11b10 _public_6f11b10
#define public_6f11b25 _public_6f11b25
#define public_6f11b50 _public_6f11b50
#define public_6f11b65 _public_6f11b65

PROC_DECLARE(0x6f11a40, internal_6f11a40, public_6f11a40);
extern "C" NAKED register_t __cdecl internal_6f11a40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad6ee @0x6f11a42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad6ee
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        xor ebp, ebp
        mov dword ptr ss : [esp+0x2C], ebp
        lea esi, ds:[ebx+0x54]
        mov dword ptr ss : [esp+0x18], esi
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 2
        call public_6f1df30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_6f11aa9
        nop 
        lea esp, ss:[esp]
        public_6f11a90 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f11a90
        public_6f11aa9 : nop
        mov edi, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f1df30
        mov edx, dword ptr ds : [eax]
        push edi
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call public_6fa8370
        mov edi, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 1
        call public_6f1df30
        mov edx, dword ptr ds : [eax]
        push edi
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call public_6fa8370
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov ebp, dword ptr ds : [ebx+0x4C]
        mov esi, dword ptr ss : [ebp]
        lea edi, ds:[ebx+0x48]
        add esp, 4
        cmp esi, ebp
        mov byte ptr ss : [esp+0x2C], 0
        je public_6f11b25
        public_6f11b10 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebp
        jne public_6f11b10
        public_6f11b25 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov edi, dword ptr ds : [ebx+0x40]
        mov esi, dword ptr ds : [edi]
        lea ebp, ds:[ebx+0x3C]
        add esp, 4
        cmp esi, edi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_6f11b65
        lea ecx, ds:[ecx]
        public_6f11b50 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebp
        call public_6f1f980
        cmp esi, edi
        jne public_6f11b50
        public_6f11b65 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f11a40)
    }
}

#undef public_6f11a90
#undef public_6f11aa9
#undef public_6f11b10
#undef public_6f11b25
#undef public_6f11b50
#undef public_6f11b65
